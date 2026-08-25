#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x98E1DC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x98E1DD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x98E1DE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x98E1DF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_HASMIXEDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E1E00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E1E10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaComplexContent_TypeDefinitionIndex = 28137;

	class XmlSchemaComplexContent : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaContent* content; // 0x50
		::System::Boolean isMixed; // 0x58
		::System::Boolean hasMixedAttribute; // 0x59

		::System::Boolean get_IsMixed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_ISMIXED_OFFSET))(nullptr);
		}

		::System::Void set_IsMixed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_SET_ISMIXED_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaContent* get_Content()
		{
			return (return (::System::Xml::Schema::XmlSchemaContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void set_Content(::System::Xml::Schema::XmlSchemaContent* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasMixedAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_GET_HASMIXEDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXCONTENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

