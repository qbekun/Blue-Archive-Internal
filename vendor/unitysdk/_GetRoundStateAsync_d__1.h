#pragma once
#include "unitysdk.h"

class <>c__DisplayClass1_0;

#define <GETROUNDSTATEASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24909E0)
#define <GETROUNDSTATEASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2491360)

	inline static constexpr unsigned int <GetRoundStateAsync>d__1_TypeDefinitionIndex = 5728;

	class <GetRoundStateAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Int64 eventContentId; // 0x30
		<>c__DisplayClass1_0* __8__1; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETROUNDSTATEASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETROUNDSTATEASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

