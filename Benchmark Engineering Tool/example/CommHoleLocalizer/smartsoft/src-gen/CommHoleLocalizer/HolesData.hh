//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMHOLELOCALIZER_HOLES_DATA_H_
#define COMMHOLELOCALIZER_HOLES_DATA_H_

#include "CommHoleLocalizer/BoundingBoxData.hh"

#include <vector>

namespace CommHoleLocalizerIDL 
{
	typedef std::vector<CommHoleLocalizerIDL::BoundingBox> Holes_list_type;
	struct Holes
	{
		Holes_list_type list;
  	};
};

#endif /* COMMHOLELOCALIZER_HOLES_DATA_H_ */
