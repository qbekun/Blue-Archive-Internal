#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGSkillContext&; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_EQUIPMENTTRIGGER_TRYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E27740)
#define MX_MINIGAMECCG_SKILLTRIGGERS_EQUIPMENTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E277A0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_EQUIPMENTTRIGGER_GETSKILLPOWER_OFFSET UNITYSDK_OFFSET(0x1E277B0)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int EquipmentTrigger_TypeDefinitionIndex = 20882;

	class EquipmentTrigger : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* entityCandidatesVar; // 0x38
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* entitySelectedVar; // 0x40

		::System::Boolean TryTrigger(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::ICCGSkillTriggerable* arg, ::System::Object* arg, ::MX::MinigameCCG::CCGSkillContext&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::ICCGSkillTriggerable*, ::System::Object*, ::MX::MinigameCCG::CCGSkillContext&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_EQUIPMENTTRIGGER_TRYTRIGGER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_EQUIPMENTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetSkillPower(::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_EQUIPMENTTRIGGER_GETSKILLPOWER_OFFSET))(arg, arg, nullptr);
		}

	};
}

