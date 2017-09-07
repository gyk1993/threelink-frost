/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:08 GMT-04:00
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
  double t1811;
  double t2619;
  double t2622;
  double t2623;
  double t2624;
  double t2625;
  double t2626;
  double t2650;
  double t2652;
  double t2653;
  double t2646;
  double t2648;
  double t2649;
  double t2656;
  double t2657;
  double t2658;
  double t2632;
  double t2633;
  double t2638;
  double t2640;
  double t2641;
  double t2642;
  double t2643;
  double t2654;
  double t2661;
  double t2663;
  double t2664;
  double t2665;
  double t2666;
  double t2675;
  double t2676;
  double t2679;
  double t2680;
  double t2722;
  double t2725;
  double t2726;
  double t2728;
  double t2729;
  double t2730;
  double t2731;
  double t2732;
  double t2734;
  double t2752;
  double t2753;
  double t2754;
  double t2755;
  double t3163;
  double t8077;
  double t8078;
  double t8083;
  double t8084;
  double t8093;
  double t8094;
  double t8095;
  double t8100;
  double t8101;
  double t8046;
  double t8102;
  double t8103;
  double t8110;
  double t8111;
  double t8112;
  double t8113;
  double t8057;
  double t8105;
  double t8117;
  double t8118;
  double t8119;
  double t8120;
  t1811 = Cos(var1[2]);
  t2619 = Cos(var1[4]);
  t2622 = -1.*t1811*t2619;
  t2623 = Sin(var1[2]);
  t2624 = Sin(var1[4]);
  t2625 = t2623*t2624;
  t2626 = t2622 + t2625;
  t2650 = t1811*t2619;
  t2652 = -1.*t2623*t2624;
  t2653 = t2650 + t2652;
  t2646 = -1.*t2619*t2623;
  t2648 = -1.*t1811*t2624;
  t2649 = t2646 + t2648;
  t2656 = t2619*t2623;
  t2657 = t1811*t2624;
  t2658 = t2656 + t2657;
  t2632 = -1.25*var2[4]*t2626;
  t2633 = Power(t2619,2);
  t2638 = 0.5*t2633;
  t2640 = Power(t2624,2);
  t2641 = 0.5*t2640;
  t2642 = t2638 + t2641;
  t2643 = -2.5*var2[2]*t2626*t2642;
  t2654 = 15.*t2649*t2653;
  t2661 = 5.*t2658*t2653;
  t2663 = 15.*t2649*t2626;
  t2664 = 5.*t2658*t2626;
  t2665 = t2654 + t2661 + t2663 + t2664;
  t2666 = -0.5*var2[1]*t2665;
  t2675 = Power(t2649,2);
  t2676 = 10.*t2675;
  t2679 = 10.*t2649*t2658;
  t2680 = Power(t2653,2);
  t2722 = 10.*t2680;
  t2725 = 10.*t2653*t2626;
  t2726 = t2676 + t2679 + t2722 + t2725;
  t2728 = -0.5*var2[0]*t2726;
  t2729 = t2632 + t2643 + t2666 + t2728;
  t2730 = var2[4]*t2729;
  t2731 = 10.*t2649*t2653;
  t2732 = 10.*t2658*t2653;
  t2734 = t2731 + t2732;
  t2752 = 5.*t2675;
  t2753 = 5.*t2649*t2658;
  t2754 = 5.*t2680;
  t2755 = 5.*t2653*t2626;
  t3163 = t2752 + t2753 + t2754 + t2755;
  t8077 = -1.25*var2[4]*t2658;
  t8078 = -2.5*var2[2]*t2658*t2642;
  t8083 = -0.5*var2[0]*t2665;
  t8084 = Power(t2626,2);
  t8093 = 10.*t8084;
  t8094 = t2676 + t2679 + t2725 + t8093;
  t8095 = -0.5*var2[1]*t8094;
  t8100 = t8077 + t8078 + t8083 + t8095;
  t8101 = var2[4]*t8100;
  t8046 = -0.5*var2[4]*t3163;
  t8102 = 10.*t2649*t2626;
  t8103 = t2731 + t8102;
  t8110 = -2.5*var2[1]*t2658*t2642;
  t8111 = -2.5*var2[0]*t2626*t2642;
  t8112 = t8110 + t8111;
  t8113 = var2[4]*t8112;
  t8057 = -2.5*var2[4]*t2649*t2642;
  t8105 = -2.5*var2[4]*t2626*t2642;
  t8117 = -1.25*var2[1]*t2658;
  t8118 = -1.25*var2[0]*t2626;
  t8119 = t8117 + t8118;
  t8120 = var2[4]*t8119;
  p_output1[0]=t2730;
  p_output1[1]=t2730;
  p_output1[2]=-0.5*t2734*var2[4];
  p_output1[3]=t8046;
  p_output1[4]=t8057;
  p_output1[5]=-0.5*t2734*var2[0] - 0.5*t3163*var2[1] - 2.5*t2642*t2649*var2[2] - 2.5*t2649*var2[4];
  p_output1[6]=t8101;
  p_output1[7]=t8101;
  p_output1[8]=t8046;
  p_output1[9]=-0.5*t8103*var2[4];
  p_output1[10]=t8105;
  p_output1[11]=t2643 - 0.5*t3163*var2[0] - 0.5*t8103*var2[1] - 2.5*t2626*var2[4];
  p_output1[12]=t8113;
  p_output1[13]=t8113;
  p_output1[14]=t8057;
  p_output1[15]=t8105;
  p_output1[16]=-2.5*t2642*t2649*var2[0] - 2.5*t2626*t2642*var2[1];
  p_output1[17]=t8120;
  p_output1[18]=t8120;
  p_output1[19]=-1.25*t2649*var2[4];
  p_output1[20]=t2632;
  p_output1[21]=-1.25*t2649*var2[0] - 1.25*t2626*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec5_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce2_vec5_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
