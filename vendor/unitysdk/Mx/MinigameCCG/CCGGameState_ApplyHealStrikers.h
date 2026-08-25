#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYHEALSTRIKERS_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD95E0)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYHEALSTRIKERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9690)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYHEALSTRIKERS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD9700)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_ApplyHealStrikers_TypeDefinitionIndex = 20632;

	class CCGGameState_ApplyHealStrikers : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillContext* _context; // 0x18
		Il2CppObject* _targets; // 0x20
		::System::Int32 _heal; // 0x28

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYHEALSTRIKERS_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillContext* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYHEALSTRIKERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYHEALSTRIKERS_ONSTATE_OFFSET))(nullptr);
		}

	};
}

