// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Defines API for own Node Processor
//
// *****************************************************************************************

#ifndef XMLCONFIG_PROC_HH_
#define XMLCONFIG_PROC_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import Standard C++ declarations
#include <string>

// Include Arta headers
#include "defs/xml_types.hh"
#include "parser/xml_hprocessor.hh"

// Include own project headers
#include "XMLConfig_defs.hh"


// *****************************************************************************************
//
// Section: proc API declaration/definition
//
// *****************************************************************************************

namespace osapi
{

namespace configuration
{

class xmlProc : public HPROCESSOR
{
public:
	using 			HPROCESSOR::hProcessor;

	void 			specificElement		( const std::string & name, const std::string & value	);
	void 			specificInstruction	( const std::string & type, const std::string & data	);
	void 			specificAttribute	( const std::string & name, const std::string & value	);
	void 			specificComment		( const std::string & data								);
	void 			specificText		( const std::string & data								);

};



}		// End of namespace "configuration"
}		// End of namespace "osapi"

#endif /* XMLCONFIG_PROC_HH_ */
