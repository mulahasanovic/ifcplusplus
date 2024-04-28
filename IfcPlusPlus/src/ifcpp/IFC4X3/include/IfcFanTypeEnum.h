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
	// TYPE IfcFanTypeEnum = ENUMERATION OF	(CENTRIFUGALAIRFOIL	,CENTRIFUGALBACKWARDINCLINEDCURVED	,CENTRIFUGALFORWARDCURVED	,CENTRIFUGALRADIAL	,PROPELLORAXIAL	,TUBEAXIAL	,VANEAXIAL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcFanTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcFanTypeEnumEnum
		{
			ENUM_CENTRIFUGALAIRFOIL,
			ENUM_CENTRIFUGALBACKWARDINCLINEDCURVED,
			ENUM_CENTRIFUGALFORWARDCURVED,
			ENUM_CENTRIFUGALRADIAL,
			ENUM_PROPELLORAXIAL,
			ENUM_TUBEAXIAL,
			ENUM_VANEAXIAL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcFanTypeEnum() = default;
		IfcFanTypeEnum( IfcFanTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3754373064; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcFanTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcFanTypeEnumEnum m_enum;
	};
}
