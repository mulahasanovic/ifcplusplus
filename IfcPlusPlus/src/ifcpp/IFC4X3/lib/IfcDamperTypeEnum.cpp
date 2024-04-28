/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDamperTypeEnum.h"

// TYPE IfcDamperTypeEnum = ENUMERATION OF	(BACKDRAFTDAMPER	,BALANCINGDAMPER	,BLASTDAMPER	,CONTROLDAMPER	,FIREDAMPER	,FIRESMOKEDAMPER	,FUMEHOODEXHAUST	,GRAVITYDAMPER	,GRAVITYRELIEFDAMPER	,RELIEFDAMPER	,SMOKEDAMPER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcDamperTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDAMPERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BACKDRAFTDAMPER:	stream << ".BACKDRAFTDAMPER."; break;
		case ENUM_BALANCINGDAMPER:	stream << ".BALANCINGDAMPER."; break;
		case ENUM_BLASTDAMPER:	stream << ".BLASTDAMPER."; break;
		case ENUM_CONTROLDAMPER:	stream << ".CONTROLDAMPER."; break;
		case ENUM_FIREDAMPER:	stream << ".FIREDAMPER."; break;
		case ENUM_FIRESMOKEDAMPER:	stream << ".FIRESMOKEDAMPER."; break;
		case ENUM_FUMEHOODEXHAUST:	stream << ".FUMEHOODEXHAUST."; break;
		case ENUM_GRAVITYDAMPER:	stream << ".GRAVITYDAMPER."; break;
		case ENUM_GRAVITYRELIEFDAMPER:	stream << ".GRAVITYRELIEFDAMPER."; break;
		case ENUM_RELIEFDAMPER:	stream << ".RELIEFDAMPER."; break;
		case ENUM_SMOKEDAMPER:	stream << ".SMOKEDAMPER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDamperTypeEnum> IFC4X3::IfcDamperTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcDamperTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDamperTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDamperTypeEnum>(); }
	shared_ptr<IfcDamperTypeEnum> type_object( new IfcDamperTypeEnum() );
	if( std_iequal( arg, ".BACKDRAFTDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_BACKDRAFTDAMPER;
	}
	else if( std_iequal( arg, ".BALANCINGDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_BALANCINGDAMPER;
	}
	else if( std_iequal( arg, ".BLASTDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_BLASTDAMPER;
	}
	else if( std_iequal( arg, ".CONTROLDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_CONTROLDAMPER;
	}
	else if( std_iequal( arg, ".FIREDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_FIREDAMPER;
	}
	else if( std_iequal( arg, ".FIRESMOKEDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_FIRESMOKEDAMPER;
	}
	else if( std_iequal( arg, ".FUMEHOODEXHAUST." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_FUMEHOODEXHAUST;
	}
	else if( std_iequal( arg, ".GRAVITYDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_GRAVITYDAMPER;
	}
	else if( std_iequal( arg, ".GRAVITYRELIEFDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_GRAVITYRELIEFDAMPER;
	}
	else if( std_iequal( arg, ".RELIEFDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_RELIEFDAMPER;
	}
	else if( std_iequal( arg, ".SMOKEDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_SMOKEDAMPER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
