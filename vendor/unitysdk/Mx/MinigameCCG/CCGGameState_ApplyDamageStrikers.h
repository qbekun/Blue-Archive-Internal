#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGDamageFlag; }

#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD71E0)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD7870)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DD7920)
#define MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD79D0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_ApplyDamageStrikers_TypeDefinitionIndex = 20630;

	class CCGGameState_ApplyDamageStrikers : public Il2CppObject
	{
	public:
		Il2CppObject* _targets; // 0x18
		::MX::MinigameCCG::CCGSkillContext* _context; // 0x20
		::System::Int32 _damage; // 0x28
		::MX::MinigameCCG::CCGDamageFlag* _damageFlag; // 0x2C
		Il2CppObject* _killed; // 0x30

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_ONSTATEENTER_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSkillContext* arg, Il2CppObject* arg, ::System::Int32 arg, ::MX::MinigameCCG::CCGDamageFlag* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, Il2CppObject*, ::System::Int32, ::MX::MinigameCCG::CCGDamageFlag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_APPLYDAMAGESTRIKERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

