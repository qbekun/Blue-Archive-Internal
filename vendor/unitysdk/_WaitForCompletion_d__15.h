#pragma once
#include "unitysdk.h"

#define <WAITFORCOMPLETION>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <WAITFORCOMPLETION>D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <WaitForCompletion>d__15_TypeDefinitionIndex = 29800;

	class <WaitForCompletion>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		Il2CppObject* __4__this; // 0x0
		Il2CppObject* __u__1; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOMPLETION>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOMPLETION>D__15_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

