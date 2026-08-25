#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_FINDEMPTYSTRIKERSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BBA0)
#define MX_MINIGAMECCG_PROCEDURES_FINDEMPTYSTRIKERSLOT_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2BBB0)
#define MX_MINIGAMECCG_PROCEDURES_FINDEMPTYSTRIKERSLOT_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2BC70)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int FindEmptyStrikerSlot_TypeDefinitionIndex = 20963;

	class FindEmptyStrikerSlot : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* emptySlotIndexVar; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FINDEMPTYSTRIKERSLOT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FINDEMPTYSTRIKERSLOT_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_FINDEMPTYSTRIKERSLOT_ONPREPARE_OFFSET))(arg, nullptr);
		}

	};
}

