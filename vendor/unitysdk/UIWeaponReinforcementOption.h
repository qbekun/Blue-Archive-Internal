#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UISprite;
class UITexture;
class UILabel;
class MXButton;
namespace UnityEngine { class Vector3; }
class UIWeaponReinforcementOption;
class UIPanel;
namespace UnityEngine { class BoxCollider; }
class WeaponObject;

#define UIWEAPONREINFORCEMENTOPTION_RESETDETAILBUTTON_OFFSET UNITYSDK_OFFSET(0x22D02E0)
#define UIWEAPONREINFORCEMENTOPTION_SETFOURSTARSTATINFO_OFFSET UNITYSDK_OFFSET(0x22D0370)
#define UIWEAPONREINFORCEMENTOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D0A50)
#define UIWEAPONREINFORCEMENTOPTION_SETSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x22D0A60)
#define UIWEAPONREINFORCEMENTOPTION_GET_FROMBUTTONORIDEPTH_OFFSET UNITYSDK_OFFSET(0x22D1540)
#define UIWEAPONREINFORCEMENTOPTION_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0x22D1550)
#define UIWEAPONREINFORCEMENTOPTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x22D18C0)
#define UIWEAPONREINFORCEMENTOPTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x22D1BE0)
#define UIWEAPONREINFORCEMENTOPTION_SETTERRAINADAPTATION_OFFSET UNITYSDK_OFFSET(0x22D1C40)
#define UIWEAPONREINFORCEMENTOPTION_SET_FROMBUTTONORIDEPTH_OFFSET UNITYSDK_OFFSET(0x22D2780)
#define UIWEAPONREINFORCEMENTOPTION_SETUPDATENOTICEINFO_OFFSET UNITYSDK_OFFSET(0x22D2790)
#define UIWEAPONREINFORCEMENTOPTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x22CA090)

	inline static constexpr unsigned int UIWeaponReinforcementOption_TypeDefinitionIndex = 4829;

	class UIWeaponReinforcementOption : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* lockCover; // 0x18
		UISprite* iconBg; // 0x20
		UITexture* icon; // 0x28
		UISprite* reinforcedIconBg; // 0x30
		UILabel* type; // 0x38
		MXButton* closeButton; // 0x40
		MXButton* detailButton; // 0x48
		::UnityEngine::Vector3* detailArrowPosition; // 0x50
		UIWeaponReinforcementOption* detailInfo; // 0x60
		::Il2CppArray<::System::Object*>* fromReinforcementOptionButtons; // 0x68
		UILabel* optionName; // 0x70
		UILabel* optionChangeDescription; // 0x78
		UILabel* optionDesc; // 0x80
		UILabel* cost; // 0x88
		UILabel* level; // 0x90
		UISprite* terrainIcon; // 0x98
		UISprite* emojiIcon; // 0xA0
		UITexture* statIcon; // 0xA8
		::UnityEngine::GameObject* Arrow; // 0xB0
		UIPanel* panel; // 0xB8
		::UnityEngine::BoxCollider* boxCollider; // 0xC0
		WeaponObject* weapon; // 0xC8
		::System::Int32 starGrade; // 0xD0
		::System::Boolean isShowMaxStatInfo; // 0xD4
		::System::Int32 _fromButtonOriDepth_k__BackingField; // 0xD8
		::System::Int32 TerrainAdaptationIndex; // 0x0
		::System::Int32 FourStarEnhanceRateIndex; // 0x0

		::System::Void ResetDetailButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_RESETDETAILBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetFourStarStatInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_SETFOURSTARSTATINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSkillSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_SETSKILLSLOT_OFFSET))(nullptr);
		}

		::System::Int32 get_fromButtonOriDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_GET_FROMBUTTONORIDEPTH_OFFSET))(nullptr);
		}

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_CLOSE_OFFSET))(nullptr);
		}

		::System::Void SetTerrainAdaptation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_SETTERRAINADAPTATION_OFFSET))(nullptr);
		}

		::System::Void set_fromButtonOriDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_SET_FROMBUTTONORIDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetUpdateNoticeInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_SETUPDATENOTICEINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(WeaponObject* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(WeaponObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWEAPONREINFORCEMENTOPTION_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

