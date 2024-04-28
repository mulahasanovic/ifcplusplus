/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAppliedValueSelect.h"
#include "IfcMetricValueSelect.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcIdentifier;
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcInteger;
	class IFCQUERY_EXPORT IfcReference;
	//ENTITY
	class IFCQUERY_EXPORT IfcReference : virtual public IfcAppliedValueSelect, virtual public IfcMetricValueSelect, public BuildingEntity
	{
	public:
		IfcReference() = default;
		IfcReference( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 5; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2433181523; }

		// IfcReference -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcIdentifier>				m_TypeIdentifier;			//optional
		shared_ptr<IfcIdentifier>				m_AttributeIdentifier;		//optional
		shared_ptr<IfcLabel>					m_InstanceName;				//optional
		std::vector<shared_ptr<IfcInteger> >	m_ListPositions;			//optional
		shared_ptr<IfcReference>				m_InnerReference;			//optional
	};
}
