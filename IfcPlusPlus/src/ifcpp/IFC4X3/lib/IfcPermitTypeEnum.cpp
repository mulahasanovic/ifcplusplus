/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcPermitTypeEnum.h"

// TYPE IfcPermitTypeEnum = ENUMERATION OF	(ACCESS	,BUILDING	,WORK	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcPermitTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCPERMITTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACCESS:	stream << ".ACCESS."; break;
		case ENUM_BUILDING:	stream << ".BUILDING."; break;
		case ENUM_WORK:	stream << ".WORK."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcPermitTypeEnum> IFC4X3::IfcPermitTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcPermitTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPermitTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcPermitTypeEnum>(); }
	shared_ptr<IfcPermitTypeEnum> type_object( new IfcPermitTypeEnum() );
	if( std_iequal( arg, ".ACCESS." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_ACCESS;
	}
	else if( std_iequal( arg, ".BUILDING." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_BUILDING;
	}
	else if( std_iequal( arg, ".WORK." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_WORK;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
