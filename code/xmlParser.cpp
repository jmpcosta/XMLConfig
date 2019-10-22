// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose: Module definitions for parsing items through a XML Configuration file
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <string>
#include <iostream>
#include <fstream>
#include <cstdint>
#include <cstring>


// Import OSAPI+ headers
#include "status/trace_macros.hh"
#include "status/status.hh"
#include "status/trace.hh"

// Import configuration headers
#include "configuration/Provider.hh"

// Import filesystem headers
#include "filesystem/filesystem.hh"

// Include own headers
#include "configuration/defs.hh"

// Import project headers
#include "XMLConfig_defs.hh"
#include "xmlProc.hh"
#include "xmlParser.hh"



namespace osapi
{

namespace configuration
{

// *****************************************************************************************
//
// Section: Module constants
//
// *****************************************************************************************

TRACE_CLASSNAME( xmlParser )

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************


xmlParser::xmlParser()
{
 TRACE_POINT
}

xmlParser::~xmlParser()
{
 TRACE_POINT
}

// Implementation of the mandatory interface
void xmlParser::import( const std::string & from, std::string & into )
{
 TRACE( "Entering with", from, " and", into )

 std::ifstream input_file;

 if( from.size() == 0 || into.size() == 0 )	return;		// Do nothing

 if( ! filesystem::element::exists( from ) )
	 throw status( "No XML configuration file exists" );
 else
   {
	 PARSER myParser( from.c_str() );

	 xmlProc myProcessor( myParser );

	 myProcessor.process();
   }


 TRACE_EXIT
}




}	// End of namespace "configuration"
}	// End of osapi namespace

