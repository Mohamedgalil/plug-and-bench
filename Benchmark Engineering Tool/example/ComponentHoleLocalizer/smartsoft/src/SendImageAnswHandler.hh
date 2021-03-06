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
#ifndef _SENDIMAGEANSWHANDLER_USER_HH
#define _SENDIMAGEANSWHANDLER_USER_HH
		

#include <SendImageAnswHandlerCore.hh>
#include <string>

#include "../../../../../SOFTWARE/smartsoft-ace-mdsd-v3/include/AceSmartSoftKernel/smartQueryServerHandler.hh"
#include "../../../../../SOFTWARE/smartsoft-ace-mdsd-v3/include/SmartSoft_CD_API/smartIQueryServerPattern_T.h"
#include "../../../CommHoleLocalizer/smartsoft/src/CommHoleLocalizer/Holes.hh"
#include "../../../CommHoleLocalizer/smartsoft/src/CommHoleLocalizer/ImageDir.hh"

//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/opencv.hpp>
//#include <opencv2/core/core.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//
////#include <smartNSAdapterACE.hh>
//using namespace std;
//using namespace cv;

class SendImageAnswHandler : public SendImageAnswHandlerCore
{
protected:
public:
	SendImageAnswHandler(Smart::IQueryServerPattern<CommHoleLocalizer::ImageDir, CommHoleLocalizer::Holes, SmartACE::QueryId>* server);
	virtual ~SendImageAnswHandler();
	virtual void handleQuery(const SmartACE::QueryId &id, const CommHoleLocalizer::ImageDir& request);
	CommHoleLocalizer::Holes findHoles(std::string filePath);
};
#endif
