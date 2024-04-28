/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSurfaceStyleElementSelect.h"
#include "IfcExternalReference.h"
namespace IFC4X3
{
	//ENTITY
	class IFCQUERY_EXPORT IfcExternallyDefinedSurfaceStyle : virtual public IfcSurfaceStyleElementSelect, public IfcExternalReference
	{
	public:
		IfcExternallyDefinedSurfaceStyle() = default;
		IfcExternallyDefinedSurfaceStyle( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1040185647; }

		// IfcExternalReference -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcURIReference>									m_Location;					//optional
		//  shared_ptr<IfcIdentifier>									m_Identification;			//optional
		//  shared_ptr<IfcLabel>										m_Name;						//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_ExternalReferenceForResources_inverse;

		// IfcExternallyDefinedSurfaceStyle -----------------------------------------------------------
	};
}
