#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9203F90)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9203FB0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9203FC0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9203FD0)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9204060)
#define SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9204070)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int StreamingContext_TypeDefinitionIndex = 24611;

	class StreamingContext : public Il2CppObject
	{
	public:
		::System::Object* m_additionalContext; // 0x10
		::System::Runtime::Serialization::StreamingContextStates* m_state; // 0x18

		::System::Void .ctor(::System::Runtime::Serialization::StreamingContextStates* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContextStates*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::StreamingContextStates* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContextStates*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Context()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::StreamingContextStates* get_State()
		{
			return (return (::System::Runtime::Serialization::StreamingContextStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_GET_STATE_OFFSET))(nullptr);
		}

	};
}

