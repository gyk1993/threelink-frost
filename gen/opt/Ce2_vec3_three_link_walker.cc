/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:48 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t4144;
  double t4150;
  double t4133;
  double t4145;
  double t7249;
  double t7250;
  double t7251;
  double t7265;
  double t7266;
  double t7267;
  double t7253;
  double t7254;
  double t7255;
  double t7256;
  double t7260;
  double t7273;
  double t7274;
  double t7275;
  double t7269;
  double t7270;
  double t7271;
  double t7277;
  double t7278;
  double t7279;
  double t7288;
  double t7289;
  double t7290;
  double t7297;
  double t7298;
  double t7299;
  double t7268;
  double t7276;
  double t7283;
  double t7284;
  double t7285;
  double t7286;
  double t7287;
  double t7291;
  double t7292;
  double t7293;
  double t7294;
  double t7295;
  double t7296;
  double t7300;
  double t7301;
  double t7304;
  double t7305;
  double t7306;
  double t7307;
  double t7308;
  double t7310;
  double t7311;
  double t7312;
  double t7313;
  double t7314;
  double t7303;
  double t7309;
  double t7315;
  double t7316;
  double t7327;
  double t7328;
  double t7329;
  double t7330;
  t4144 = Sin(var1[2]);
  t4150 = Cos(var1[2]);
  t4133 = Cos(var1[3]);
  t4145 = -1.*t4133*t4144;
  t7249 = Sin(var1[3]);
  t7250 = -1.*t4150*t7249;
  t7251 = t4145 + t7250;
  t7265 = t4150*t4133;
  t7266 = -1.*t4144*t7249;
  t7267 = t7265 + t7266;
  t7253 = Cos(var1[4]);
  t7254 = -1.*t7253*t4144;
  t7255 = Sin(var1[4]);
  t7256 = -1.*t4150*t7255;
  t7260 = t7254 + t7256;
  t7273 = t4150*t7253;
  t7274 = -1.*t4144*t7255;
  t7275 = t7273 + t7274;
  t7269 = t4133*t4144;
  t7270 = t4150*t7249;
  t7271 = t7269 + t7270;
  t7277 = t7253*t4144;
  t7278 = t4150*t7255;
  t7279 = t7277 + t7278;
  t7288 = -1.*t4150*t4133;
  t7289 = t4144*t7249;
  t7290 = t7288 + t7289;
  t7297 = -1.*t4150*t7253;
  t7298 = t4144*t7255;
  t7299 = t7297 + t7298;
  t7268 = 10.*t7251*t7267;
  t7276 = 10.*t7260*t7275;
  t7283 = Power(t7251,2);
  t7284 = 5.*t7283;
  t7285 = 5.*t7251*t7271;
  t7286 = Power(t7267,2);
  t7287 = 5.*t7286;
  t7291 = 5.*t7267*t7290;
  t7292 = Power(t7260,2);
  t7293 = 5.*t7292;
  t7294 = 5.*t7260*t7279;
  t7295 = Power(t7275,2);
  t7296 = 5.*t7295;
  t7300 = 5.*t7275*t7299;
  t7301 = t7284 + t7285 + t7287 + t7291 + t7293 + t7294 + t7296 + t7300;
  t7304 = Power(t4133,2);
  t7305 = 0.5*t7304;
  t7306 = Power(t7249,2);
  t7307 = 0.5*t7306;
  t7308 = t7305 + t7307;
  t7310 = Power(t7253,2);
  t7311 = 0.5*t7310;
  t7312 = Power(t7255,2);
  t7313 = 0.5*t7312;
  t7314 = t7311 + t7313;
  t7303 = -2.5*t4144;
  t7309 = 5.*t7251*t7308;
  t7315 = 5.*t7260*t7314;
  t7316 = t7303 + t7309 + t7315;
  t7327 = -2.5*t4150;
  t7328 = 5.*t7290*t7308;
  t7329 = 5.*t7299*t7314;
  t7330 = t7327 + t7328 + t7329;
  p_output1[0]=var2[2]*(-0.5*(t7268 + 10.*t7267*t7271 + t7276 + 10.*t7275*t7279)*var2[0] - 0.5*t7301*var2[1] - 0.5*t7316*var2[2] - 1.25*t7251*var2[3] - 1.25*t7260*var2[4]);
  p_output1[1]=var2[2]*(-0.5*t7301*var2[0] - 0.5*(t7268 + t7276 + 10.*t7251*t7290 + 10.*t7260*t7299)*var2[1] - 0.5*t7330*var2[2] - 1.25*t7290*var2[3] - 1.25*t7299*var2[4]);
  p_output1[2]=(-0.5*t7316*var2[0] - 0.5*t7330*var2[1])*var2[2];
  p_output1[3]=(-1.25*t7251*var2[0] - 1.25*t7290*var2[1])*var2[2];
  p_output1[4]=(-1.25*t7260*var2[0] - 1.25*t7299*var2[1])*var2[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec3_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce2_vec3_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
