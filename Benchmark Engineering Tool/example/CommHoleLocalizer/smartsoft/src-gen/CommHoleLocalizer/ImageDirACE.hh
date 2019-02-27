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
#ifndef COMMHOLELOCALIZER_IMAGEDIR_ACE_H_
#define COMMHOLELOCALIZER_IMAGEDIR_ACE_H_

#include "CommHoleLocalizer/ImageDir.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure ImageDir
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommHoleLocalizerIDL::ImageDir &data);

// de-serialization operator for DataStructure ImageDir
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommHoleLocalizerIDL::ImageDir &data);

// serialization operator for CommunicationObject ImageDir
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommHoleLocalizer::ImageDir &obj);

// de-serialization operator for CommunicationObject ImageDir
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommHoleLocalizer::ImageDir &obj);

#endif /* COMMHOLELOCALIZER_IMAGEDIR_ACE_H_ */
