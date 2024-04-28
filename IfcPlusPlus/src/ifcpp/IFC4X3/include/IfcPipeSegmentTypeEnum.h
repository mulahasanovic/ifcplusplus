/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcPipeSegmentTypeEnum = ENUMERATION OF	(CULVERT	,FLEXIBLESEGMENT	,GUTTER	,RIGIDSEGMENT	,SPOOL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcPipeSegmentTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcPipeSegmentTypeEnumEnum
		{
			ENUM_CULVERT,
			ENUM_FLEXIBLESEGMENT,
			ENUM_GUTTER,
			ENUM_RIGIDSEGMENT,
			ENUM_SPOOL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcPipeSegmentTypeEnum() = default;
		IfcPipeSegmentTypeEnum( IfcPipeSegmentTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2293803863; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcPipeSegmentTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcPipeSegmentTypeEnumEnum m_enum;
	};
}
