/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:55 GMT-04:00
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
  double t7547;
  double t7549;
  double t7546;
  double t7548;
  double t7550;
  double t7551;
  double t7552;
  double t7560;
  double t7561;
  double t7562;
  double t7554;
  double t7555;
  double t7556;
  double t7557;
  double t7558;
  double t7568;
  double t7569;
  double t7570;
  double t7564;
  double t7565;
  double t7566;
  double t7572;
  double t7573;
  double t7574;
  double t7553;
  double t7599;
  double t7600;
  double t7601;
  double t7602;
  double t7603;
  double t7563;
  double t7567;
  double t7578;
  double t7579;
  double t7580;
  double t7581;
  double t7582;
  double t7583;
  double t7584;
  double t7585;
  double t7586;
  double t7559;
  double t7605;
  double t7606;
  double t7607;
  double t7608;
  double t7609;
  double t7571;
  double t7575;
  double t7587;
  double t7588;
  double t7589;
  double t7590;
  double t7591;
  double t7592;
  double t7593;
  double t7594;
  double t7595;
  double t7596;
  double t7646;
  double t7648;
  double t7617;
  double t7647;
  double t7649;
  double t7623;
  double t7635;
  double t7636;
  double t7637;
  double t7638;
  double t7639;
  double t7626;
  double t7627;
  double t7628;
  double t7629;
  double t7598;
  double t7604;
  double t7610;
  double t7611;
  double t7653;
  double t7654;
  double t7655;
  double t7656;
  double t7640;
  double t7641;
  double t7642;
  double t7643;
  double t7688;
  double t7689;
  double t7690;
  double t7644;
  double t7670;
  double t7686;
  double t7691;
  double t7692;
  double t7693;
  double t7645;
  double t7671;
  double t7687;
  t7547 = Sin(var1[2]);
  t7549 = Cos(var1[2]);
  t7546 = Cos(var1[3]);
  t7548 = -1.*t7546*t7547;
  t7550 = Sin(var1[3]);
  t7551 = -1.*t7549*t7550;
  t7552 = t7548 + t7551;
  t7560 = t7549*t7546;
  t7561 = -1.*t7547*t7550;
  t7562 = t7560 + t7561;
  t7554 = Cos(var1[4]);
  t7555 = -1.*t7554*t7547;
  t7556 = Sin(var1[4]);
  t7557 = -1.*t7549*t7556;
  t7558 = t7555 + t7557;
  t7568 = t7549*t7554;
  t7569 = -1.*t7547*t7556;
  t7570 = t7568 + t7569;
  t7564 = t7546*t7547;
  t7565 = t7549*t7550;
  t7566 = t7564 + t7565;
  t7572 = t7554*t7547;
  t7573 = t7549*t7556;
  t7574 = t7572 + t7573;
  t7553 = -2.5*var2[3]*t7552;
  t7599 = Power(t7546,2);
  t7600 = 0.5*t7599;
  t7601 = Power(t7550,2);
  t7602 = 0.5*t7601;
  t7603 = t7600 + t7602;
  t7563 = -10.*t7552*t7562;
  t7567 = -10.*t7566*t7562;
  t7578 = Power(t7552,2);
  t7579 = -5.*t7578;
  t7580 = -5.*t7552*t7566;
  t7581 = Power(t7562,2);
  t7582 = -5.*t7581;
  t7583 = -1.*t7549*t7546;
  t7584 = t7547*t7550;
  t7585 = t7583 + t7584;
  t7586 = -5.*t7562*t7585;
  t7559 = -2.5*var2[4]*t7558;
  t7605 = Power(t7554,2);
  t7606 = 0.5*t7605;
  t7607 = Power(t7556,2);
  t7608 = 0.5*t7607;
  t7609 = t7606 + t7608;
  t7571 = -10.*t7558*t7570;
  t7575 = -10.*t7574*t7570;
  t7587 = Power(t7558,2);
  t7588 = -5.*t7587;
  t7589 = -5.*t7558*t7574;
  t7590 = Power(t7570,2);
  t7591 = -5.*t7590;
  t7592 = -1.*t7549*t7554;
  t7593 = t7547*t7556;
  t7594 = t7592 + t7593;
  t7595 = -5.*t7570*t7594;
  t7596 = t7579 + t7580 + t7582 + t7586 + t7588 + t7589 + t7591 + t7595;
  t7646 = -2.5*var2[3]*t7585;
  t7648 = -10.*t7552*t7585;
  t7617 = t7579 + t7580 + t7582 + t7586;
  t7647 = -2.5*var2[4]*t7594;
  t7649 = -10.*t7558*t7594;
  t7623 = t7588 + t7589 + t7591 + t7595;
  t7635 = -5.*t7552*t7562;
  t7636 = -5.*t7566*t7562;
  t7637 = -5.*t7558*t7570;
  t7638 = -5.*t7574*t7570;
  t7639 = t7635 + t7636 + t7637 + t7638;
  t7626 = Power(t7549,2);
  t7627 = -25.*t7626;
  t7628 = Power(t7547,2);
  t7629 = -25.*t7628;
  t7598 = 2.5*t7547;
  t7604 = -5.*t7552*t7603;
  t7610 = -5.*t7558*t7609;
  t7611 = t7598 + t7604 + t7610;
  t7653 = 2.5*t7549;
  t7654 = -5.*t7585*t7603;
  t7655 = -5.*t7594*t7609;
  t7656 = t7653 + t7654 + t7655;
  t7640 = -2.5*t7549;
  t7641 = -5.*t7562*t7603;
  t7642 = -5.*t7570*t7609;
  t7643 = t7640 + t7641 + t7642;
  t7688 = -2.5*var2[0]*t7552;
  t7689 = -2.5*var2[1]*t7585;
  t7690 = t7688 + t7689;
  t7644 = -2.5*t7562;
  t7670 = -2.5*t7552;
  t7686 = -2.5*t7603;
  t7691 = -2.5*var2[0]*t7558;
  t7692 = -2.5*var2[1]*t7594;
  t7693 = t7691 + t7692;
  t7645 = -2.5*t7570;
  t7671 = -2.5*t7558;
  t7687 = -2.5*t7609;
  p_output1[0]=t7553 + t7559 + (t7563 + t7567 + t7571 + t7575)*var2[0] + t7596*var2[1] + t7611*var2[2];
  p_output1[1]=t7553 + (t7563 + t7567)*var2[0] + t7617*var2[1] - 5.*t7552*t7603*var2[2];
  p_output1[2]=t7559 + (t7571 + t7575)*var2[0] + t7623*var2[1] - 5.*t7558*t7609*var2[2];
  p_output1[3]=-5.*Power(t7566,2) - 5.*Power(t7574,2) + t7582 + t7591 + t7627 + t7629;
  p_output1[4]=t7639;
  p_output1[5]=t7643;
  p_output1[6]=t7644;
  p_output1[7]=t7645;
  p_output1[8]=t7646 + t7647 + t7596*var2[0] + (t7563 + t7571 + t7648 + t7649)*var2[1] + t7656*var2[2];
  p_output1[9]=t7646 + t7617*var2[0] + (t7563 + t7648)*var2[1] - 5.*t7585*t7603*var2[2];
  p_output1[10]=t7647 + t7623*var2[0] + (t7571 + t7649)*var2[1] - 5.*t7594*t7609*var2[2];
  p_output1[11]=t7639;
  p_output1[12]=t7579 + t7582 + t7588 + t7591 + t7627 + t7629;
  p_output1[13]=t7611;
  p_output1[14]=t7670;
  p_output1[15]=t7671;
  p_output1[16]=t7611*var2[0] + t7656*var2[1];
  p_output1[17]=-5.*t7552*t7603*var2[0] - 5.*t7585*t7603*var2[1];
  p_output1[18]=-5.*t7558*t7609*var2[0] - 5.*t7594*t7609*var2[1];
  p_output1[19]=t7643;
  p_output1[20]=t7611;
  p_output1[21]=-1.025 - 5.*Power(t7603,2) - 5.*Power(t7609,2);
  p_output1[22]=t7686;
  p_output1[23]=t7687;
  p_output1[24]=t7690;
  p_output1[25]=t7690;
  p_output1[26]=t7644;
  p_output1[27]=t7670;
  p_output1[28]=t7686;
  p_output1[29]=-1.25;
  p_output1[30]=t7693;
  p_output1[31]=t7693;
  p_output1[32]=t7645;
  p_output1[33]=t7671;
  p_output1[34]=t7687;
  p_output1[35]=-1.25;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 36, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_MmatDx_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
