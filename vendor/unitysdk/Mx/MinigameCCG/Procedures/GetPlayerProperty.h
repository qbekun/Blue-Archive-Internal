#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::ParameterRef { class PlayerInputRef; }
namespace MX::MinigameCCG::ParameterRef { class IntegerOutputRef; }
namespace MX::MinigameCCG::ParameterRef { class EntityOutputRef; }
namespace MX::MinigameCCG { class CCGSkillContext; }
namespace MX::MinigameCCG { class CCGProcedureContext; }

#define MX_MINIGAMECCG_PROCEDURES_GETPLAYERPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D310)
#define MX_MINIGAMECCG_PROCEDURES_GETPLAYERPROPERTY_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1E2D320)
#define MX_MINIGAMECCG_PROCEDURES_GETPLAYERPROPERTY_ONPREPARE_OFFSET UNITYSDK_OFFSET(0x1E2D3E0)

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int GetPlayerProperty_TypeDefinitionIndex = 20977;

	class GetPlayerProperty : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ParameterRef::PlayerInputRef* playerVar; // 0x10
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* curCostVar; // 0x18
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* curHandCountVar; // 0x20
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* curDeckCountVar; // 0x28
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* curGraveCountVar; // 0x30
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* strikerSlotCountVar; // 0x38
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* specialSlotCountVar; // 0x40
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* emptyStrikerSlotCountVar; // 0x48
		::MX::MinigameCCG::ParameterRef::IntegerOutputRef* emptySpecialSlotCountVar; // 0x50
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* frontStrikerVar; // 0x58
		::MX::MinigameCCG::ParameterRef::EntityOutputRef* environmentEntityVar; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETPLAYERPROPERTY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* OnState(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETPLAYERPROPERTY_ONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrepare(::MX::MinigameCCG::CCGProcedureContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGProcedureContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_PROCEDURES_GETPLAYERPROPERTY_ONPREPARE_OFFSET))(arg, nullptr);
		}

	};
}

