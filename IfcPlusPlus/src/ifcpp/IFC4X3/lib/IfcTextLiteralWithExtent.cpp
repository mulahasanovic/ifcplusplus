/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4X3/include/IfcBoxAlignment.h"
#include "ifcpp/IFC4X3/include/IfcPlanarExtent.h"
#include "ifcpp/IFC4X3/include/IfcPresentableText.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcTextLiteralWithExtent.h"
#include "ifcpp/IFC4X3/include/IfcTextPath.h"

// ENTITY IfcTextLiteralWithExtent 
IFC4X3::IfcTextLiteralWithExtent::IfcTextLiteralWithExtent( int tag ) { m_tag = tag; }
void IFC4X3::IfcTextLiteralWithExtent::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCTEXTLITERALWITHEXTENT" << "(";
	if( m_Literal ) { m_Literal->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Placement ) { m_Placement->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_Path ) { m_Path->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Extent ) { stream << "#" << m_Extent->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_BoxAlignment ) { m_BoxAlignment->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcTextLiteralWithExtent::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTextLiteralWithExtent::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Literal = IfcPresentableText::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Placement = IfcAxis2Placement::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Path = IfcTextPath::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){readEntityReference( args[3], m_Extent, map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_BoxAlignment = IfcBoxAlignment::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args != 5 ){ errorStream << "Wrong parameter count for entity IfcTextLiteralWithExtent, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcTextLiteralWithExtent::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcTextLiteral::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Extent", m_Extent ) );
	vec_attributes.emplace_back( std::make_pair( "BoxAlignment", m_BoxAlignment ) );
}
void IFC4X3::IfcTextLiteralWithExtent::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcTextLiteral::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTextLiteralWithExtent::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTextLiteral::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcTextLiteralWithExtent::unlinkFromInverseCounterparts()
{
	IfcTextLiteral::unlinkFromInverseCounterparts();
}
