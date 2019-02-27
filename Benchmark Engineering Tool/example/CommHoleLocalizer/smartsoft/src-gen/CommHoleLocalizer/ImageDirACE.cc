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
#include "CommHoleLocalizer/ImageDirACE.hh"
#include <ace/SString.h>

// serialization operator for element ImageDir
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommHoleLocalizerIDL::ImageDir &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element directory
	good_bit = good_bit && cdr << ACE_CString(data.directory.c_str());
	
	return good_bit;
}

// de-serialization operator for element ImageDir
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommHoleLocalizerIDL::ImageDir &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize string-type element directory
	ACE_CString data_directory_str;
	good_bit = good_bit && cdr >> data_directory_str;
	data.directory = data_directory_str.c_str();
	
	return good_bit;
}

// serialization operator for CommunicationObject ImageDir
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommHoleLocalizer::ImageDir &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject ImageDir
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommHoleLocalizer::ImageDir &obj)
{
	return cdr >> obj.set();
}
