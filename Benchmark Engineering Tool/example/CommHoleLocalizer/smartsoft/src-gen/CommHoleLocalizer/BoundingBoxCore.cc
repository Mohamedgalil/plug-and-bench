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
#include "CommHoleLocalizer/BoundingBoxCore.hh"

// serialization/deserialization operators
//#include "CommHoleLocalizer/BoundingBoxACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommHoleLocalizer 
{
	const char* BoundingBoxCore::getCompiledHash()
	{
		return CommHoleLocalizerIDL::REPO_HASH;
	}
	
	void BoundingBoxCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void BoundingBoxCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "BoundingBoxCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t BoundingBoxCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.x);
		boost::hash_combine(seed, data.y);
		boost::hash_combine(seed, data.width);
		boost::hash_combine(seed, data.height);
		
		return seed;
	}
	#endif
	
	// default constructor
	BoundingBoxCore::BoundingBoxCore()
	:	idl_BoundingBox()
	{  
		setX(0);
		setY(0);
		setWidth(0);
		setHeight(0);
	}
	
	BoundingBoxCore::BoundingBoxCore(const DATATYPE &data)
	:	idl_BoundingBox(data)
	{  }

	BoundingBoxCore::~BoundingBoxCore()
	{  }
	
	void BoundingBoxCore::to_ostream(std::ostream &os) const
	{
	  os << "BoundingBox(";
	  os << getX() << " ";
	  os << getY() << " ";
	  os << getWidth() << " ";
	  os << getHeight() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void BoundingBoxCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<x>" << getX() << "</x>";
		os << indent << "<y>" << getY() << "</y>";
		os << indent << "<width>" << getWidth() << "</width>";
		os << indent << "<height>" << getHeight() << "</height>";
	}
	
	// restore from xml stream
	void BoundingBoxCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_x("<x>");
		static const Smart::KnuthMorrisPratt kmp_y("<y>");
		static const Smart::KnuthMorrisPratt kmp_width("<width>");
		static const Smart::KnuthMorrisPratt kmp_height("<height>");
		
		if(kmp_x.search(is)) {
			int xItem;
			is >> xItem;
			setX(xItem);
		}
		if(kmp_y.search(is)) {
			int yItem;
			is >> yItem;
			setY(yItem);
		}
		if(kmp_width.search(is)) {
			int widthItem;
			is >> widthItem;
			setWidth(widthItem);
		}
		if(kmp_height.search(is)) {
			int heightItem;
			is >> heightItem;
			setHeight(heightItem);
		}
	}
	
	/*
	void BoundingBoxCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommHoleLocalizerIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommHoleLocalizerIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see BoundingBoxACE.hh)
		cdr << idl_BoundingBox;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_BoundingBox);
		cdr << data_hash;
		// std::cout << "BoundingBoxCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void BoundingBoxCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommHoleLocalizerIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see BoundingBoxACE.hh)
		cdr >> idl_BoundingBox;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_BoundingBox);
		assert(data_hash == own_hash);
		// std::cout << "BoundingBoxCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommHoleLocalizer */
