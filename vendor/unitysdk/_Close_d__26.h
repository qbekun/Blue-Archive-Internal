#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_RestDump; }

#define <CLOSE>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E13DA0)
#define <CLOSE>D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E14990)

	inline static constexpr unsigned int <Close>d__26_TypeDefinitionIndex = 20804;

	class <Close>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_RestDump* __4__this; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLOSE>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CLOSE>D__26_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

