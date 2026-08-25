#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98E60F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x98E6100)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_GET_ISFIXED_OFFSET UNITYSDK_OFFSET(0x98E6110)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_ISFIXED_OFFSET UNITYSDK_OFFSET(0x98E6120)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_GET_FACETTYPE_OFFSET UNITYSDK_OFFSET(0x98E61B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_FACETTYPE_OFFSET UNITYSDK_OFFSET(0x98E61C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E61D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaFacet_TypeDefinitionIndex = 28152;

	class XmlSchemaFacet : public Il2CppObject
	{
	public:
		::System::String* value; // 0x50
		::System::Boolean isFixed; // 0x58
		::System::Xml::Schema::FacetType* facetType; // 0x5C

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsFixed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_GET_ISFIXED_OFFSET))(nullptr);
		}

		::System::Void set_IsFixed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_ISFIXED_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::FacetType* get_FacetType()
		{
			return (return (::System::Xml::Schema::FacetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_GET_FACETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_FacetType(::System::Xml::Schema::FacetType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::FacetType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_SET_FACETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAFACET_.CTOR_OFFSET))(nullptr);
		}

	};
}

