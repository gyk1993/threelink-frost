/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:45 GMT-04:00
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
  double t7128;
  double t7129;
  double t7147;
  double t7148;
  double t7149;
  double t7150;
  double t7151;
  double t7176;
  double t7177;
  double t7178;
  double t7197;
  double t7198;
  double t7199;
  double t7200;
  double t7201;
  double t7208;
  double t7209;
  double t7210;
  double t7152;
  double t7162;
  double t7163;
  double t7173;
  double t7174;
  double t7175;
  double t7184;
  double t7190;
  double t7191;
  double t7192;
  double t7193;
  double t7194;
  double t7202;
  double t7203;
  double t7204;
  double t7205;
  double t7206;
  double t7207;
  double t7211;
  double t7212;
  double t7213;
  double t7214;
  double t7215;
  double t7216;
  double t7223;
  double t7224;
  double t7227;
  double t7228;
  double t7235;
  double t7236;
  double t7237;
  double t7238;
  double t7239;
  double t7241;
  double t7242;
  double t7243;
  double t7244;
  double t7245;
  t7128 = Cos(var1[3]);
  t7129 = Sin(var1[2]);
  t7147 = -1.*t7128*t7129;
  t7148 = Cos(var1[2]);
  t7149 = Sin(var1[3]);
  t7150 = -1.*t7148*t7149;
  t7151 = t7147 + t7150;
  t7176 = t7148*t7128;
  t7177 = -1.*t7129*t7149;
  t7178 = t7176 + t7177;
  t7197 = Cos(var1[4]);
  t7198 = -1.*t7197*t7129;
  t7199 = Sin(var1[4]);
  t7200 = -1.*t7148*t7199;
  t7201 = t7198 + t7200;
  t7208 = t7148*t7197;
  t7209 = -1.*t7129*t7199;
  t7210 = t7208 + t7209;
  t7152 = Power(t7151,2);
  t7162 = 5.*t7152;
  t7163 = t7128*t7129;
  t7173 = t7148*t7149;
  t7174 = t7163 + t7173;
  t7175 = 5.*t7151*t7174;
  t7184 = Power(t7178,2);
  t7190 = 5.*t7184;
  t7191 = -1.*t7148*t7128;
  t7192 = t7129*t7149;
  t7193 = t7191 + t7192;
  t7194 = 5.*t7178*t7193;
  t7202 = Power(t7201,2);
  t7203 = 5.*t7202;
  t7204 = t7197*t7129;
  t7205 = t7148*t7199;
  t7206 = t7204 + t7205;
  t7207 = 5.*t7201*t7206;
  t7211 = Power(t7210,2);
  t7212 = 5.*t7211;
  t7213 = -1.*t7148*t7197;
  t7214 = t7129*t7199;
  t7215 = t7213 + t7214;
  t7216 = 5.*t7210*t7215;
  t7223 = 10.*t7151*t7178;
  t7224 = 10.*t7151*t7193;
  t7227 = 10.*t7201*t7210;
  t7228 = 10.*t7201*t7215;
  t7235 = Power(t7128,2);
  t7236 = 0.5*t7235;
  t7237 = Power(t7149,2);
  t7238 = 0.5*t7237;
  t7239 = t7236 + t7238;
  t7241 = Power(t7197,2);
  t7242 = 0.5*t7241;
  t7243 = Power(t7199,2);
  t7244 = 0.5*t7243;
  t7245 = t7242 + t7244;
  p_output1[0]=var2[1]*(-0.5*(t7162 + t7175 + t7190 + t7194 + t7203 + t7207 + t7212 + t7216)*var2[2] - 0.5*(t7162 + t7175 + t7190 + t7194)*var2[3] - 0.5*(t7203 + t7207 + t7212 + t7216)*var2[4]);
  p_output1[1]=var2[1]*(-0.5*(t7223 + t7224 + t7227 + t7228)*var2[2] - 0.5*(t7223 + t7224)*var2[3] - 0.5*(t7227 + t7228)*var2[4]);
  p_output1[2]=var2[1]*(-0.5*(-2.5*t7148 + 5.*t7193*t7239 + 5.*t7215*t7245)*var2[2] - 2.5*t7193*t7239*var2[3] - 2.5*t7215*t7245*var2[4]);
  p_output1[3]=var2[1]*(-1.25*t7193*var2[2] - 1.25*t7193*var2[3]);
  p_output1[4]=var2[1]*(-1.25*t7215*var2[2] - 1.25*t7215*var2[4]);
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

#include "Ce1_vec2_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce1_vec2_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
