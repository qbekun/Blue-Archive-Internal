#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_WAITORTIMERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E5810)
#define SYSTEM_THREADING_WAITORTIMERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x93E5920)

namespace System::Threading
{
	inline static constexpr unsigned int WaitOrTimerCallback_TypeDefinitionIndex = 24105;

	class WaitOrTimerCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITORTIMERCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_WAITORTIMERCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

