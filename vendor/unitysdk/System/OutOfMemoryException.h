#pragma once
#include "../unitysdk.h"

#define SYSTEM_OUTOFMEMORYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9388280)
#define SYSTEM_OUTOFMEMORYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9388320)
#define SYSTEM_OUTOFMEMORYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9388380)

namespace System
{
	inline static constexpr unsigned int OutOfMemoryException_TypeDefinitionIndex = 23898;

	class OutOfMemoryException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OUTOFMEMORYEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OUTOFMEMORYEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OUTOFMEMORYEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

