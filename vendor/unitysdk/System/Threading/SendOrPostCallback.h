#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SENDORPOSTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D77E0)
#define SYSTEM_THREADING_SENDORPOSTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x93D78F0)

namespace System::Threading
{
	inline static constexpr unsigned int SendOrPostCallback_TypeDefinitionIndex = 24043;

	class SendOrPostCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SENDORPOSTCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

