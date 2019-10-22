// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Implementation of own XML processor
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include standard C++ headers
#include <iostream>
#include <string>
#include <algorithm>
#include "xmlProc.hh"

// Include own project headers


// *****************************************************************************************
//
// Section: proc API declaration/definition
//
// *****************************************************************************************

namespace osapi
{
namespace configuration
{


void xmlProc::specificElement( const std::string & name, const std::string & value	)
{
  std::cout << "Element name <" << name << "> with value <" << value << ">" << std::endl;
}

void xmlProc::specificInstruction( const std::string & type, const std::string & data	)
{
  std::cout << "Processing instruction name <" << type << "> with data <" << data << ">" << std::endl;
}

void xmlProc::specificAttribute( const std::string & name, const std::string & value	)
{
  std::cout << "Attribute name <" << name << "> with value <" << value << ">" << std::endl;
}


void xmlProc::specificComment( const std::string & data )
{
  std::cout << "Comment <" << data << ">"  << std::endl;
}


void xmlProc::specificText( const std::string & data )
{
  std::string myData = data;

  myData.erase( std::remove( myData.begin(), myData.end(), '\n' ), myData.end() );

  std::cout << "Text data <" << myData << ">" << std::endl;
}


}		// End of namespace "XMLConfig"
}		// End of namespace "osapi"


