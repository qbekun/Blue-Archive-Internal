#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDERINTERNALCOMPILEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90924D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDERINTERNALCOMPILEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9085550)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDERINTERNALCOMPILEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9092520)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int RuntimeBinderInternalCompilerException_TypeDefinitionIndex = 34447;

	class RuntimeBinderInternalCompilerException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDERINTERNALCOMPILEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDERINTERNALCOMPILEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDERINTERNALCOMPILEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

