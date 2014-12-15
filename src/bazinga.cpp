#include "bazinga.hpp"

namespace bazinga {

  double IntCor( int i, int N )
  {
    double ret = 1.0;
    const double a1 = 0.375;
    const double a2 = 7.0/6.0;
    const double a3 = 23.0/24.0;
  
    if( i <= 2 || i >= N-3 )
      {
	if( i==0 || i==N-1 )
	  ret = a1;
	else if( i==1 || i==N-2 )
	  ret = a2;
	else if( i==2 || i==N-3 )
	  ret = a3;
      }
    return ret;
  }

  void info( std::string module, std::string s1 ) { std::cout<<" ["<<module<<"] "<<s1<<std::endl; }
  void info( std::string module, std::string s1, std::string s2 ) { std::cout<<" ["<<module<<"] "<<s1<<" "<<s2<<std::endl; }
  void info( std::string module, std::string s1, std::string s2, std::string s3 ) { std::cout<<" ["<<module<<"] "<<s1<<" "<<s2<<" "<<s3<<std::endl; }
  void info( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 ) { std::cout<<" ["<<module<<"] "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<std::endl; }
  void info( std::string module, int v1 ) { std::cout<<" ["<<module<<"]\t#"<<v1<<std::endl; }
  void info( std::string module, double v1 ) { std::cout<<" ["<<module<<"]\t#"<<v1<<std::endl; }
  void info( std::string module, std::string s1, int v1 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<std::endl; }
  void info( std::string module, std::string s1, double v1 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<std::endl; }
  void info( std::string module, std::string s1, int v1, std::string s2 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void info( std::string module, std::string s1, double v1, std::string s2 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void info( std::string module, std::string s1, int v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void info( std::string module, std::string s1, int v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void info( std::string module, std::string s1, double v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void info( std::string module, std::string s1, double v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void info( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void info( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void info( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void info( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }

  void warning( std::string module, std::string s1 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<std::endl; }
  void warning( std::string module, std::string s1, std::string s2 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<" "<<s2<<std::endl; }
  void warning( std::string module, std::string s1, std::string s2, std::string s3 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<" "<<s2<<" "<<s3<<std::endl; }
  void warning( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<std::endl; }
  void warning( std::string module, int v1 ) { std::cout<<" ["<<module<<"] (WARNING)\t#"<<v1<<std::endl; }
  void warning( std::string module, double v1 ) { std::cout<<" ["<<module<<"] (WARNING)\t#"<<v1<<std::endl; }
  void warning( std::string module, std::string s1, int v1 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<std::endl; }
  void warning( std::string module, std::string s1, double v1 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<std::endl; }
  void warning( std::string module, std::string s1, int v1, std::string s2 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void warning( std::string module, std::string s1, double v1, std::string s2 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void warning( std::string module, std::string s1, int v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void warning( std::string module, std::string s1, int v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void warning( std::string module, std::string s1, double v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void warning( std::string module, std::string s1, double v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void warning( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void warning( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void warning( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void warning( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] (WARNING) "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }

  void error( std::string module, std::string s1 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<std::endl; }
  void error( std::string module, std::string s1, std::string s2 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<" "<<s2<<std::endl; }
  void error( std::string module, std::string s1, std::string s2, std::string s3 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<" "<<s2<<" "<<s3<<std::endl; }
  void error( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<std::endl; }
  void error( std::string module, int v1 ) { std::cout<<" ["<<module<<"] !ERROR!\t#"<<v1<<std::endl; }
  void error( std::string module, double v1 ) { std::cout<<" ["<<module<<"] !ERROR!\t#"<<v1<<std::endl; }
  void error( std::string module, std::string s1, int v1 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<std::endl; }
  void error( std::string module, std::string s1, double v1 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<std::endl; }
  void error( std::string module, std::string s1, int v1, std::string s2 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void error( std::string module, std::string s1, double v1, std::string s2 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void error( std::string module, std::string s1, int v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void error( std::string module, std::string s1, int v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void error( std::string module, std::string s1, double v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void error( std::string module, std::string s1, double v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void error( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void error( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void error( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void error( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] !ERROR! "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }

  void debug( std::string module, std::string s1 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<std::endl; }
  void debug( std::string module, std::string s1, std::string s2 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<" "<<s2<<std::endl; }
  void debug( std::string module, std::string s1, std::string s2, std::string s3 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<" "<<s2<<" "<<s3<<std::endl; }
  void debug( std::string module, std::string s1, std::string s2, std::string s3, std::string s4 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<std::endl; }
  void debug( std::string module, int v1 ) { std::cout<<" ["<<module<<"] +DEBUG+\t#"<<v1<<std::endl; }
  void debug( std::string module, double v1 ) { std::cout<<" ["<<module<<"] +DEBUG+\t#"<<v1<<std::endl; }
  void debug( std::string module, std::string s1, int v1 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<std::endl; }
  void debug( std::string module, std::string s1, double v1 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<std::endl; }
  void debug( std::string module, std::string s1, int v1, std::string s2 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void debug( std::string module, std::string s1, double v1, std::string s2 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<< s2<<std::endl; }
  void debug( std::string module, std::string s1, int v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void debug( std::string module, std::string s1, int v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void debug( std::string module, std::string s1, double v1, std::string s2, int v2 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void debug( std::string module, std::string s1, double v1, std::string s2, double v2 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<std::endl; }
  void debug( std::string module, std::string s1, int v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void debug( std::string module, std::string s1, int v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void debug( std::string module, std::string s1, double v1, std::string s2, int v2, std::string s3 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }
  void debug( std::string module, std::string s1, double v1, std::string s2, double v2, std::string s3 ) { std::cout<<" ["<<module<<"] +DEBUG+ "<<s1<<"\t#"<<v1<<" "<<s2<<"\t#"<<v2<<" "<<s3<<std::endl; }

  void print_info( std::string module, std::string name, double val, std::string add ) { std::cout<<" ["<<module<<"] "  << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::setfill(' ') << " " << add << std::endl; } 

  void print_info( std::string module, std::string name, int val, std::string add ) { std::cout<<" ["<<module<<"] "  << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::setfill(' ') << " " << add << std::endl; } 

  void print_info( std::string name, std::string val ) { std::cout << " " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::setfill(' ') << std::endl; }
										    
  void print_info( std::string name, int val )	{ std::cout << " " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::setfill(' ') << std::endl; }
										   
  void print_info( std::string name, int val, std::string add ) { std::cout << " " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::setfill(' ') << " " << add << std::endl; } 

  void print_info( std::string name, double val ) { std::cout << " " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::endl; }

  void print_info( std::string module, std::string name, double val ) { std::cout<<" ["<<module<<"] " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::endl; }

  void print_info( std::string module, std::string name, int val ) { std::cout<<" ["<<module<<"] " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::endl; }

  void print_info( std::string name, double val, std::string add ) { std::cout << " " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << " " << add << std::endl; }

  void print_info( std::string module, std::string name, std::string val )  { std::cout<<" ["<<module<<"] " << name << "  " << std::setfill('.') << std::setw(58-name.length()) << "  " << std::setprecision(6) << val << std::endl; }

  void print_info( std::string name ) { std::cout << " " << name << std::endl; }

  void print_header( ) { std::cout << " " << std::setfill('-') << std::setw(90) << "  " << std::endl; }

  void print_section( ) { std::cout << " " << std::setfill('#') << std::setw(90) << "  " << std::endl; } 

  void save_GSLVectorMatrix( std::string filename, gsl_vector* x, gsl_matrix* y, double id, int radiusIndex, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename << "_" << id;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<y->size2;i++ ) { fprintf( output,"%e %e\n",gsl_vector_get(x,i), gsl_matrix_get(y,radiusIndex,i) ); }
    fclose(output); }


  void save_GSLMatrix( std::string filename, gsl_matrix* x, gsl_matrix* y, double id, int radiusIndex, std::string dir ) {  
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename << "_" << id;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<y->size2;i++ ) { fprintf( output,"%e %e\n",gsl_matrix_get(x,radiusIndex,i), gsl_matrix_get(y,radiusIndex,i) ); }
    fclose(output); }

  void save_GSLVectorFlare( std::string filename, gsl_vector* x, gsl_vector* y, double id, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename << "_" << id << "Hz";
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<y->size;i++ ) { fprintf( output,"%e %e\n", gsl_vector_get(x,i), gsl_vector_get(y,i) ); }
    fclose(output); }

  void save_GSLVectorEle( std::string filename, gsl_vector* x, gsl_vector* y, double id, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename << "_" << id;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<y->size;i++ ) { fprintf( output,"%e %e\n", gsl_vector_get(x,i+1), gsl_vector_get(y,i) ); }
    fclose(output); }

  void save_GSLVectorEle( std::string filename, gsl_vector* x, gsl_vector* y, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<y->size;i++ ) { fprintf( output,"%e %e\n", gsl_vector_get(x,i+1), gsl_vector_get(y,i) ); }
    fclose(output); }

  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* y, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<y->size;i++ ) { fprintf( output,"%e %e\n", gsl_vector_get(x,i), gsl_vector_get(y,i) ); }
    fclose(output); }

  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* y, double id, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename << "_" << id;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<y->size;i++ ) { fprintf( output,"%e %e\n", gsl_vector_get(x,i), gsl_vector_get(y,i) ); }
    fclose(output); }
  //---
  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* gamma, gsl_vector* y, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<x->size;i++ ) { fprintf( output,"%e %e %e\n", gsl_vector_get(x,i), gsl_vector_get(gamma,i), gsl_vector_get(y,i) ); }
    fclose(output); }

  void save_GSLVector( std::string filename, gsl_vector* x, gsl_vector* gamma, gsl_vector* y, double id, std::string dir ) {
    mkdir( dir.c_str(), 0777 );
    FILE *output;
    std::stringstream s;
    s << dir << "/" << filename << "_" << id;
    output = fopen(s.str().c_str(),"w");
    for( int i=0;i<x->size;i++ ) { fprintf( output,"%e %e %e\n", gsl_vector_get(x,i), gsl_vector_get(gamma,i), gsl_vector_get(y,i) ); }
    fclose(output); }
  //---
  void print_GSLVector_allocated_memory( gsl_vector* p ) { std::cout << " Allocated " << std::setfill('.') << std::setw(50) << "  " << std::setprecision(2) << sizeof(double)*(p->size)/(1024.0*1024.0) << " MB" << std::endl; }

  void print_GSLMatrix_allocated_memory( gsl_matrix* p ) { std::cout << " Allocated " << std::setfill('.') << std::setw(50) << "  " << std::setprecision(2) << sizeof(double)*(p->size1)*(p->size2)/(1024.0*1024.0) << " MB" << std::endl; }

  void print_GSLVector_allocated_memory( std::string module, gsl_vector* p ) { std::cout << " ["<<module<<"] " << "Allocated " << std::setfill('.') << std::setw(50) << "  " << std::setprecision(2) << sizeof(double)*(p->size)/(1024.0*1024.0) << " MB" << std::endl; }

  void print_GSLMatrix_allocated_memory( std::string module, gsl_matrix* p ) { std::cout << " ["<<module<<"] " << "Allocated " << std::setfill('.') << std::setw(50) << "  " << std::setprecision(2) << sizeof(double)*(p->size1)*(p->size2)/(1024.0*1024.0) << " MB" << std::endl; }

}


