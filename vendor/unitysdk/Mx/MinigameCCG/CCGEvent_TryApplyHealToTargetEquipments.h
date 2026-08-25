#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_TRYAPPLYHEALTOTARGETEQUIPMENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCD20)
#define MX_MINIGAMECCG_CCGEVENT_TRYAPPLYHEALTOTARGETEQUIPMENTS_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1DCCD70)
#define MX_MINIGAMECCG_CCGEVENT_TRYAPPLYHEALTOTARGETEQUIPMENTS_GET_TARGETEQUIPMENTCARDS_OFFSET UNITYSDK_OFFSET(0x1DCCD80)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_TryApplyHealToTargetEquipments_TypeDefinitionIndex = 20543;

	class CCGEvent_TryApplyHealToTargetEquipments : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEntity* _Source_k__BackingField; // 0x10
		Il2CppObject* _TargetEquipmentCards_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_TRYAPPLYHEALTOTARGETEQUIPMENTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Source()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_TRYAPPLYHEALTOTARGETEQUIPMENTS_GET_SOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* get_TargetEquipmentCards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_TRYAPPLYHEALTOTARGETEQUIPMENTS_GET_TARGETEQUIPMENTCARDS_OFFSET))(nullptr);
		}

	};
}

