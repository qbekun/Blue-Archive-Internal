#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class EntityCollectionInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerInputRef; }
namespace MX::MinigameCCG { class CCGDamageFlag; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETCHARACTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FED0)
#define MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETCHARACTERS_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2FEE0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int DamageToTargetCharacters_TypeDefinitionIndex = 21000;

	class DamageToTargetCharacters : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::EntityCollectionInputRef* targetVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerInputRef* damageAmountVar; // 0x18
		::MX::MinigameCCG::CCGDamageFlag* damageFlag; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETCHARACTERS_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_DAMAGETOTARGETCHARACTERS_ONSTATE_OFFSET))(arg, nullptr);
		}

	};
}

