#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class HexaUnitVisual;
class UITexture;
namespace UnityEngine { class Texture; }
class HexaUISkipResult;
class UISprite;
class UILabel;
class MXButton;
class UICampaign;
class UIType;

#define HEXAUI_ONCLICKEDIT_OFFSET UNITYSDK_OFFSET(0x2296300)
#define HEXAUI_ONCLICKCHANGEUNIT_OFFSET UNITYSDK_OFFSET(0x2296BB0)
#define HEXAUI_CLOSESELECTUI_OFFSET UNITYSDK_OFFSET(0x2296360)
#define HEXAUI_SETISDEPLOYED_OFFSET UNITYSDK_OFFSET(0x2296C50)
#define HEXAUI_REFRESHSKIPMARKSTATE_OFFSET UNITYSDK_OFFSET(0x2296D40)
#define HEXAUI_SETISBEFOREBATTLE_OFFSET UNITYSDK_OFFSET(0x2296E80)
#define HEXAUI_OPENSELECTUIMASK3_OFFSET UNITYSDK_OFFSET(0x2296E90)
#define HEXAUI_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x2296FD0)
#define HEXAUI_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x2297030)
#define HEXAUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x22971B0)
#define HEXAUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22971C0)
#define HEXAUI_CLOSESQUADSELECT_OFFSET UNITYSDK_OFFSET(0x2296BF0)
#define HEXAUI_OPENSELECTUIMASK1_OFFSET UNITYSDK_OFFSET(0x2297310)
#define HEXAUI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2297390)
#define HEXAUI_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2298110)
#define HEXAUI_ONCLICKPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x2298120)
#define HEXAUI_SET_OFFSET UNITYSDK_OFFSET(0x22971D0)
#define HEXAUI_OPENSELECTUIMASK2_OFFSET UNITYSDK_OFFSET(0x22984F0)
#define HEXAUI_REFRESHSTARTMARKSTATE_OFFSET UNITYSDK_OFFSET(0x2296C60)
#define HEXAUI_OPENSQUADSELECT_OFFSET UNITYSDK_OFFSET(0x2296F10)
#define HEXAUI_ONCLICKWITHDRAW_OFFSET UNITYSDK_OFFSET(0x2298560)

	inline static constexpr unsigned int HexaUI_TypeDefinitionIndex = 4719;

	class HexaUI : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* center; // 0x18
		HexaUnitVisual* unit; // 0x20
		UITexture* TagImage; // 0x28
		::UnityEngine::GameObject* StartMarkOn; // 0x30
		::UnityEngine::GameObject* StartMarkOnArrow; // 0x38
		::UnityEngine::GameObject* StartMarkOff; // 0x40
		::UnityEngine::Texture* StartSprite; // 0x48
		::UnityEngine::Texture* StorySprite; // 0x50
		::UnityEngine::GameObject* Using; // 0x58
		::UnityEngine::GameObject* Boss; // 0x60
		::UnityEngine::GameObject* Rank; // 0x68
		::Il2CppArray<::System::Object*>* RankIcon; // 0x70
		::UnityEngine::GameObject* Skip; // 0x78
		::UnityEngine::GameObject* NoSkip; // 0x80
		HexaUISkipResult* SkipResult; // 0x88
		::UnityEngine::GameObject* BossAITypeBG; // 0x90
		::UnityEngine::GameObject* RankAITypeBG; // 0x98
		UISprite* SquadSelectIcon; // 0xA0
		UISprite* BossAIType; // 0xA8
		UISprite* RankAIType; // 0xB0
		::UnityEngine::GameObject* SelectUI; // 0xB8
		::UnityEngine::GameObject* Cost; // 0xC0
		UILabel* CostLabel; // 0xC8
		MXButton* WithdrawButton; // 0xD0
		MXButton* EditButton; // 0xD8
		MXButton* PositionChange; // 0xE0
		MXButton* SelectButton; // 0xE8
		MXButton* ChangeUnitButton; // 0xF0
		MXButton* InfoButton; // 0xF8
		::UnityEngine::GameObject* Mask1; // 0x100
		::UnityEngine::GameObject* Mask2; // 0x108
		::UnityEngine::GameObject* Mask3; // 0x110
		::System::Action* ChangeUnitAction; // 0x118
		::System::Boolean isStart; // 0x120
		::System::Boolean isDeployed; // 0x121
		::System::Boolean isBeforeBattle; // 0x122
		::System::Boolean isBoss; // 0x123
		UICampaign* uiCampaign; // 0x128

		::System::Void OnClickEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_ONCLICKEDIT_OFFSET))(nullptr);
		}

		::System::Void OnClickChangeUnit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_ONCLICKCHANGEUNIT_OFFSET))(nullptr);
		}

		::System::Void CloseSelectUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_CLOSESELECTUI_OFFSET))(nullptr);
		}

		::System::Void SetIsDeployed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_SETISDEPLOYED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSkipMarkState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_REFRESHSKIPMARKSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsBeforeBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_SETISBEFOREBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSelectUIMask3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_OPENSELECTUIMASK3_OFFSET))(nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_ONCLICKSELECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CloseSquadSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_CLOSESQUADSELECT_OFFSET))(nullptr);
		}

		::System::Void OpenSelectUIMask1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_OPENSELECTUIMASK1_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::GameObject* arg, UIType* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, UIType*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClickPositionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_ONCLICKPOSITIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_SET_OFFSET))(nullptr);
		}

		::System::Void OpenSelectUIMask2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_OPENSELECTUIMASK2_OFFSET))(nullptr);
		}

		::System::Void RefreshStartMarkState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_REFRESHSTARTMARKSTATE_OFFSET))(nullptr);
		}

		::System::Void OpenSquadSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_OPENSQUADSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickWithdraw()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUI_ONCLICKWITHDRAW_OFFSET))(nullptr);
		}

	};

