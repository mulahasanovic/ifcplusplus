/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and/or modified under  
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
* (at your option) any later version.  The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
* OpenSceneGraph Public License for more details.
*/
#include <map>
#include "ifcpp/model/shared_ptr.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "include/IfcBoolean.h"
#include "include/IfcModulusOfRotationalSubgradeReactionMeasure.h"
#include "include/IfcModulusOfRotationalSubgradeReactionSelect.h"

// TYPE IfcModulusOfRotationalSubgradeReactionSelect 
IfcModulusOfRotationalSubgradeReactionSelect::IfcModulusOfRotationalSubgradeReactionSelect() {}
IfcModulusOfRotationalSubgradeReactionSelect::~IfcModulusOfRotationalSubgradeReactionSelect() {}
shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect> IfcModulusOfRotationalSubgradeReactionSelect::createObjectFromStepData( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	// Read SELECT TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>(); }
	if( arg[0] == '#' )
	{
		int id=std::stoi( arg.substr(1,arg.length()-1).c_str() );
		std::map<int,shared_ptr<IfcPPEntity> >::const_iterator it_entity = map.find( id );
		if( it_entity != map.end() )
		{
			shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect> type_object = dynamic_pointer_cast<IfcModulusOfRotationalSubgradeReactionSelect>(it_entity->second);
			return type_object;
		}
		else
		{
			std::stringstream strs;
			strs << "Object width id " << id << " not found";
			throw IfcPPException( strs.str() );
		}
	}
	else if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>();
	}
	else if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>();
	}
	else
	{
		// inline arguments
		std::wstring keyword;
		std::wstring inline_arg;
		tokenizeInlineArgument( arg, keyword, inline_arg );
		shared_ptr<IfcPPObject> result_object;
		readInlineTypeOrEntity( keyword, inline_arg, result_object, map );
		if( result_object )
		{
			shared_ptr<IfcPPObject> result_ptr( result_object );
			shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect> result_ptr_self = dynamic_pointer_cast<IfcModulusOfRotationalSubgradeReactionSelect>( result_ptr );
			if( result_ptr_self )
			{
				return result_ptr_self;
			}
		}
		std::wstringstream strs;
		strs << "unhandled inline argument: " << arg << " in function IfcModulusOfRotationalSubgradeReactionSelect::readStepData" << std::endl;
		throw IfcPPException( strs.str() );
	}
	return shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>();
}
