/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:59 GMT-04:00
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
  double t7729;
  double t7732;
  double t4114;
  double t7731;
  double t7779;
  double t7785;
  double t7730;
  double t7733;
  double t7734;
  double t7740;
  double t7746;
  double t7748;
  double t7749;
  double t7769;
  double t7784;
  double t7786;
  double t7787;
  double t7812;
  double t7813;
  double t7814;
  double t7815;
  double t7816;
  double t7777;
  double t7817;
  double t7850;
  double t7851;
  double t7852;
  double t7854;
  double t7855;
  double t7856;
  double t7870;
  double t7871;
  double t7876;
  double t7878;
  double t7884;
  double t7885;
  double t7877;
  double t7886;
  double t7818;
  double t7819;
  double t7820;
  double t7821;
  double t7832;
  double t7835;
  t7729 = Cos(var1[3]);
  t7732 = Sin(var1[3]);
  t4114 = Cos(var1[2]);
  t7731 = Sin(var1[2]);
  t7779 = Cos(var1[4]);
  t7785 = Sin(var1[4]);
  t7730 = -1.*t4114*t7729;
  t7733 = t7731*t7732;
  t7734 = t7730 + t7733;
  t7740 = Power(t7729,2);
  t7746 = 0.5*t7740;
  t7748 = Power(t7732,2);
  t7749 = 0.5*t7748;
  t7769 = t7746 + t7749;
  t7784 = -1.*t4114*t7779;
  t7786 = t7731*t7785;
  t7787 = t7784 + t7786;
  t7812 = Power(t7779,2);
  t7813 = 0.5*t7812;
  t7814 = Power(t7785,2);
  t7815 = 0.5*t7814;
  t7816 = t7813 + t7815;
  t7777 = -2.5*var2[3]*t7734*t7769;
  t7817 = -2.5*var2[4]*t7787*t7816;
  t7850 = -1.*t7729*t7731;
  t7851 = -1.*t4114*t7732;
  t7852 = t7850 + t7851;
  t7854 = -1.*t7779*t7731;
  t7855 = -1.*t4114*t7785;
  t7856 = t7854 + t7855;
  t7870 = t7729*t7731;
  t7871 = t4114*t7732;
  t7876 = t7870 + t7871;
  t7878 = t7779*t7731;
  t7884 = t4114*t7785;
  t7885 = t7878 + t7884;
  t7877 = -2.5*var2[3]*t7876*t7769;
  t7886 = -2.5*var2[4]*t7885*t7816;
  t7818 = -2.5*t4114;
  t7819 = 5.*t7734*t7769;
  t7820 = 5.*t7787*t7816;
  t7821 = t7818 + t7819 + t7820;
  t7832 = -2.5*var2[2]*t7734*t7769;
  t7835 = -2.5*var2[2]*t7787*t7816;
  p_output1[0]=var2[2]*(t7777 + t7817 - 0.5*t7821*var2[2]);
  p_output1[1]=(t7777 + t7832)*var2[2];
  p_output1[2]=(t7817 + t7835)*var2[2];
  p_output1[3]=-1.*(-2.5*t7731 + 5.*t7769*t7852 + 5.*t7816*t7856)*var2[2] - 2.5*t7769*t7852*var2[3] - 2.5*t7816*t7856*var2[4];
  p_output1[4]=-2.5*t7769*t7852*var2[2];
  p_output1[5]=-2.5*t7816*t7856*var2[2];
  p_output1[6]=var2[2]*(t7877 + t7886 - 0.5*(2.5*t7731 + 5.*t7769*t7876 + 5.*t7816*t7885)*var2[2]);
  p_output1[7]=var2[2]*(t7877 - 2.5*t7769*t7876*var2[2]);
  p_output1[8]=var2[2]*(t7886 - 2.5*t7816*t7885*var2[2]);
  p_output1[9]=t7777 + t7817 - 1.*t7821*var2[2];
  p_output1[10]=t7832;
  p_output1[11]=t7835;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec3_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce1_vec3_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
