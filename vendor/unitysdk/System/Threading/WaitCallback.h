#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_WAITCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E2F80)
#define SYSTEM_THREADING_WAITCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x93E5800)

namespace System::Threading
{
	inline static constexpr unsigned int WaitCallback_TypeDefinitionIndex = 24104;

	class WaitCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

