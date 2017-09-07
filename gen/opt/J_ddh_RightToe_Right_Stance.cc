/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:24 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t8413;
  double t4460;
  double t8411;
  double t8414;
  double t8418;
  double t8419;
  double t8426;
  double t8428;
  double t8429;
  double t8430;
  double t8437;
  double t8438;
  double t8439;
  double t8412;
  double t8415;
  double t8416;
  double t8417;
  double t8427;
  double t8440;
  double t8441;
  double t8442;
  double t8449;
  double t8450;
  double t8451;
  double t8452;
  double t8453;
  double t8454;
  double t8460;
  double t8461;
  double t8462;
  double t8458;
  double t8459;
  double t8463;
  double t8464;
  double t8465;
  double t8446;
  double t8447;
  double t8448;
  t8413 = Cos(var1[2]);
  t4460 = Cos(var1[3]);
  t8411 = Sin(var1[2]);
  t8414 = Sin(var1[3]);
  t8418 = -1.*t8413*t4460;
  t8419 = t8411*t8414;
  t8426 = t8418 + t8419;
  t8428 = t4460*t8411;
  t8429 = t8413*t8414;
  t8430 = t8428 + t8429;
  t8437 = var2[1]*t8430;
  t8438 = var2[0]*t8426;
  t8439 = t8437 + t8438;
  t8412 = -1.*t4460*t8411;
  t8415 = -1.*t8413*t8414;
  t8416 = t8412 + t8415;
  t8417 = var3[0]*t8416;
  t8427 = var3[1]*t8426;
  t8440 = var2[2]*t8439;
  t8441 = var2[3]*t8439;
  t8442 = t8417 + t8427 + t8440 + t8441;
  t8449 = var2[0]*t8416;
  t8450 = var2[1]*t8426;
  t8451 = t8449 + t8450;
  t8452 = t8413*t4460;
  t8453 = -1.*t8411*t8414;
  t8454 = t8452 + t8453;
  t8460 = var2[0]*t8430;
  t8461 = var2[1]*t8454;
  t8462 = t8460 + t8461;
  t8458 = var3[1]*t8430;
  t8459 = var3[0]*t8426;
  t8463 = var2[2]*t8462;
  t8464 = var2[3]*t8462;
  t8465 = t8458 + t8459 + t8463 + t8464;
  t8446 = var2[2]*t8426;
  t8447 = var2[3]*t8426;
  t8448 = t8446 + t8447;
  p_output1[0]=t8442;
  p_output1[1]=t8442;
  p_output1[2]=t8416*var2[2] + t8416*var2[3];
  p_output1[3]=t8448;
  p_output1[4]=t8451;
  p_output1[5]=t8451;
  p_output1[6]=t8454;
  p_output1[7]=t8416;
  p_output1[8]=Power(t4460,2) + Power(t8414,2);
  p_output1[9]=1.;
  p_output1[10]=t8465;
  p_output1[11]=t8465;
  p_output1[12]=t8448;
  p_output1[13]=t8430*var2[2] + t8430*var2[3];
  p_output1[14]=t8439;
  p_output1[15]=t8439;
  p_output1[16]=t8416;
  p_output1[17]=t8426;
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_Right_Stance.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_ddh_RightToe_Right_Stance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
