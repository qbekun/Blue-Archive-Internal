#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_ReplaceCard; }

#define <SETDATA>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E1D440)
#define <SETDATA>D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E1E4C0)

	inline static constexpr unsigned int <SetData>d__21_TypeDefinitionIndex = 20838;

	class <SetData>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_ReplaceCard* __4__this; // 0x38
		<>c__DisplayClass21_0* __8__1; // 0x40
		Awaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETDATA>D__21_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

