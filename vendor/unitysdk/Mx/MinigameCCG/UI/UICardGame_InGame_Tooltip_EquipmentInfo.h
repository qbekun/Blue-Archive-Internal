#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::MinigameCCG { class CCGEquipmentCard; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1DF6140)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1DF63D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF5E10)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF66D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6840)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETARROWPOSITION_OFFSET UNITYSDK_OFFSET(0x1DF65E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETTARGETPARENTBACK_OFFSET UNITYSDK_OFFSET(0x1DF6200)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_EquipmentInfo_TypeDefinitionIndex = 20718;

	class UICardGame_InGame_Tooltip_EquipmentInfo : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x18
		UILabel* stackCount; // 0x20
		UILabel* descriptionLabel; // 0x28
		MXButton* closeBtn; // 0x30
		::UnityEngine::Transform* arrowIcon; // 0x38
		::UnityEngine::Transform* targetRoot; // 0x40
		::UnityEngine::Transform* target; // 0x48
		::UnityEngine::Transform* returnTargetParent; // 0x50
		::System::Int32 siblingIndex; // 0x58
		::System::Boolean isActiveBlackPanel; // 0x5C

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETTARGET_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::CCGEquipmentCard* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetArrowPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETARROWPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetTargetParentBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENTINFO_SETTARGETPARENTBACK_OFFSET))(nullptr);
		}

	};
}

