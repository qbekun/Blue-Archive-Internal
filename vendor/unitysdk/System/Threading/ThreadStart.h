#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_THREADSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7990)
#define SYSTEM_THREADING_THREADSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x93D7A50)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadStart_TypeDefinitionIndex = 24046;

	class ThreadStart : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADSTART_INVOKE_OFFSET))(nullptr);
		}

	};
}

