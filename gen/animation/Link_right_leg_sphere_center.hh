/*
 * Automatically Generated from Mathematica.
 * Fri 9 Jun 2017 14:07:28 GMT-04:00
 */

#ifndef LINK_RIGHT_LEG_SPHERE_CENTER_HH
#define LINK_RIGHT_LEG_SPHERE_CENTER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Link_right_leg_sphere_center_raw(double *p_output1, const double *var1);

  inline void Link_right_leg_sphere_center(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 5, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Link_right_leg_sphere_center_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LINK_RIGHT_LEG_SPHERE_CENTER_HH
