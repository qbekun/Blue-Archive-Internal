#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_ReplaceCard; }
namespace MX::MinigameCCG::UI { class UICardGame_ReplaceCard_CardElement; }
namespace UnityEngine { class Animation; }

#define <DIRECTING>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E1E5C0)
#define <DIRECTING>D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E1F320)

	inline static constexpr unsigned int <Directing>d__28_TypeDefinitionIndex = 20840;

	class <Directing>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_ReplaceCard* __4__this; // 0x38
		::MX::MinigameCCG::UI::UICardGame_ReplaceCard_CardElement* _oldCharacter_5__2; // 0x40
		::UnityEngine::Animation* _oldCharacterAnim_5__3; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DIRECTING>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DIRECTING>D__28_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

