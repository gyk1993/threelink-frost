/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:57 GMT-04:00
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
  double t3124;
  double t7576;
  double t7577;
  double t7597;
  double t7612;
  double t7613;
  double t7614;
  double t7622;
  double t7624;
  double t7625;
  double t7657;
  double t7658;
  double t7659;
  double t7660;
  double t7661;
  double t7668;
  double t7669;
  double t7672;
  double t7615;
  double t7616;
  double t7618;
  double t7619;
  double t7620;
  double t7621;
  double t7630;
  double t7631;
  double t7632;
  double t7633;
  double t7634;
  double t7650;
  double t7662;
  double t7663;
  double t7664;
  double t7665;
  double t7666;
  double t7667;
  double t7673;
  double t7674;
  double t7675;
  double t7676;
  double t7677;
  double t7678;
  double t7651;
  double t7652;
  double t7679;
  double t7680;
  double t7699;
  double t7700;
  double t7703;
  double t7704;
  double t7707;
  double t7701;
  double t7705;
  double t7713;
  double t7714;
  double t7715;
  double t7716;
  double t7719;
  double t7720;
  double t7721;
  double t7722;
  double t7717;
  double t7718;
  double t7723;
  double t7724;
  double t7735;
  double t7736;
  double t7737;
  double t7738;
  double t7741;
  double t7742;
  double t7743;
  double t7744;
  double t7747;
  double t7739;
  double t7745;
  double t7753;
  double t7754;
  double t7755;
  double t7756;
  double t7757;
  double t7759;
  double t7760;
  double t7761;
  double t7762;
  double t7763;
  double t7758;
  double t7764;
  double t7780;
  double t7781;
  double t7782;
  double t7783;
  double t7789;
  double t7790;
  double t7791;
  double t7792;
  double t7796;
  double t7797;
  double t7798;
  double t7799;
  double t7800;
  double t7804;
  t3124 = Cos(var1[3]);
  t7576 = Sin(var1[2]);
  t7577 = -1.*t3124*t7576;
  t7597 = Cos(var1[2]);
  t7612 = Sin(var1[3]);
  t7613 = -1.*t7597*t7612;
  t7614 = t7577 + t7613;
  t7622 = t7597*t3124;
  t7624 = -1.*t7576*t7612;
  t7625 = t7622 + t7624;
  t7657 = Cos(var1[4]);
  t7658 = -1.*t7657*t7576;
  t7659 = Sin(var1[4]);
  t7660 = -1.*t7597*t7659;
  t7661 = t7658 + t7660;
  t7668 = t7597*t7657;
  t7669 = -1.*t7576*t7659;
  t7672 = t7668 + t7669;
  t7615 = Power(t7614,2);
  t7616 = 10.*t7615;
  t7618 = t3124*t7576;
  t7619 = t7597*t7612;
  t7620 = t7618 + t7619;
  t7621 = 10.*t7614*t7620;
  t7630 = Power(t7625,2);
  t7631 = 10.*t7630;
  t7632 = -1.*t7597*t3124;
  t7633 = t7576*t7612;
  t7634 = t7632 + t7633;
  t7650 = 10.*t7625*t7634;
  t7662 = Power(t7661,2);
  t7663 = 10.*t7662;
  t7664 = t7657*t7576;
  t7665 = t7597*t7659;
  t7666 = t7664 + t7665;
  t7667 = 10.*t7661*t7666;
  t7673 = Power(t7672,2);
  t7674 = 10.*t7673;
  t7675 = -1.*t7597*t7657;
  t7676 = t7576*t7659;
  t7677 = t7675 + t7676;
  t7678 = 10.*t7672*t7677;
  t7651 = t7616 + t7621 + t7631 + t7650;
  t7652 = -0.5*var2[3]*t7651;
  t7679 = t7663 + t7667 + t7674 + t7678;
  t7680 = -0.5*var2[4]*t7679;
  t7699 = 10.*t7614*t7625;
  t7700 = 10.*t7620*t7625;
  t7703 = 10.*t7661*t7672;
  t7704 = 10.*t7666*t7672;
  t7707 = t7699 + t7700 + t7703 + t7704;
  t7701 = t7699 + t7700;
  t7705 = t7703 + t7704;
  t7713 = 15.*t7614*t7625;
  t7714 = 5.*t7620*t7625;
  t7715 = 15.*t7614*t7634;
  t7716 = 5.*t7620*t7634;
  t7719 = 15.*t7661*t7672;
  t7720 = 5.*t7666*t7672;
  t7721 = 15.*t7661*t7677;
  t7722 = 5.*t7666*t7677;
  t7717 = t7713 + t7714 + t7715 + t7716;
  t7718 = -0.5*var2[3]*t7717;
  t7723 = t7719 + t7720 + t7721 + t7722;
  t7724 = -0.5*var2[4]*t7723;
  t7735 = 5.*t7615;
  t7736 = 5.*t7614*t7620;
  t7737 = 5.*t7630;
  t7738 = 5.*t7625*t7634;
  t7741 = 5.*t7662;
  t7742 = 5.*t7661*t7666;
  t7743 = 5.*t7673;
  t7744 = 5.*t7672*t7677;
  t7747 = t7735 + t7736 + t7737 + t7738 + t7741 + t7742 + t7743 + t7744;
  t7739 = t7735 + t7736 + t7737 + t7738;
  t7745 = t7741 + t7742 + t7743 + t7744;
  t7753 = Power(t3124,2);
  t7754 = 0.5*t7753;
  t7755 = Power(t7612,2);
  t7756 = 0.5*t7755;
  t7757 = t7754 + t7756;
  t7759 = Power(t7657,2);
  t7760 = 0.5*t7759;
  t7761 = Power(t7659,2);
  t7762 = 0.5*t7761;
  t7763 = t7760 + t7762;
  t7758 = -2.5*var2[3]*t7634*t7757;
  t7764 = -2.5*var2[4]*t7677*t7763;
  t7780 = -2.5*t7576;
  t7781 = 5.*t7614*t7757;
  t7782 = 5.*t7661*t7763;
  t7783 = t7780 + t7781 + t7782;
  t7789 = -1.25*var2[2]*t7634;
  t7790 = -1.25*var2[3]*t7634;
  t7791 = t7789 + t7790;
  t7792 = var2[0]*t7791;
  t7796 = -1.25*var2[0]*t7614;
  t7797 = -1.25*var2[2]*t7677;
  t7798 = -1.25*var2[4]*t7677;
  t7799 = t7797 + t7798;
  t7800 = var2[0]*t7799;
  t7804 = -1.25*var2[0]*t7661;
  p_output1[0]=var2[0]*(t7652 + t7680 - 0.5*(t7616 + t7621 + t7631 + t7650 + t7663 + t7667 + t7674 + t7678)*var2[2]);
  p_output1[1]=var2[0]*(t7652 - 0.5*t7651*var2[2]);
  p_output1[2]=var2[0]*(t7680 - 0.5*t7679*var2[2]);
  p_output1[3]=-0.5*t7707*var2[2] - 0.5*t7701*var2[3] - 0.5*t7705*var2[4];
  p_output1[4]=-0.5*t7707*var2[0];
  p_output1[5]=-0.5*t7701*var2[0];
  p_output1[6]=-0.5*t7705*var2[0];
  p_output1[7]=var2[0]*(t7718 + t7724 - 0.5*(t7713 + t7714 + t7715 + t7716 + t7719 + t7720 + t7721 + t7722)*var2[2]);
  p_output1[8]=var2[0]*(t7718 - 0.5*t7717*var2[2]);
  p_output1[9]=var2[0]*(t7724 - 0.5*t7723*var2[2]);
  p_output1[10]=-0.5*t7747*var2[2] - 0.5*t7739*var2[3] - 0.5*t7745*var2[4];
  p_output1[11]=-0.5*t7747*var2[0];
  p_output1[12]=-0.5*t7739*var2[0];
  p_output1[13]=-0.5*t7745*var2[0];
  p_output1[14]=var2[0]*(t7758 + t7764 - 0.5*(-2.5*t7597 + 5.*t7634*t7757 + 5.*t7677*t7763)*var2[2]);
  p_output1[15]=var2[0]*(t7758 - 2.5*t7634*t7757*var2[2]);
  p_output1[16]=var2[0]*(t7764 - 2.5*t7677*t7763*var2[2]);
  p_output1[17]=-0.5*t7783*var2[2] - 2.5*t7614*t7757*var2[3] - 2.5*t7661*t7763*var2[4];
  p_output1[18]=-0.5*t7783*var2[0];
  p_output1[19]=-2.5*t7614*t7757*var2[0];
  p_output1[20]=-2.5*t7661*t7763*var2[0];
  p_output1[21]=t7792;
  p_output1[22]=t7792;
  p_output1[23]=-1.25*t7614*var2[2] - 1.25*t7614*var2[3];
  p_output1[24]=t7796;
  p_output1[25]=t7796;
  p_output1[26]=t7800;
  p_output1[27]=t7800;
  p_output1[28]=-1.25*t7661*var2[2] - 1.25*t7661*var2[4];
  p_output1[29]=t7804;
  p_output1[30]=t7804;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 31, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec1_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce1_vec1_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
