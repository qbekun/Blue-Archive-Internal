#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEUSECHARACTERACTIVESKILLTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28910)
#define MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEUSECHARACTERACTIVESKILLTRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E28920)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int PassiveUseCharacterActiveSkillTrigger_TypeDefinitionIndex = 20900;

	class PassiveUseCharacterActiveSkillTrigger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* usedCharacterEntityVar; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEUSECHARACTERACTIVESKILLTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, Il2CppObject* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, Il2CppObject*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_PASSIVEUSECHARACTERACTIVESKILLTRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

