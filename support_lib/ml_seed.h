/*
 * MIT License
 *
 * Copyright (c) 2016-2017 Kalray
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
float binary32_invtable_2pm7[128] = {
    0x1.000001p0,  0xf.e03f8p-4,  0xf.c0fc1p-4,  0xf.a232dp-4,  
    0xf.83e1p-4,  0xf.6603ep-4,  0xf.4898dp-4,  0xf.2b9d6p-4,  
    0xf.0f0f1p-4,  0xe.f2eb7p-4,  0xe.d7304p-4,  0xe.bbdb3p-4,  
    0xe.a0ea1p-4,  0xe.865acp-4,  0xe.6c2b4p-4,  0xe.52598p-4,  
    0xe.38e39p-4,  0xe.1fc78p-4,  0xe.07038p-4,  0xd.ee95cp-4,  
    0xd.d67c9p-4,  0xd.beb62p-4,  0xd.a740ep-4,  0xd.901b2p-4,  
    0xd.79436p-4,  0xd.62b81p-4,  0xd.4c77bp-4,  0xd.3680dp-4,  
    0xd.20d21p-4,  0xd.0b6ap-4,  0xc.f6475p-4,  0xc.e168ap-4,  
    0xc.ccccdp-4,  0xc.b8728p-4,  0xc.a4588p-4,  0xc.907dap-4,  
    0xc.7ce0cp-4,  0xc.6980cp-4,  0xc.565c8p-4,  0xc.4373p-4,  
    0xc.30c31p-4,  0xc.1e4bcp-4,  0xc.0c0c1p-4,  0xb.fa03p-4,  
    0xb.e82fap-4,  0xb.d691p-4,  0xb.c5264p-4,  0xb.b3ee7p-4,  
    0xb.a2e8cp-4,  0xb.92144p-4,  0xb.81703p-4,  0xb.70fbbp-4,  
    0xb.60b61p-4,  0xb.509e7p-4,  0xb.40b41p-4,  0xb.30f63p-4,  
    0xb.21643p-4,  0xb.11fd4p-4,  0xb.02c0bp-4,  0xa.f3adep-4,  
    0xa.e4c41p-4,  0xa.d602bp-4,  0xa.c7692p-4,  0xa.b8f6ap-4,  
    0xa.aaaabp-4,  0xa.9c84ap-4,  0xa.8e83fp-4,  0xa.80a81p-4,  
    0xa.72f05p-4,  0xa.655c4p-4,  0xa.57eb5p-4,  0xa.4a9cfp-4,  
    0xa.3d70ap-4,  0xa.3065ep-4,  0xa.237c3p-4,  0xa.16b31p-4,  
    0xa.0a0a1p-4,  0x9.fd80ap-4,  0x9.f1166p-4,  0x9.e4cadp-4,  
    0x9.d89d9p-4,  0x9.cc8e1p-4,  0x9.c09c1p-4,  0x9.b4c7p-4,  
    0x9.a90e8p-4,  0x9.9d723p-4,  0x9.91f1ap-4,  0x9.868c8p-4,  
    0x9.7b426p-4,  0x9.7012ep-4,  0x9.64fdap-4,  0x9.5a025p-4,  
    0x9.4f209p-4,  0x9.44581p-4,  0x9.39a86p-4,  0x9.2f114p-4,  
    0x9.24925p-4,  0x9.1a2b4p-4,  0x9.0fdbcp-4,  0x9.05a38p-4,  
    0x8.fb824p-4,  0x8.f177ap-4,  0x8.e7835p-4,  0x8.dda52p-4,  
    0x8.d3dcbp-4,  0x8.ca29cp-4,  0x8.c08c1p-4,  0x8.b7034p-4,  
    0x8.ad8f3p-4,  0x8.a42f8p-4,  0x8.9ae41p-4,  0x8.91ac7p-4,  
    0x8.88889p-4,  0x8.7f781p-4,  0x8.767abp-4,  0x8.6d905p-4,  
    0x8.64b8ap-4,  0x8.5bf37p-4,  0x8.53408p-4,  0x8.4a9fap-4,  
    0x8.42108p-4,  0x8.3993p-4,  0x8.3126fp-4,  0x8.28ccp-4,  
    0x8.20821p-4,  0x8.1848ep-4,  0x8.10204p-4,  0x8.08081p-4
};


float ml_binary32_invseed_2pm7(float x) {
    uint32_t ux = float_to_32b_encoding(x);
    uint32_t field_7msb = (ux >> (23-7)) & 0x7f;
    uint32_t sign = ux & 0x8000000u;
    //uint32_t exp = -(((ux >> 23) & 0xff) - 127) + 127;
    uint32_t exp = -((ux >> 23) & 0xff) + 254;
    uif_conv_t scale = {.u = sign | (exp << 23)};
    float inv = binary32_invtable_2pm7[field_7msb];

    return scale.f * inv;
}
