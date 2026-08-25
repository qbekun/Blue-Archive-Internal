#pragma once
#include "../unitysdk.h"

#define SYSTEM_DIVIDEBYZEROEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933B350)
#define SYSTEM_DIVIDEBYZEROEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933B3A0)
#define SYSTEM_DIVIDEBYZEROEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933B3C0)

namespace System
{
	inline static constexpr unsigned int DivideByZeroException_TypeDefinitionIndex = 23730;

	class DivideByZeroException : public <GetEnumerator>d__19
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIVIDEBYZEROEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIVIDEBYZEROEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIVIDEBYZEROEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

