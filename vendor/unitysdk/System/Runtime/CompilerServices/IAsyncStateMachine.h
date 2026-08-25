#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IAsyncStateMachine_TypeDefinitionIndex = 24751;

	class IAsyncStateMachine : public Il2CppObject
	{
	public:
		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};
}

