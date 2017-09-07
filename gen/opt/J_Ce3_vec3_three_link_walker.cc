/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:12 GMT-04:00
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
  double t1828;
  double t3058;
  double t4130;
  double t3767;
  double t8230;
  double t8232;
  double t8143;
  double t8144;
  double t8212;
  double t8213;
  double t8214;
  double t8260;
  double t8267;
  double t8268;
  double t8269;
  double t8274;
  double t3730;
  double t4131;
  double t5535;
  double t8282;
  double t8283;
  double t8284;
  double t8231;
  double t8233;
  double t8234;
  double t8286;
  double t8288;
  double t8289;
  double t8281;
  double t8285;
  double t8290;
  double t8291;
  double t8303;
  double t8304;
  double t8305;
  double t8306;
  double t8307;
  double t8308;
  double t8309;
  double t8310;
  double t8311;
  double t8312;
  double t8295;
  double t8296;
  double t8297;
  double t8298;
  double t8299;
  double t8300;
  double t8301;
  double t8302;
  t1828 = Sin(var1[2]);
  t3058 = Cos(var1[3]);
  t4130 = Sin(var1[3]);
  t3767 = Cos(var1[2]);
  t8230 = Cos(var1[4]);
  t8232 = Sin(var1[4]);
  t8143 = Power(t3058,2);
  t8144 = 0.5*t8143;
  t8212 = Power(t4130,2);
  t8213 = 0.5*t8212;
  t8214 = t8144 + t8213;
  t8260 = Power(t8230,2);
  t8267 = 0.5*t8260;
  t8268 = Power(t8232,2);
  t8269 = 0.5*t8268;
  t8274 = t8267 + t8269;
  t3730 = t3058*t1828;
  t4131 = t3767*t4130;
  t5535 = t3730 + t4131;
  t8282 = -1.*t3767*t3058;
  t8283 = t1828*t4130;
  t8284 = t8282 + t8283;
  t8231 = t8230*t1828;
  t8233 = t3767*t8232;
  t8234 = t8231 + t8233;
  t8286 = -1.*t3767*t8230;
  t8288 = t1828*t8232;
  t8289 = t8286 + t8288;
  t8281 = 2.5*t3767;
  t8285 = -5.*t8284*t8214;
  t8290 = -5.*t8289*t8274;
  t8291 = t8281 + t8285 + t8290;
  t8303 = 2.5*t1828;
  t8304 = -1.*t3058*t1828;
  t8305 = -1.*t3767*t4130;
  t8306 = t8304 + t8305;
  t8307 = -5.*t8306*t8214;
  t8308 = -1.*t8230*t1828;
  t8309 = -1.*t3767*t8232;
  t8310 = t8308 + t8309;
  t8311 = -5.*t8310*t8274;
  t8312 = t8303 + t8307 + t8311;
  t8295 = 2.5*var2[1]*t5535*t8214;
  t8296 = 2.5*var2[0]*t8284*t8214;
  t8297 = t8295 + t8296;
  t8298 = var2[2]*t8297;
  t8299 = 2.5*var2[1]*t8234*t8274;
  t8300 = 2.5*var2[0]*t8289*t8274;
  t8301 = t8299 + t8300;
  t8302 = var2[2]*t8301;
  p_output1[0]=(-0.5*t8291*var2[0] - 0.5*(-2.5*t1828 - 5.*t5535*t8214 - 5.*t8234*t8274)*var2[1])*var2[2];
  p_output1[1]=t8298;
  p_output1[2]=t8302;
  p_output1[3]=-0.5*t8312*var2[2];
  p_output1[4]=-0.5*t8291*var2[2];
  p_output1[5]=-0.5*t8312*var2[0] - 0.5*t8291*var2[1];
  p_output1[6]=t8298;
  p_output1[7]=t8298;
  p_output1[8]=2.5*t8214*t8306*var2[2];
  p_output1[9]=2.5*t8214*t8284*var2[2];
  p_output1[10]=2.5*t8214*t8306*var2[0] + 2.5*t8214*t8284*var2[1];
  p_output1[11]=t8302;
  p_output1[12]=t8302;
  p_output1[13]=2.5*t8274*t8310*var2[2];
  p_output1[14]=2.5*t8274*t8289*var2[2];
  p_output1[15]=2.5*t8274*t8310*var2[0] + 2.5*t8274*t8289*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 16, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec3_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce3_vec3_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
