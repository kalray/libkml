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

/**
 * \defgroup lib_kml lib_kml
 * \brief Implementation Elementary Functions
 * @{
 */

/** fp32 exponential, faithful rounding 
 *  @param x input
 *  @return expf(x) 
 */
float kml_exp_f2_f(float x);

/** fp64 exponential, faithful rounding 
 *  @param x input
 *  @return exp(x)
 */
double kml_exp_d2_f(double x);

/** fp32 logarithm, faithful rounding 
 *  @param x input
 *  @return logf(x)
 */
float kml_log_f2_f(float x);

/** fp64 logarithm, faithful rounding 
 *  @param x input
 *  @return log(x)
 */
double kml_log_d2_f(double x);

/** fp32 cosine, faithful rounding,
 *  validated over [-1000,1000] 
 *  @param x input
 *  @return cosf(x)
 */
float kml_cos_f2_f(float x);

/** fp32 sine, faithful rounding,
 *  validated over [-10,10] 
 *  @param x input
 *  @return sinf(x)
 */
float kml_sin_f2_f(float x);

/** @} */ // end of Doxygen's lib_kml defgroup
