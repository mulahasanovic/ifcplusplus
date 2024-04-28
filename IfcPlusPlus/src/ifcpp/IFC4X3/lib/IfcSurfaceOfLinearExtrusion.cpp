/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcDirection.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceOfLinearExtrusion.h"

// ENTITY IfcSurfaceOfLinearExtrusion 
IFC4X3::IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion( int tag ) { m_tag = tag; }
void IFC4X3::IfcSurfaceOfLinearExtrusion::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSURFACEOFLINEAREXTRUSION" << "(";
	if( m_SweptCurve ) { stream << "#" << m_SweptCurve->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_ExtrudedDirection ) { stream << "#" << m_ExtrudedDirection->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Depth ) { m_Depth->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcSurfaceOfLinearExtrusion::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSurfaceOfLinearExtrusion::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_SweptCurve, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_Position, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readEntityReference( args[2], m_ExtrudedDirection, map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Depth = IfcLengthMeasure::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcSurfaceOfLinearExtrusion, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSurfaceOfLinearExtrusion::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSweptSurface::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ExtrudedDirection", m_ExtrudedDirection ) );
	vec_attributes.emplace_back( std::make_pair( "Depth", m_Depth ) );
}
void IFC4X3::IfcSurfaceOfLinearExtrusion::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSweptSurface::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSurfaceOfLinearExtrusion::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSweptSurface::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSurfaceOfLinearExtrusion::unlinkFromInverseCounterparts()
{
	IfcSweptSurface::unlinkFromInverseCounterparts();
}
