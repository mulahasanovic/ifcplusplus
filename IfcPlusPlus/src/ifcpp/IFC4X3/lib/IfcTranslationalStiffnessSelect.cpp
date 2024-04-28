/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcLinearStiffnessMeasure.h"
#include "ifcpp/IFC4X3/include/IfcTranslationalStiffnessSelect.h"

// TYPE IfcTranslationalStiffnessSelect = SELECT	(IfcBoolean	,IfcLinearStiffnessMeasure);
shared_ptr<IFC4X3::IfcTranslationalStiffnessSelect> IFC4X3::IfcTranslationalStiffnessSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcTranslationalStiffnessSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcTranslationalStiffnessSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcTranslationalStiffnessSelect>();
	}
	shared_ptr<IfcTranslationalStiffnessSelect> result_object;
	readSelectType( arg, result_object, map, errorStream, entityIdNotFound );
	return result_object;
}
