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
	// TYPE IfcCostScheduleTypeEnum = ENUMERATION OF	(BUDGET	,COSTPLAN	,ESTIMATE	,PRICEDBILLOFQUANTITIES	,SCHEDULEOFRATES	,TENDER	,UNPRICEDBILLOFQUANTITIES	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcCostScheduleTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcCostScheduleTypeEnumEnum
		{
			ENUM_BUDGET,
			ENUM_COSTPLAN,
			ENUM_ESTIMATE,
			ENUM_PRICEDBILLOFQUANTITIES,
			ENUM_SCHEDULEOFRATES,
			ENUM_TENDER,
			ENUM_UNPRICEDBILLOFQUANTITIES,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcCostScheduleTypeEnum() = default;
		IfcCostScheduleTypeEnum( IfcCostScheduleTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 672692152; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcCostScheduleTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcCostScheduleTypeEnumEnum m_enum;
	};
}
