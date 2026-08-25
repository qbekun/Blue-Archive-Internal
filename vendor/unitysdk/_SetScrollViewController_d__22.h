#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_RestDump; }

#define <SETSCROLLVIEWCONTROLLER>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E12C50)
#define <SETSCROLLVIEWCONTROLLER>D__22_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E138C0)

	inline static constexpr unsigned int <SetScrollViewController>d__22_TypeDefinitionIndex = 20801;

	class <SetScrollViewController>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_RestDump* __4__this; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLVIEWCONTROLLER>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETSCROLLVIEWCONTROLLER>D__22_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

