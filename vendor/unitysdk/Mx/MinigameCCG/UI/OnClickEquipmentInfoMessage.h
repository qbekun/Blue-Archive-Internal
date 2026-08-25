#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::MinigameCCG { class CCGEquipmentCard; }

#define MX_MINIGAMECCG_UI_ONCLICKEQUIPMENTINFOMESSAGE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1DF57D0)
#define MX_MINIGAMECCG_UI_ONCLICKEQUIPMENTINFOMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF57E0)
#define MX_MINIGAMECCG_UI_ONCLICKEQUIPMENTINFOMESSAGE_GET_EQUIPMENTCARD_OFFSET UNITYSDK_OFFSET(0x1DF5830)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int OnClickEquipmentInfoMessage_TypeDefinitionIndex = 20716;

	class OnClickEquipmentInfoMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::UnityEngine::Transform* _Target_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEquipmentCard* _EquipmentCard_k__BackingField; // 0x20

		::UnityEngine::Transform* get_Target()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKEQUIPMENTINFOMESSAGE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGEquipmentCard* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKEQUIPMENTINFOMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGEquipmentCard* get_EquipmentCard()
		{
			return (return (::MX::MinigameCCG::CCGEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKEQUIPMENTINFOMESSAGE_GET_EQUIPMENTCARD_OFFSET))(nullptr);
		}

	};
}

