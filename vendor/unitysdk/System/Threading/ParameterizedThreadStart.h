#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7660)
#define SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x93D7770)

namespace System::Threading
{
	inline static constexpr unsigned int ParameterizedThreadStart_TypeDefinitionIndex = 24041;

	class ParameterizedThreadStart : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PARAMETERIZEDTHREADSTART_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

