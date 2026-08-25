#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETEQUIPMENTS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E30230)
#define MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETEQUIPMENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E302F0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int DamageToTargetEquipments_TypeDefinitionIndex = 21003;

	class DamageToTargetEquipments : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* damageAmountVar; // 0x18

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETEQUIPMENTS_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETEQUIPMENTS_.CTOR_OFFSET))(nullptr);
		}

	};
}

