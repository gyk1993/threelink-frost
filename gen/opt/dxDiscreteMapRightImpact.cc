/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:54 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4385;
  double t4097;
  double t4102;
  double t4386;
  double t5488;
  double t5509;
  double t5521;
  double t4384;
  double t4923;
  double t4926;
  double t8563;
  double t8587;
  double t8586;
  double t8588;
  double t8589;
  double t8599;
  double t8602;
  double t8603;
  double t8610;
  double t8613;
  double t8614;
  double t4955;
  double t5417;
  double t8559;
  double t8560;
  double t8606;
  double t8607;
  double t8608;
  double t8619;
  double t8620;
  double t8596;
  double t8604;
  double t8609;
  double t8615;
  double t8616;
  double t8594;
  double t8595;
  double t8621;
  double t8622;
  double t8623;
  double t8624;
  double t8628;
  double t8629;
  double t8632;
  double t8633;
  double t8636;
  double t8637;
  double t8639;
  double t8640;
  double t8641;
  double t8642;
  double t8643;
  double t8645;
  double t8646;
  double t8647;
  double t8648;
  double t8649;
  double t8668;
  double t8669;
  double t8670;
  double t8671;
  double t8638;
  double t8644;
  double t8650;
  double t8651;
  t4385 = Cos(var2[2]);
  t4097 = Cos(var2[3]);
  t4102 = Sin(var2[2]);
  t4386 = Sin(var2[3]);
  t5488 = t4385*t4097;
  t5509 = -1.*t4102*t4386;
  t5521 = t5488 + t5509;
  t4384 = -1.*t4097*t4102;
  t4923 = -1.*t4385*t4386;
  t4926 = t4384 + t4923;
  t8563 = Cos(var2[4]);
  t8587 = Sin(var2[4]);
  t8586 = t4385*t8563;
  t8588 = -1.*t4102*t8587;
  t8589 = t8586 + t8588;
  t8599 = t4097*t4102;
  t8602 = t4385*t4386;
  t8603 = t8599 + t8602;
  t8610 = t8563*t4102;
  t8613 = t4385*t8587;
  t8614 = t8610 + t8613;
  t4955 = -1.*var1[4];
  t5417 = var3[3] + t4955;
  t8559 = -1.*var1[3];
  t8560 = var3[4] + t8559;
  t8606 = -1.*t8563*t4102;
  t8607 = -1.*t4385*t8587;
  t8608 = t8606 + t8607;
  t8619 = -1.*var1[0];
  t8620 = var3[0] + t8619;
  t8596 = 5.*t4926*t5521;
  t8604 = 5.*t8603*t5521;
  t8609 = 5.*t8608*t8589;
  t8615 = 5.*t8614*t8589;
  t8616 = t8596 + t8604 + t8609 + t8615;
  t8594 = -1.*var1[1];
  t8595 = var3[1] + t8594;
  t8621 = Power(t4385,2);
  t8622 = 25.*t8621;
  t8623 = Power(t4102,2);
  t8624 = 25.*t8623;
  t8628 = Power(t5521,2);
  t8629 = 5.*t8628;
  t8632 = Power(t8589,2);
  t8633 = 5.*t8632;
  t8636 = -1.*var1[2];
  t8637 = var3[2] + t8636;
  t8639 = Power(t4097,2);
  t8640 = 0.5*t8639;
  t8641 = Power(t4386,2);
  t8642 = 0.5*t8641;
  t8643 = t8640 + t8642;
  t8645 = Power(t8563,2);
  t8646 = 0.5*t8645;
  t8647 = Power(t8587,2);
  t8648 = 0.5*t8647;
  t8649 = t8646 + t8648;
  t8668 = -2.5*t4102;
  t8669 = 5.*t4926*t8643;
  t8670 = 5.*t8608*t8649;
  t8671 = t8668 + t8669 + t8670;
  t8638 = 2.5*t4385;
  t8644 = 5.*t5521*t8643;
  t8650 = 5.*t8589*t8649;
  t8651 = t8638 + t8644 + t8650;
  p_output1[0]=2.5*t5417*t5521 + 2.5*t8560*t8589 + t8595*t8616 + t8620*(5.*Power(t8603,2) + 5.*Power(t8614,2) + t8622 + t8624 + t8629 + t8633) + t8637*t8651 - 1.*t5521*var4[0] - 1.*t4926*var4[2];
  p_output1[1]=2.5*t4926*t5417 + 2.5*t8560*t8608 + t8616*t8620 + t8595*(5.*Power(t4926,2) + 5.*Power(t8608,2) + t8622 + t8624 + t8629 + t8633) + t8637*t8671 - 1.*t4926*var4[0] - 1.*(-1.*t4097*t4385 + t4102*t4386)*var4[2];
  p_output1[2]=2.5*t5417*t8643 + 2.5*t8560*t8649 + t8637*(1.025 + 5.*Power(t8643,2) + 5.*Power(t8649,2)) + t8620*t8651 + t8595*t8671 - 1.*(t8639 + t8641)*var4[0];
  p_output1[3]=1.25*t5417 + 2.5*t4926*t8595 + 2.5*t5521*t8620 + 2.5*t8637*t8643 - 1.*var4[0];
  p_output1[4]=1.25*t8560 + 2.5*t8595*t8608 + 2.5*t8589*t8620 + 2.5*t8637*t8649;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapRightImpact.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void dxDiscreteMapRightImpact_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
