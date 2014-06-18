#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// User inputs
typedef struct{
	int x_assemblies;          // Number of assemblies in the x-axis of the reactor
	int y_assemblies;          // Number of assemblies in the y-axis of the reactor
	int cai;                   // This is the number of course axial intervals
	int fai;                   // This is the number of fine axial intervals per course axial interval
	int axial_exp;             // Axial source expansion order
	double radial_ray_sep;     // Radial ray separation
	double axial_z_sep;        // Axial stacked z-ray separation
	int n_azimuthal;           // Number of azimuthal angles
	int n_polar_angles;        // Number of polar angles
	int n_egroups;             // Number of energy groups
	int decompose;             // Turn decomposition on/off (1 on, 0 off)
	long decomp_assemblies_ax; // Number of assemblies per sub-domain (axially)
} Input;

// Hardcoded Reactor definition
typedef struct{
	double pin_cell_width;     //  Width of a pin cell - Default 1.26 cm
	double pin_radius;         //  Radius of a fuel pin - 0.46 cm
	int n_radial_regions;       //  Number of radial regions - default 10
	int n_aziuthal_regions;     //  Number of azimuthal regions - default 8
} Reactor;


// goemetry.c
double * determine_radii( Reactor reactor );
