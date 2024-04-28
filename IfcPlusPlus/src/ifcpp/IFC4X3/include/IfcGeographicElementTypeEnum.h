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
	// TYPE IfcGeographicElementTypeEnum = ENUMERATION OF	(SOIL_BORING_POINT	,TERRAIN	,VEGETATION	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcGeographicElementTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcGeographicElementTypeEnumEnum
		{
			ENUM_SOIL_BORING_POINT,
			ENUM_TERRAIN,
			ENUM_VEGETATION,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcGeographicElementTypeEnum() = default;
		IfcGeographicElementTypeEnum( IfcGeographicElementTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 460077198; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcGeographicElementTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcGeographicElementTypeEnumEnum m_enum;
	};
}
