#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_HEALTOTARGETEQUIPMENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E32E30)
#define MX_MINIGAMECCG_PROCEDURES_HEALTOTARGETEQUIPMENTS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E32E40)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int HealToTargetEquipments_TypeDefinitionIndex = 21023;

	class HealToTargetEquipments : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* healAmountVar; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_HEALTOTARGETEQUIPMENTS_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_HEALTOTARGETEQUIPMENTS_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

