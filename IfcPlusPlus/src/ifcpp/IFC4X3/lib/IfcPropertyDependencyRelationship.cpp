/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcProperty.h"
#include "ifcpp/IFC4X3/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcPropertyDependencyRelationship 
IFC4X3::IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship( int tag ) { m_tag = tag; }
void IFC4X3::IfcPropertyDependencyRelationship::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCPROPERTYDEPENDENCYRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DependingProperty ) { stream << "#" << m_DependingProperty->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_DependantProperty ) { stream << "#" << m_DependantProperty->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Expression ) { m_Expression->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcPropertyDependencyRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcPropertyDependencyRelationship::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readEntityReference( args[2], m_DependingProperty, map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){readEntityReference( args[3], m_DependantProperty, map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_Expression = IfcText::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args != 5 ){ errorStream << "Wrong parameter count for entity IfcPropertyDependencyRelationship, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcPropertyDependencyRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "DependingProperty", m_DependingProperty ) );
	vec_attributes.emplace_back( std::make_pair( "DependantProperty", m_DependantProperty ) );
	vec_attributes.emplace_back( std::make_pair( "Expression", m_Expression ) );
}
void IFC4X3::IfcPropertyDependencyRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcPropertyDependencyRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcPropertyDependencyRelationship> ptr_self = dynamic_pointer_cast<IfcPropertyDependencyRelationship>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcPropertyDependencyRelationship::setInverseCounterparts: type mismatch" ); }
	if( m_DependantProperty )
	{
		m_DependantProperty->m_PropertyDependsOn_inverse.emplace_back( ptr_self );
	}
	if( m_DependingProperty )
	{
		m_DependingProperty->m_PropertyForDependance_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcPropertyDependencyRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
	if( m_DependantProperty )
	{
		std::vector<weak_ptr<IfcPropertyDependencyRelationship> >& PropertyDependsOn_inverse = m_DependantProperty->m_PropertyDependsOn_inverse;
		for( auto it_PropertyDependsOn_inverse = PropertyDependsOn_inverse.begin(); it_PropertyDependsOn_inverse != PropertyDependsOn_inverse.end(); )
		{
			weak_ptr<IfcPropertyDependencyRelationship> self_candidate_weak = *it_PropertyDependsOn_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_PropertyDependsOn_inverse;
				continue;
			}
			shared_ptr<IfcPropertyDependencyRelationship> self_candidate( *it_PropertyDependsOn_inverse );
			if( self_candidate.get() == this )
			{
				it_PropertyDependsOn_inverse= PropertyDependsOn_inverse.erase( it_PropertyDependsOn_inverse );
			}
			else
			{
				++it_PropertyDependsOn_inverse;
			}
		}
	}
	if( m_DependingProperty )
	{
		std::vector<weak_ptr<IfcPropertyDependencyRelationship> >& PropertyForDependance_inverse = m_DependingProperty->m_PropertyForDependance_inverse;
		for( auto it_PropertyForDependance_inverse = PropertyForDependance_inverse.begin(); it_PropertyForDependance_inverse != PropertyForDependance_inverse.end(); )
		{
			weak_ptr<IfcPropertyDependencyRelationship> self_candidate_weak = *it_PropertyForDependance_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_PropertyForDependance_inverse;
				continue;
			}
			shared_ptr<IfcPropertyDependencyRelationship> self_candidate( *it_PropertyForDependance_inverse );
			if( self_candidate.get() == this )
			{
				it_PropertyForDependance_inverse= PropertyForDependance_inverse.erase( it_PropertyForDependance_inverse );
			}
			else
			{
				++it_PropertyForDependance_inverse;
			}
		}
	}
}
