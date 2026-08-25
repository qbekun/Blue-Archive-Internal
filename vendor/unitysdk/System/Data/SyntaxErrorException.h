#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_SYNTAXERROREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x975F2B0)
#define SYSTEM_DATA_SYNTAXERROREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x975F2D0)
#define SYSTEM_DATA_SYNTAXERROREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x975F2E0)

namespace System::Data
{
	inline static constexpr unsigned int SyntaxErrorException_TypeDefinitionIndex = 32260;

	class SyntaxErrorException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SYNTAXERROREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SYNTAXERROREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SYNTAXERROREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

