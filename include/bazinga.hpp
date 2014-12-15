#ifndef _BAZINGA_HPP
#define _BAZINGA_HPP 1

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <sys/stat.h>
#include <sys/types.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>

#define LIGHT_SPEED 2.99e10
#define ELECTRON_MASS 9.109558e-28
#define PROTON_MASS 1.672614e-24
#define SIGMA_T 6.652453e-25
#define ELECTRON_CHARGE 4.803250e-10
#define PLANCK_H 6.626e-27
#define SIGMA_SB 5.67e-5
#define K_BOLTZMAN 1.38e-16
#define B_CR 4.414e13
#define G_CONST 6.674e-8 // CGS [cm^3 g^-1 s^-2]
#define MSUN 1.98900e+33 // CGS [g]

#define sigTc (1.994355e-14)
#define mec2  (8.18726233e-7)
#define mec2h (1.24e20)  // mec2/h
#define mpc2 (1.503277e-3)
#define mpme (1836)

#define DSQR(a) ((a)*(a))
#define A43 (4.0/3.0)
#define A43sigTmec (3.247899229e-8)  // 4/3 sigT/mec
#define constC1 (1.21e-34)  // 3/4 sigTch/mc2
#define constA1 (6.52e-7)
// if frequency of maximum is estimated form vFv A1=5e-7 
#define constA2 (0.15)
#define constC1 (1.21e-34)  // 3/4 sigTch/mc2
#define DMAX(a,b) ((a)>(b) ? (a) : (b))
#define DMIN(a,b) ((a) < (b) ? (a) : (b))
#define ESP 1.0e-6

#define eV2erg 1.60217646e-12
#define erg2eV 6.2415098e+11

namespace bazinga
{
  /* functions includes corrections a1, a2, a3 from numerical recipies */
  double IntCor( int i, int N );

  /* print info functions */
  void info( std::string module, int v1 );
  void info( std::string module, double v1 );
  void info( std::string module, std::string s1 );
  void info( std::string module, std::string s1, std::string s2 );
  void info( std::string module, std::string s1, std::string s2, std::string s3 );
  void info( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 );
  void info( std::string module, std::string s1, int v1 );
  void info( std::string module, std::string s1, double v1 );
  void info( std::string module, std::string s1, int v1, std::string s2 );
  void info( std::string module, std::string s1, double v1, std::string s2 );
  void info( std::string module, std::string s1, int v1, std::string s2, int v2 );
  void info( std::string module, std::string s1, int v1, std::string s2, double v2 );
  void info( std::string module, std::string s1, double v1, std::string s2, int v2 );
  void info( std::string module, std::string s1, double v1, std::string s2, double v2 );
  void info( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 );
  void info( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 );
  void info( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 );
  void info( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 );

  /* print warning functions */
  void warning( std::string module, int v1 );
  void warning( std::string module, double v1 );
  void warning( std::string module, std::string s1 );
  void warning( std::string module, std::string s1, std::string s2 );
  void warning( std::string module, std::string s1, std::string s2, std::string s3 );
  void warning( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 );
  void warning( std::string module, std::string s1, int v1 );
  void warning( std::string module, std::string s1, double v1 );
  void warning( std::string module, std::string s1, int v1, std::string s2 );
  void warning( std::string module, std::string s1, double v1, std::string s2 );
  void warning( std::string module, std::string s1, int v1, std::string s2, int v2 );
  void warning( std::string module, std::string s1, int v1, std::string s2, double v2 );
  void warning( std::string module, std::string s1, double v1, std::string s2, int v2 );
  void warning( std::string module, std::string s1, double v1, std::string s2, double v2 );
  void warning( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 );
  void warning( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 );
  void warning( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 );
  void warning( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 );

  /* print error functions */
  void error( std::string module, int v1 );
  void error( std::string module, double v1 );
  void error( std::string module, std::string s1 );
  void error( std::string module, std::string s1, std::string s2 );
  void error( std::string module, std::string s1, std::string s2, std::string s3 );
  void error( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 );
  void error( std::string module, std::string s1, int v1 );
  void error( std::string module, std::string s1, double v1 );
  void error( std::string module, std::string s1, int v1, std::string s2 );
  void error( std::string module, std::string s1, double v1, std::string s2 );
  void error( std::string module, std::string s1, int v1, std::string s2, int v2 );
  void error( std::string module, std::string s1, int v1, std::string s2, double v2 );
  void error( std::string module, std::string s1, double v1, std::string s2, int v2 );
  void error( std::string module, std::string s1, double v1, std::string s2, double v2 );
  void error( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 );
  void error( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 );
  void error( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 );
  void error( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 );

  /* print debug functions */
  void debug( std::string module, int v1 );
  void debug( std::string module, double v1 );
  void debug( std::string module, std::string s1 );
  void debug( std::string module, std::string s1, std::string s2 );
  void debug( std::string module, std::string s1, std::string s2, std::string s3 );
  void debug( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 );
  void debug( std::string module, std::string s1, int v1 );
  void debug( std::string module, std::string s1, double v1 );
  void debug( std::string module, std::string s1, int v1, std::string s2 );
  void debug( std::string module, std::string s1, double v1, std::string s2 );
  void debug( std::string module, std::string s1, int v1, std::string s2, int v2 );
  void debug( std::string module, std::string s1, int v1, std::string s2, double v2 );
  void debug( std::string module, std::string s1, double v1, std::string s2, int v2 );
  void debug( std::string module, std::string s1, double v1, std::string s2, double v2 );
  void debug( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 );
  void debug( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 );
  void debug( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 );
  void debug( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 );


  void print_info( std::string module, std::string name, double val, std::string add );
  void print_info( std::string module, std::string name, int val, std::string add );
  void print_info( std::string name, double val, std::string add );
  void print_info( std::string name, int val, std::string add );
  void print_info( std::string module, std::string name, double val );
  void print_info( std::string module, std::string name, int val );
  void print_info( std::string name, double val );
  void print_info( std::string name, int val );
  void print_info( std::string name, std::string val );
  void print_info( std::string name );
  void print_info( std::string module, std::string name, std::string val );
  void print_header( );
  void print_section( );
 
  void save_GSLMatrix( std::string filename, gsl_matrix* x, gsl_matrix* y, double id, int radiusIndex, std::string dir );
  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* y, std::string dir );
  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* y, double id, std::string dir );
  void save_GSLVectorFlare( std::string filename, gsl_vector* x, gsl_vector* y, double id, std::string dir );
  void save_GSLVectorEle( std::string filename, gsl_vector* x, gsl_vector* y, std::string dir );
  void save_GSLVectorEle( std::string filename, gsl_vector* x, gsl_vector* y, double id, std::string dir );
  void save_GSLVectorMatrix( std::string filename, gsl_vector* x, gsl_matrix* y, double id, int radiusIndex, std::string dir );

  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* gamma, gsl_vector* y, std::string dir );
  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* gamma, gsl_vector* y, double id, std::string dir );
 
  void print_GSLVector_allocated_memory( gsl_vector* p );
  void print_GSLMatrix_allocated_memory( gsl_matrix* p );
  void print_GSLVector_allocated_memory( std::string id, gsl_vector* p );
  void print_GSLMatrix_allocated_memory( std::string id, gsl_matrix* p );
}


#endif /* _BAZINGA_HPP */
