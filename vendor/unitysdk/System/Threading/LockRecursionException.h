#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7520)
#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7570)
#define SYSTEM_THREADING_LOCKRECURSIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D75D0)

namespace System::Threading
{
	inline static constexpr unsigned int LockRecursionException_TypeDefinitionIndex = 24039;

	class LockRecursionException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKRECURSIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

