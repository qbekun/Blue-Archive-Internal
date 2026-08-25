#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEquipmentCard; }

#define MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_GET_BEFOREACTIVATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCCD90)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA290)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_GET_AFTERACTIVATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCCDA0)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCDB0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ChangeEquipmentActivationCount_TypeDefinitionIndex = 20544;

	class CCGEvent_ChangeEquipmentActivationCount : public Il2CppObject
	{
	public:
		::System::Int32 _CardEntityId_k__BackingField; // 0x10
		::System::Int32 _BeforeActivationCount_k__BackingField; // 0x14
		::System::Int32 _AfterActivationCount_k__BackingField; // 0x18

		::System::Int32 get_BeforeActivationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_GET_BEFOREACTIVATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGEquipmentCard* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_AfterActivationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_GET_AFTERACTIVATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEEQUIPMENTACTIVATIONCOUNT_GET_CARDENTITYID_OFFSET))(nullptr);
		}

	};
}

