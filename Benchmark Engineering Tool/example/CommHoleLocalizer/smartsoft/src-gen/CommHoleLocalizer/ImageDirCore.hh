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
#ifndef COMMHOLELOCALIZER_IMAGEDIR_CORE_H_
#define COMMHOLELOCALIZER_IMAGEDIR_CORE_H_

#include "CommHoleLocalizer/ImageDirData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommHoleLocalizer {
	
class ImageDirCore {
protected:
	// data structure
	CommHoleLocalizerIDL::ImageDir idl_ImageDir;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommHoleLocalizerIDL::ImageDir DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	ImageDirCore();
	ImageDirCore(const DATATYPE &data);
	// default destructor
	virtual ~ImageDirCore();
	
	const DATATYPE& get() const { return idl_ImageDir; }
	operator const DATATYPE&() const { return idl_ImageDir; }
	DATATYPE& set() { return idl_ImageDir; }

	static inline std::string identifier(void) { return "CommHoleLocalizer::ImageDir"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Directory
	inline std::string getDirectory() const { return idl_ImageDir.directory; }
	inline ImageDirCore& setDirectory(const std::string &directory) { idl_ImageDir.directory = directory; return *this; }
};

} /* namespace CommHoleLocalizer */
#endif /* COMMHOLELOCALIZER_IMAGEDIR_CORE_H_ */
