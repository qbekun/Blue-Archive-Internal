#pragma once
#include "../unitysdk.h"

#define SYSTEM_ENTRYPOINTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933CDA0)
#define SYSTEM_ENTRYPOINTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933CDF0)
#define SYSTEM_ENTRYPOINTNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933CE10)

namespace System
{
	inline static constexpr unsigned int EntryPointNotFoundException_TypeDefinitionIndex = 23733;

	class EntryPointNotFoundException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENTRYPOINTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENTRYPOINTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ENTRYPOINTNOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

