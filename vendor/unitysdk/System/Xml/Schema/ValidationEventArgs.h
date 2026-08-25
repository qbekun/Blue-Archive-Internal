#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CE0D0)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x98CE140)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_SEVERITY_OFFSET UNITYSDK_OFFSET(0x98CE1B0)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x98CE1C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationEventArgs_TypeDefinitionIndex = 28103;

	class ValidationEventArgs : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaException* ex; // 0x10
		::System::Xml::Schema::XmlSeverityType* severity; // 0x18

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaException* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaException* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSeverityType* get_Severity()
		{
			return (return (::System::Xml::Schema::XmlSeverityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_SEVERITY_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaException* get_Exception()
		{
			return (return (::System::Xml::Schema::XmlSchemaException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTARGS_GET_EXCEPTION_OFFSET))(nullptr);
		}

	};
}

