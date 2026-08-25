#pragma once
#include "unitysdk.h"

#define <<ENDGAME>G__TRANSITIONAFTERWIN|4>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E97060)
#define <<ENDGAME>G__TRANSITIONAFTERWIN|4>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E97620)

	inline static constexpr unsigned int <<EndGame>g__TransitionAfterWin|4>d_TypeDefinitionIndex = 21202;

	class <<EndGame>g__TransitionAfterWin|4>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		<>c__DisplayClass22_2* __4__this; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENDGAME>G__TRANSITIONAFTERWIN|4>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<ENDGAME>G__TRANSITIONAFTERWIN|4>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

