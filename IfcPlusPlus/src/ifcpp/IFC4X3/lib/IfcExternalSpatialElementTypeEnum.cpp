/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcExternalSpatialElementTypeEnum.h"

// TYPE IfcExternalSpatialElementTypeEnum = ENUMERATION OF	(EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_FIRE	,EXTERNAL_WATER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcExternalSpatialElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCEXTERNALSPATIALELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_EXTERNAL:	stream << ".EXTERNAL."; break;
		case ENUM_EXTERNAL_EARTH:	stream << ".EXTERNAL_EARTH."; break;
		case ENUM_EXTERNAL_FIRE:	stream << ".EXTERNAL_FIRE."; break;
		case ENUM_EXTERNAL_WATER:	stream << ".EXTERNAL_WATER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcExternalSpatialElementTypeEnum> IFC4X3::IfcExternalSpatialElementTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcExternalSpatialElementTypeEnum>(); }
	shared_ptr<IfcExternalSpatialElementTypeEnum> type_object( new IfcExternalSpatialElementTypeEnum() );
	if( std_iequal( arg, ".EXTERNAL." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL;
	}
	else if( std_iequal( arg, ".EXTERNAL_EARTH." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_EARTH;
	}
	else if( std_iequal( arg, ".EXTERNAL_FIRE." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_FIRE;
	}
	else if( std_iequal( arg, ".EXTERNAL_WATER." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_EXTERNAL_WATER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcExternalSpatialElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
