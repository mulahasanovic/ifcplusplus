/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcRotationalFrequencyMeasure.h"

// TYPE IfcRotationalFrequencyMeasure = REAL;
IFC4X3::IfcRotationalFrequencyMeasure::IfcRotationalFrequencyMeasure( double value ) { m_value = value; }
void IFC4X3::IfcRotationalFrequencyMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCROTATIONALFREQUENCYMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRotationalFrequencyMeasure> IFC4X3::IfcRotationalFrequencyMeasure::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcRotationalFrequencyMeasure>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRotationalFrequencyMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRotationalFrequencyMeasure>(); }
	shared_ptr<IfcRotationalFrequencyMeasure> type_object( new IfcRotationalFrequencyMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
