#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_ID_OFFSET UNITYSDK_OFFSET(0x98DF600)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SET_ID_OFFSET UNITYSDK_OFFSET(0x98DF610)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x98DF620)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98DF630)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98DF640)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98DF650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DF660)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnnotation_TypeDefinitionIndex = 28125;

	class XmlSchemaAnnotation : public Il2CppObject
	{
	public:
		::System::String* id; // 0x38
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x40
		::Il2CppArray<::System::Object*>* moreAttributes; // 0x48

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::String* get_IdAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_GET_IDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_IdAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SET_IDATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_SETUNHANDLEDATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

