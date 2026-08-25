#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x98E0210)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_GET_MARKUP_OFFSET UNITYSDK_OFFSET(0x98E0220)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_SET_MARKUP_OFFSET UNITYSDK_OFFSET(0x98E0230)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E0240)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAppInfo_TypeDefinitionIndex = 28128;

	class XmlSchemaAppInfo : public Il2CppObject
	{
	public:
		::System::String* source; // 0x38
		::Il2CppArray<::System::Object*>* markup; // 0x40

		::System::Void set_Source(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_SET_SOURCE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Markup()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_GET_MARKUP_OFFSET))(nullptr);
		}

		::System::Void set_Markup(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_SET_MARKUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAAPPINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

