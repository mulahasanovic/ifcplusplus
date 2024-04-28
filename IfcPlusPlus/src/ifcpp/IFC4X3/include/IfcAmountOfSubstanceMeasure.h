/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcMeasureValue.h"

namespace IFC4X3
{
	// TYPE IfcAmountOfSubstanceMeasure = REAL;
	class IFCQUERY_EXPORT IfcAmountOfSubstanceMeasure : public IfcMeasureValue
	{
	public:
		IfcAmountOfSubstanceMeasure() = default;
		IfcAmountOfSubstanceMeasure( double value );
		virtual uint32_t classID() const { return 360377573; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcAmountOfSubstanceMeasure> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		double m_value;
	};
}
