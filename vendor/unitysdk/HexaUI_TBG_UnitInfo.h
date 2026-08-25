#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UIGrid;
class UITBGCampaign;

#define HEXAUI_TBG_UNITINFO_SETPLAYERUI_OFFSET UNITYSDK_OFFSET(0xB37050)
#define HEXAUI_TBG_UNITINFO_SETHIDDEN_OFFSET UNITYSDK_OFFSET(0xB370E0)
#define HEXAUI_TBG_UNITINFO_SETHEART_OFFSET UNITYSDK_OFFSET(0xB37110)
#define HEXAUI_TBG_UNITINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB37220)
#define HEXAUI_TBG_UNITINFO_SETCOST_OFFSET UNITYSDK_OFFSET(0xB37410)
#define HEXAUI_TBG_UNITINFO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB374D0)
#define HEXAUI_TBG_UNITINFO_SET_OFFSET UNITYSDK_OFFSET(0xB372D0)
#define HEXAUI_TBG_UNITINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xB37080)
#define HEXAUI_TBG_UNITINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB374E0)

	inline static constexpr unsigned int HexaUI_TBG_UnitInfo_TypeDefinitionIndex = 8315;

	class HexaUI_TBG_UnitInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CostObject; // 0x18
		UILabel* CostLabel; // 0x20
		::UnityEngine::GameObject* CostFreeObject; // 0x28
		::UnityEngine::GameObject* HiddenObject; // 0x30
		::UnityEngine::GameObject* PlayerObject; // 0x38
		::UnityEngine::GameObject* HealthObject; // 0x40
		UIGrid* HealthGrid; // 0x48
		Il2CppObject* Hearts; // 0x50
		::UnityEngine::GameObject* center; // 0x58
		UITBGCampaign* uiTBGCampaign; // 0x60

		::System::Void SetPlayerUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_SETPLAYERUI_OFFSET))(nullptr);
		}

		::System::Void SetHidden()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_SETHIDDEN_OFFSET))(nullptr);
		}

		::System::Void SetHeart(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_SETHEART_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::UnityEngine::GameObject* arg, UITBGCampaign* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, UITBGCampaign*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCost(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_SETCOST_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_SET_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_TBG_UNITINFO_.CTOR_OFFSET))(nullptr);
		}

	};

