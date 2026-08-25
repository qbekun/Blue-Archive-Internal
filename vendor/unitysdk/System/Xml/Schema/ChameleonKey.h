#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_CHAMELEONKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0A570)
#define SYSTEM_XML_SCHEMA_CHAMELEONKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A0A600)
#define SYSTEM_XML_SCHEMA_CHAMELEONKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9A0A680)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ChameleonKey_TypeDefinitionIndex = 27958;

	class ChameleonKey : public Il2CppObject
	{
	public:
		::System::String* targetNS; // 0x10
		::System::Uri* chameleonLocation; // 0x18
		::System::Xml::Schema::XmlSchema* originalSchema; // 0x20
		::System::Int32 hashCode; // 0x28

		::System::Void .ctor(::System::String* str, ::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHAMELEONKEY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHAMELEONKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHAMELEONKEY_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

