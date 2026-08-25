#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_Map; }

#define <RESETSCROLL>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E08510)
#define <RESETSCROLL>D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E091B0)

	inline static constexpr unsigned int <ResetScroll>d__29_TypeDefinitionIndex = 20769;

	class <ResetScroll>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_Map* __4__this; // 0x38
		::System::Int64 _startNodeId_5__2; // 0x40
		Il2CppObject* _columns_5__3; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESETSCROLL>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RESETSCROLL>D__29_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

