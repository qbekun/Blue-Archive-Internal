#pragma once
#include "unitysdk.h"

#define XMLNODEIDENTETY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9796D20)
#define XMLNODEIDENTETY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9796D70)
#define XMLNODEIDENTETY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9796DA0)

	inline static constexpr unsigned int XmlNodeIdentety_TypeDefinitionIndex = 32312;

	class XmlNodeIdentety : public Il2CppObject
	{
	public:
		::System::String* LocalName; // 0x10
		::System::String* NamespaceURI; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDENTETY_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDENTETY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDENTETY_EQUALS_OFFSET))(arg, nullptr);
		}

	};

