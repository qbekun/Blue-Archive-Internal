#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90903B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90856E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9090400)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int RuntimeBinderException_TypeDefinitionIndex = 34442;

	class RuntimeBinderException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

