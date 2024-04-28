/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcWorkCalendarTypeEnum.h"

// TYPE IfcWorkCalendarTypeEnum = ENUMERATION OF	(FIRSTSHIFT	,SECONDSHIFT	,THIRDSHIFT	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcWorkCalendarTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCWORKCALENDARTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FIRSTSHIFT:	stream << ".FIRSTSHIFT."; break;
		case ENUM_SECONDSHIFT:	stream << ".SECONDSHIFT."; break;
		case ENUM_THIRDSHIFT:	stream << ".THIRDSHIFT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcWorkCalendarTypeEnum> IFC4X3::IfcWorkCalendarTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcWorkCalendarTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcWorkCalendarTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcWorkCalendarTypeEnum>(); }
	shared_ptr<IfcWorkCalendarTypeEnum> type_object( new IfcWorkCalendarTypeEnum() );
	if( std_iequal( arg, ".FIRSTSHIFT." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_FIRSTSHIFT;
	}
	else if( std_iequal( arg, ".SECONDSHIFT." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_SECONDSHIFT;
	}
	else if( std_iequal( arg, ".THIRDSHIFT." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_THIRDSHIFT;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWorkCalendarTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
