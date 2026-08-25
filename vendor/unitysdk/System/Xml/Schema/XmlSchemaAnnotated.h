#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_ID_OFFSET UNITYSDK_OFFSET(0x98DF550)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_ID_OFFSET UNITYSDK_OFFSET(0x98DF560)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x98DF570)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x98DF580)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_UNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98DF590)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_UNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98DF5A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98DF5B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98DF5C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98DF5D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x98DF5E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DF5F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnnotated_TypeDefinitionIndex = 28124;

	class XmlSchemaAnnotated : public Il2CppObject
	{
	public:
		::System::String* id; // 0x38
		::System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x40
		::Il2CppArray<::System::Object*>* moreAttributes; // 0x48

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnnotation* get_Annotation()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnnotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_ANNOTATION_OFFSET))(nullptr);
		}

		::System::Void set_Annotation(::System::Xml::Schema::XmlSchemaAnnotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnnotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_ANNOTATION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_UnhandledAttributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_UNHANDLEDATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Void set_UnhandledAttributes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_UNHANDLEDATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::String* get_IdAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_IDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_IdAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_IDATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SETUNHANDLEDATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnnotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_ADDANNOTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_.CTOR_OFFSET))(nullptr);
		}

	};
}

