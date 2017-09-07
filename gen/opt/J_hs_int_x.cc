/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:40 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t6949;
  double t6963;
  double t6983;
  double t6985;
  double t6988;
  double t6990;
  double t6991;
  double t6993;
  double t6998;
  double t6992;
  double t7004;
  double t7006;
  double t7009;
  double t7011;
  double t7014;
  double t7015;
  double t7020;
  double t7027;
  double t7032;
  double t7033;
  double t7030;
  double t7031;
  double t7036;
  double t7037;
  double t7040;
  double t7041;
  double t7044;
  double t7045;
  t6949 = 4.*var5[0];
  t6963 = t6949 + var7[0] + var3[0];
  t6983 = -1. + var8[0];
  t6985 = 1/t6983;
  t6988 = -1.*var1[0];
  t6990 = t6988 + var1[1];
  t6991 = -0.333333333333333*t6985*t6990;
  t6993 = 4.*var5[1];
  t6998 = t6993 + var7[1] + var3[1];
  t6992 = -1.33333333333333*t6985*t6990;
  t7004 = 4.*var5[2];
  t7006 = t7004 + var7[2] + var3[2];
  t7009 = 4.*var5[3];
  t7011 = t7009 + var7[3] + var3[3];
  t7014 = 4.*var5[4];
  t7015 = t7014 + var7[4] + var3[4];
  t7020 = -1.*var7[0];
  t7027 = t7020 + var3[0];
  t7032 = -1.*var7[1];
  t7033 = t7032 + var3[1];
  t7030 = -0.25*t6985*t6990;
  t7031 = 0.25*t6985*t6990;
  t7036 = -1.*var7[2];
  t7037 = t7036 + var3[2];
  t7040 = -1.*var7[3];
  t7041 = t7040 + var3[3];
  t7044 = -1.*var7[4];
  t7045 = t7044 + var3[4];
  p_output1[0]=0.333333333333333*t6963*t6985;
  p_output1[1]=-0.333333333333333*t6963*t6985;
  p_output1[2]=-1.;
  p_output1[3]=t6991;
  p_output1[4]=t6992;
  p_output1[5]=1.;
  p_output1[6]=t6991;
  p_output1[7]=0.333333333333333*t6985*t6998;
  p_output1[8]=-0.333333333333333*t6985*t6998;
  p_output1[9]=-1.;
  p_output1[10]=t6991;
  p_output1[11]=t6992;
  p_output1[12]=1.;
  p_output1[13]=t6991;
  p_output1[14]=0.333333333333333*t6985*t7006;
  p_output1[15]=-0.333333333333333*t6985*t7006;
  p_output1[16]=-1.;
  p_output1[17]=t6991;
  p_output1[18]=t6992;
  p_output1[19]=1.;
  p_output1[20]=t6991;
  p_output1[21]=0.333333333333333*t6985*t7011;
  p_output1[22]=-0.333333333333333*t6985*t7011;
  p_output1[23]=-1.;
  p_output1[24]=t6991;
  p_output1[25]=t6992;
  p_output1[26]=1.;
  p_output1[27]=t6991;
  p_output1[28]=0.333333333333333*t6985*t7015;
  p_output1[29]=-0.333333333333333*t6985*t7015;
  p_output1[30]=-1.;
  p_output1[31]=t6991;
  p_output1[32]=t6992;
  p_output1[33]=1.;
  p_output1[34]=t6991;
  p_output1[35]=0.25*t6985*t7027;
  p_output1[36]=-0.25*t6985*t7027;
  p_output1[37]=-0.5;
  p_output1[38]=t7030;
  p_output1[39]=1.;
  p_output1[40]=-0.5;
  p_output1[41]=t7031;
  p_output1[42]=0.25*t6985*t7033;
  p_output1[43]=-0.25*t6985*t7033;
  p_output1[44]=-0.5;
  p_output1[45]=t7030;
  p_output1[46]=1.;
  p_output1[47]=-0.5;
  p_output1[48]=t7031;
  p_output1[49]=0.25*t6985*t7037;
  p_output1[50]=-0.25*t6985*t7037;
  p_output1[51]=-0.5;
  p_output1[52]=t7030;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t7031;
  p_output1[56]=0.25*t6985*t7041;
  p_output1[57]=-0.25*t6985*t7041;
  p_output1[58]=-0.5;
  p_output1[59]=t7030;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t7031;
  p_output1[63]=0.25*t6985*t7045;
  p_output1[64]=-0.25*t6985*t7045;
  p_output1[65]=-0.5;
  p_output1[66]=t7030;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t7031;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 70, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
