#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYSHIELDSTRIKERS_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD9F60)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYSHIELDSTRIKERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA010)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYSHIELDSTRIKERS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DDA080)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_ApplyShieldStrikers_TypeDefinitionIndex = 20634;

	class CCGGameState_ApplyShieldStrikers : public Il2CppObject
	{
	public:
		Il2CppObject* _targets; // 0x18
		::MX::MinigameCCG::CCGSkillContext* _context; // 0x20
		::System::Int32 _shield; // 0x28

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYSHIELDSTRIKERS_ONSTATEENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillContext* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYSHIELDSTRIKERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYSHIELDSTRIKERS_ONSTATE_OFFSET))(nullptr);
		}

	};
}

