// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose: Defines the Interface for parsing itens from XML configuration files
//
// *****************************************************************************************

#ifndef OSAPI_CONFIGURATION_XMLPARSER_HH_
#define OSAPI_CONFIGURATION_XMLPARSER_HH_


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>

// Import configuration headers
//#include "configuration/itemType.hh"
//#include "configuration/configuration.hh"
#include "configuration/parser.hh"


namespace osapi
{
namespace configuration
{

// *****************************************************************************************
//
// Section: Module declarations/definitions
//
// *****************************************************************************************

// *****************************************************************************************
//
// Section: Module API declaration
//
// *****************************************************************************************

/// @brief An implementation of a configuration parser interface that reads a set of CIs
///
/// A file parser imports Configuration Items into a configuration. Each line is in the form:<BR>
/// <HR>
/// [container name] <B>|</B> [Configuration Item type]<BR>
/// <HR>
/// Where a Configuration type can be:<BR>
/// <HR>
/// prop:[property name]=[property value]<BR>
/// env:[variable name]=[variable value]<BR>
/// arg:[arguments]<BR>
class xmlParser : public parser
{
public:
		/// @brief class destructor
		explicit		xmlParser();

		/// @brief Class destructor
    					~xmlParser();

    	/// @brief Import a property file into a configuration name
    	/// @param [in] from - Property file name to import
    	/// @param [in] into - Destination configuration name
    	void	 		import( const std::string & from, std::string & into );

private:

    	// Instance methods

    	// Instance variables
    	TRACE_CLASSNAME_DECLARATION
};

}	// End of namespace "configuration"

}	// End of namespace "osapi"




#endif /* OSAPI_CONFIGURATION_XMLPARSER_HH_ */
