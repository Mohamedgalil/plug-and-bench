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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMHOLELOCALIZER_BOUNDINGBOX_H_
#define COMMHOLELOCALIZER_BOUNDINGBOX_H_

#include "CommHoleLocalizer/BoundingBoxCore.hh"

namespace CommHoleLocalizer {
		
class BoundingBox : public BoundingBoxCore {
	public:
		// default constructors
		BoundingBox();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// BoundingBox(const int &x, const int &y, const int &width, const int &height);
		
		BoundingBox(const BoundingBoxCore &boundingBox);
		BoundingBox(const DATATYPE &boundingBox);
		virtual ~BoundingBox();
		
		// use framework specific getter and setter methods from core (base) class
		using BoundingBoxCore::get;
		using BoundingBoxCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const BoundingBox &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommHoleLocalizer */
#endif /* COMMHOLELOCALIZER_BOUNDINGBOX_H_ */
