#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239CE0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239D30)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239D50)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239D70)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeFormatException_TypeDefinitionIndex = 24848;

	class CustomAttributeFormatException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

