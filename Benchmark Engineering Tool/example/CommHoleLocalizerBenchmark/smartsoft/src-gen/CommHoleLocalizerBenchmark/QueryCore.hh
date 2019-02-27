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
#ifndef COMMHOLELOCALIZERBENCHMARK_QUERY_CORE_H_
#define COMMHOLELOCALIZERBENCHMARK_QUERY_CORE_H_

#include "CommHoleLocalizerBenchmark/QueryData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommHoleLocalizerBenchmark {
	
class QueryCore {
protected:
	// data structure
	CommHoleLocalizerBenchmarkIDL::Query idl_Query;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommHoleLocalizerBenchmarkIDL::Query DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	QueryCore();
	QueryCore(const DATATYPE &data);
	// default destructor
	virtual ~QueryCore();
	
	const DATATYPE& get() const { return idl_Query; }
	operator const DATATYPE&() const { return idl_Query; }
	DATATYPE& set() { return idl_Query; }

	static inline std::string identifier(void) { return "CommHoleLocalizerBenchmark::Query"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Value
	inline short getValue() const { return idl_Query.value; }
	inline QueryCore& setValue(const short &value) { idl_Query.value = value; return *this; }
	
	// getter and setter for element MinHoleSize
	inline char getMinHoleSize() const { return idl_Query.minHoleSize; }
	inline QueryCore& setMinHoleSize(const char &minHoleSize) { idl_Query.minHoleSize = minHoleSize; return *this; }
	
	// getter and setter for element MaxHoleSize
	inline char getMaxHoleSize() const { return idl_Query.maxHoleSize; }
	inline QueryCore& setMaxHoleSize(const char &maxHoleSize) { idl_Query.maxHoleSize = maxHoleSize; return *this; }
	
	// getter and setter for element IsMultipleHoles
	inline bool getIsMultipleHoles() const { return idl_Query.isMultipleHoles; }
	inline QueryCore& setIsMultipleHoles(const bool &isMultipleHoles) { idl_Query.isMultipleHoles = isMultipleHoles; return *this; }
	
	// getter and setter for element MinPose
	inline char getMinPose() const { return idl_Query.minPose; }
	inline QueryCore& setMinPose(const char &minPose) { idl_Query.minPose = minPose; return *this; }
	
	// getter and setter for element MaxPose
	inline char getMaxPose() const { return idl_Query.maxPose; }
	inline QueryCore& setMaxPose(const char &maxPose) { idl_Query.maxPose = maxPose; return *this; }
	
	// getter and setter for element Occlusion
	inline char getOcclusion() const { return idl_Query.occlusion; }
	inline QueryCore& setOcclusion(const char &occlusion) { idl_Query.occlusion = occlusion; return *this; }
	
	// getter and setter for element Illumination
	inline char getIllumination() const { return idl_Query.illumination; }
	inline QueryCore& setIllumination(const char &illumination) { idl_Query.illumination = illumination; return *this; }
};

} /* namespace CommHoleLocalizerBenchmark */
#endif /* COMMHOLELOCALIZERBENCHMARK_QUERY_CORE_H_ */