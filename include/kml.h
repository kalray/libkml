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
