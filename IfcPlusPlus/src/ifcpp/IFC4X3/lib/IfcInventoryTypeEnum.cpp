/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcInventoryTypeEnum.h"

// TYPE IfcInventoryTypeEnum = ENUMERATION OF	(ASSETINVENTORY	,FURNITUREINVENTORY	,SPACEINVENTORY	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcInventoryTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCINVENTORYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ASSETINVENTORY:	stream << ".ASSETINVENTORY."; break;
		case ENUM_FURNITUREINVENTORY:	stream << ".FURNITUREINVENTORY."; break;
		case ENUM_SPACEINVENTORY:	stream << ".SPACEINVENTORY."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcInventoryTypeEnum> IFC4X3::IfcInventoryTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcInventoryTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcInventoryTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcInventoryTypeEnum>(); }
	shared_ptr<IfcInventoryTypeEnum> type_object( new IfcInventoryTypeEnum() );
	if( std_iequal( arg, ".ASSETINVENTORY." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_ASSETINVENTORY;
	}
	else if( std_iequal( arg, ".FURNITUREINVENTORY." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_FURNITUREINVENTORY;
	}
	else if( std_iequal( arg, ".SPACEINVENTORY." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_SPACEINVENTORY;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcInventoryTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
