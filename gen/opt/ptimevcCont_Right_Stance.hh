/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:38 GMT-04:00
 */

#ifndef PTIMEVCCONT_RIGHT_STANCE_HH
#define PTIMEVCCONT_RIGHT_STANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[tl, Blank[]]]
{

  void ptimevcCont_Right_Stance_raw(double *p_output1, const double *var1,const double *var2);

  inline void ptimevcCont_Right_Stance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 2);
    assert_size_matrix(var2, 1, 2);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ptimevcCont_Right_Stance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PTIMEVCCONT_RIGHT_STANCE_HH
