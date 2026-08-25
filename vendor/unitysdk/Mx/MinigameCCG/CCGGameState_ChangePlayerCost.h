#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERCOST_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DE2710)
#define MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERCOST_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DE27D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5300)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_ChangePlayerCost_TypeDefinitionIndex = 20665;

	class CCGGameState_ChangePlayerCost : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x18
		::System::Int32 _afterCost; // 0x20
		::System::Int32 _change; // 0x24

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERCOST_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERCOST_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_CHANGEPLAYERCOST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

