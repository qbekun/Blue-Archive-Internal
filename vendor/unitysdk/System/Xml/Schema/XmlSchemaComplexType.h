#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98E21E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CREATEANYTYPE_OFFSET UNITYSDK_OFFSET(0x98E2580)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E2980)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPE_OFFSET UNITYSDK_OFFSET(0x98E2A90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_UNTYPEDANYTYPE_OFFSET UNITYSDK_OFFSET(0x98E2AE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPECONTENTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x98E2A00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x98E2B30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x98E2B40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0x98E2B70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0x98E2B80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x98E2B90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x98E2BA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTMODEL_OFFSET UNITYSDK_OFFSET(0x98E2BD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_CONTENTMODEL_OFFSET UNITYSDK_OFFSET(0x98E2BE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x98E2C00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_PARTICLE_OFFSET UNITYSDK_OFFSET(0x98E2C10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E2C30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E2CB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E2CC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x98E2CE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTTYPEPARTICLE_OFFSET UNITYSDK_OFFSET(0x98E2CF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_BLOCKRESOLVED_OFFSET UNITYSDK_OFFSET(0x98E2D00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTEUSES_OFFSET UNITYSDK_OFFSET(0x98E2D10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTEWILDCARD_OFFSET UNITYSDK_OFFSET(0x98E2D90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_LOCALELEMENTS_OFFSET UNITYSDK_OFFSET(0x98E2DA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETCONTENTTYPEPARTICLE_OFFSET UNITYSDK_OFFSET(0x98E2E20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETBLOCKRESOLVED_OFFSET UNITYSDK_OFFSET(0x98E2E40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETATTRIBUTEWILDCARD_OFFSET UNITYSDK_OFFSET(0x98E2E50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_HASWILDCARD_OFFSET UNITYSDK_OFFSET(0x98E2E70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E2EA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CONTAINSIDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E2EC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x98E3300)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x98DE2F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLEARCOMPILEDSTATE_OFFSET UNITYSDK_OFFSET(0x98E3890)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E0AD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEGROUPBASEPARTICLES_OFFSET UNITYSDK_OFFSET(0x98E39D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEPARTICLE_OFFSET UNITYSDK_OFFSET(0x98E35D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GETRESOLVEDELEMENTFORM_OFFSET UNITYSDK_OFFSET(0x98E3C30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASPARTICLEREF_OFFSET UNITYSDK_OFFSET(0x98E3310)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASATTRIBUTEQNAMEREF_OFFSET UNITYSDK_OFFSET(0x98E0990)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaComplexType_TypeDefinitionIndex = 28140;

	class XmlSchemaComplexType : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaDerivationMethod* block; // 0x98
		::System::Xml::Schema::XmlSchemaContentModel* contentModel; // 0xA0
		::System::Xml::Schema::XmlSchemaParticle* particle; // 0xA8
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0xB0
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0xB8
		::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle; // 0xC0
		::System::Xml::Schema::XmlSchemaDerivationMethod* blockResolved; // 0xC8
		::System::Xml::Schema::XmlSchemaObjectTable* localElements; // 0xD0
		::System::Xml::Schema::XmlSchemaObjectTable* attributeUses; // 0xD8
		::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard; // 0xE0
		::System::Xml::Schema::XmlSchemaComplexType* anyTypeLax; // 0x0
		::System::Xml::Schema::XmlSchemaComplexType* anyTypeSkip; // 0x8
		::System::Xml::Schema::XmlSchemaComplexType* untypedAnyType; // 0x10
		::System::Byte pvFlags; // 0xE8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(::System::Xml::Schema::XmlSchemaContentProcessing* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaComplexType*(*)(::System::Xml::Schema::XmlSchemaContentProcessing*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CREATEANYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaComplexType* get_AnyType()
		{
			return (return (::System::Xml::Schema::XmlSchemaComplexType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaComplexType* get_UntypedAnyType()
		{
			return (return (::System::Xml::Schema::XmlSchemaComplexType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_UNTYPEDANYTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator()
		{
			return (return (::System::Xml::Schema::ContentValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPECONTENTVALIDATOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAbstract()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISABSTRACT_OFFSET))(nullptr);
		}

		::System::Void set_IsAbstract(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISABSTRACT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_Block()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void set_Block(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMixed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISMIXED_OFFSET))(nullptr);
		}

		::System::Void set_IsMixed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISMIXED_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentModel* get_ContentModel()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTMODEL_OFFSET))(nullptr);
		}

		::System::Void set_ContentModel(::System::Xml::Schema::XmlSchemaContentModel* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentModel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_CONTENTMODEL_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaParticle* get_Particle()
		{
			return (return (::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_PARTICLE_OFFSET))(nullptr);
		}

		::System::Void set_Particle(::System::Xml::Schema::XmlSchemaParticle* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_PARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ANYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaContentType* get_ContentType()
		{
			return (return (::System::Xml::Schema::XmlSchemaContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle()
		{
			return (return (::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTTYPEPARTICLE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_BlockResolved()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_BLOCKRESOLVED_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTEUSES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AttributeWildcard()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTEWILDCARD_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_LocalElements()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_LOCALELEMENTS_OFFSET))(nullptr);
		}

		::System::Void SetContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETCONTENTTYPEPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBlockResolved(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETBLOCKRESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETATTRIBUTEWILDCARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasWildCard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_HASWILDCARD_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsIdAttribute(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CONTAINSIDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone(::System::Xml::Schema::XmlSchema* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCompiledState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLEARCOMPILEDSTATE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* CloneAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* CloneGroupBaseParticles(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::Schema::XmlSchema* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEGROUPBASEPARTICLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaParticle* CloneParticle(::System::Xml::Schema::XmlSchemaParticle* arg, ::System::Xml::Schema::XmlSchema* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaParticle*(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEPARTICLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaForm* GetResolvedElementForm(::System::Xml::Schema::XmlSchema* arg, ::System::Xml::Schema::XmlSchemaElement* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaForm*(*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GETRESOLVEDELEMENTFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasParticleRef(::System::Xml::Schema::XmlSchemaParticle* arg, ::System::Xml::Schema::XmlSchema* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASPARTICLEREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasAttributeQNameRef(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASATTRIBUTEQNAMEREF_OFFSET))(arg, nullptr);
		}

	};
}

