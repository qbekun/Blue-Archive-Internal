#pragma once
#include "../unitysdk.h"

#define SYSTEM_EXECUTIONENGINEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933CFE0)
#define SYSTEM_EXECUTIONENGINEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D030)
#define SYSTEM_EXECUTIONENGINEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D050)

namespace System
{
	inline static constexpr unsigned int ExecutionEngineException_TypeDefinitionIndex = 23737;

	class ExecutionEngineException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXECUTIONENGINEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXECUTIONENGINEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXECUTIONENGINEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

