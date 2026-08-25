#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_SCHEMALOCATION_OFFSET UNITYSDK_OFFSET(0x98E6010)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_SCHEMALOCATION_OFFSET UNITYSDK_OFFSET(0x98E6020)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_SCHEMA_OFFSET UNITYSDK_OFFSET(0x98E6030)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_SCHEMA_OFFSET UNITYSDK_OFFSET(0x98E6040)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x98E6050)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x98E6060)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x98E6070)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x98E6080)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6090)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E60A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E60B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_COMPOSITOR_OFFSET UNITYSDK_OFFSET(0x98E60C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_COMPOSITOR_OFFSET UNITYSDK_OFFSET(0x98E60D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E60E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaExternal_TypeDefinitionIndex = 28150;

	class XmlSchemaExternal : public Il2CppObject
	{
	public:
		::System::String* location; // 0x38
		::System::Uri* baseUri; // 0x40
		::System::Xml::Schema::XmlSchema* schema; // 0x48
		::System::String* id; // 0x50
		::Il2CppArray<::System::Object*>* moreAttributes; // 0x58
		::System::Xml::Schema::Compositor* compositor; // 0x60

		::System::String* get_SchemaLocation()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_SCHEMALOCATION_OFFSET))(nullptr);
		}

		::System::Void set_SchemaLocation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_SCHEMALOCATION_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchema* get_Schema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_SCHEMA_OFFSET))(nullptr);
		}

		::System::Void set_Schema(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_SCHEMA_OFFSET))(arg, nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Uri* get_BaseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Void set_BaseUri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_BASEURI_OFFSET))(arg, nullptr);
		}

		::System::String* get_IdAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_IDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_IdAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_IDATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SETUNHANDLEDATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::Compositor* get_Compositor()
		{
			return (return (::System::Xml::Schema::Compositor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_GET_COMPOSITOR_OFFSET))(nullptr);
		}

		::System::Void set_Compositor(::System::Xml::Schema::Compositor* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::Compositor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_SET_COMPOSITOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXTERNAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

