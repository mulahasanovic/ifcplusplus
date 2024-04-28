/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcFlowMeterTypeEnum.h"

// TYPE IfcFlowMeterTypeEnum = ENUMERATION OF	(ENERGYMETER	,GASMETER	,OILMETER	,WATERMETER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcFlowMeterTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCFLOWMETERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ENERGYMETER:	stream << ".ENERGYMETER."; break;
		case ENUM_GASMETER:	stream << ".GASMETER."; break;
		case ENUM_OILMETER:	stream << ".OILMETER."; break;
		case ENUM_WATERMETER:	stream << ".WATERMETER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcFlowMeterTypeEnum> IFC4X3::IfcFlowMeterTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcFlowMeterTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcFlowMeterTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcFlowMeterTypeEnum>(); }
	shared_ptr<IfcFlowMeterTypeEnum> type_object( new IfcFlowMeterTypeEnum() );
	if( std_iequal( arg, ".ENERGYMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_ENERGYMETER;
	}
	else if( std_iequal( arg, ".GASMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_GASMETER;
	}
	else if( std_iequal( arg, ".OILMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_OILMETER;
	}
	else if( std_iequal( arg, ".WATERMETER." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_WATERMETER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFlowMeterTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
