/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcAirTerminalTypeEnum.h"

// TYPE IfcAirTerminalTypeEnum = ENUMERATION OF	(DIFFUSER	,GRILLE	,LOUVRE	,REGISTER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcAirTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCAIRTERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DIFFUSER:	stream << ".DIFFUSER."; break;
		case ENUM_GRILLE:	stream << ".GRILLE."; break;
		case ENUM_LOUVRE:	stream << ".LOUVRE."; break;
		case ENUM_REGISTER:	stream << ".REGISTER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcAirTerminalTypeEnum> IFC4X3::IfcAirTerminalTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcAirTerminalTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcAirTerminalTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcAirTerminalTypeEnum>(); }
	shared_ptr<IfcAirTerminalTypeEnum> type_object( new IfcAirTerminalTypeEnum() );
	if( std_iequal( arg, ".DIFFUSER." ) )
	{
		type_object->m_enum = IfcAirTerminalTypeEnum::ENUM_DIFFUSER;
	}
	else if( std_iequal( arg, ".GRILLE." ) )
	{
		type_object->m_enum = IfcAirTerminalTypeEnum::ENUM_GRILLE;
	}
	else if( std_iequal( arg, ".LOUVRE." ) )
	{
		type_object->m_enum = IfcAirTerminalTypeEnum::ENUM_LOUVRE;
	}
	else if( std_iequal( arg, ".REGISTER." ) )
	{
		type_object->m_enum = IfcAirTerminalTypeEnum::ENUM_REGISTER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAirTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAirTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
