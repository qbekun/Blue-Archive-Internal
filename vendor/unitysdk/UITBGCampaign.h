#pragma once
#include "unitysdk.h"

namespace Lean::Touch { class LeanCameraZoom; }
class HexaCameraTranslate;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UILabel;
class MXButton;
class UITBGDiceInfo;
class UITBGEchelonInfo;
class UITBGPlayerHealth;
class UITBGItemInfo;
class TBGTileMapVisual;
namespace UnityEngine { class Camera; }
class TBGTileVisual;
namespace UnityEngine { class Vector3; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::Data { class BGMPlayInfo; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::NetworkProtocol { class MiniGameTableBoardEncounterInputResponse; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class HexaUI_TBG_UnitInfo;

#define UITBGCAMPAIGN_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB475E0)
#define UITBGCAMPAIGN_ONPARCELRESULT_OFFSET UNITYSDK_OFFSET(0xB47670)
#define UITBGCAMPAIGN_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xB477D0)
#define UITBGCAMPAIGN_ONCLICKMAPBUTTON_OFFSET UNITYSDK_OFFSET(0xB48950)
#define UITBGCAMPAIGN_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0xB48A00)
#define UITBGCAMPAIGN__ONREWARDOPTION_G__ONCANCEL|55_4_OFFSET UNITYSDK_OFFSET(0xB48A60)
#define UITBGCAMPAIGN_SHOWPLAYGUIDE_OFFSET UNITYSDK_OFFSET(0xB48AB0)
#define UITBGCAMPAIGN_INITCAMERA_OFFSET UNITYSDK_OFFSET(0xB48BE0)
#define UITBGCAMPAIGN__ONREWARDOPTION_G__ONUSE|55_3_OFFSET UNITYSDK_OFFSET(0xB48E70)
#define UITBGCAMPAIGN_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB48F20)
#define UITBGCAMPAIGN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB49280)
#define UITBGCAMPAIGN_CLEARTHEMA_OFFSET UNITYSDK_OFFSET(0xB495A0)
#define UITBGCAMPAIGN_UITBGCAMPAIGNOPENER_OFFSET UNITYSDK_OFFSET(0xB49940)
#define UITBGCAMPAIGN_OPENINGAME_OFFSET UNITYSDK_OFFSET(0xB48620)
#define UITBGCAMPAIGN__ONREWARDOPTION_G__ONRECEIVE|55_2_OFFSET UNITYSDK_OFFSET(0xB49CB0)
#define UITBGCAMPAIGN_PLAYDICE_OFFSET UNITYSDK_OFFSET(0xB49D60)
#define UITBGCAMPAIGN_REENTERTBGCAMPAIGN_OFFSET UNITYSDK_OFFSET(0xB498D0)
#define UITBGCAMPAIGN_ONCLICKPLAYGUIDEBUTTON_OFFSET UNITYSDK_OFFSET(0xB49FD0)
#define UITBGCAMPAIGN_HANDLEUICLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB49FE0)
#define UITBGCAMPAIGN_UPDATE_OFFSET UNITYSDK_OFFSET(0xB4A0A0)
#define UITBGCAMPAIGN_ONSWEEP_OFFSET UNITYSDK_OFFSET(0xB4AD10)
#define UITBGCAMPAIGN_ONRESURRECT_OFFSET UNITYSDK_OFFSET(0xB4AE50)
#define UITBGCAMPAIGN_ONREWARDOPTION_OFFSET UNITYSDK_OFFSET(0xB483A0)
#define UITBGCAMPAIGN_MOVECHARACTER_OFFSET UNITYSDK_OFFSET(0xB4B070)
#define UITBGCAMPAIGN_.CTOR_OFFSET UNITYSDK_OFFSET(0xB4B4B0)
#define UITBGCAMPAIGN_ONCLICKSWEEPBUTTON_OFFSET UNITYSDK_OFFSET(0xB4B530)
#define UITBGCAMPAIGN_MAKEHEXAUI_OFFSET UNITYSDK_OFFSET(0xB4B690)
#define UITBGCAMPAIGN_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0xB48360)
#define UITBGCAMPAIGN_AWAKE_OFFSET UNITYSDK_OFFSET(0xB4B780)
#define UITBGCAMPAIGN_.CCTOR_OFFSET UNITYSDK_OFFSET(0xB4BC00)
#define UITBGCAMPAIGN___N__0_OFFSET UNITYSDK_OFFSET(0xB4BC40)
#define UITBGCAMPAIGN_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB4BC50)
#define UITBGCAMPAIGN_ONCANINPUT_OFFSET UNITYSDK_OFFSET(0xB4C030)
#define UITBGCAMPAIGN_ONUSEITEM_OFFSET UNITYSDK_OFFSET(0xB4C0D0)
#define UITBGCAMPAIGN_REFRESHMATERIALAMOUNTLABEL_OFFSET UNITYSDK_OFFSET(0xB48780)
#define UITBGCAMPAIGN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB4C360)
#define UITBGCAMPAIGN_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xB4CDA0)
#define UITBGCAMPAIGN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB4CEB0)

	inline static constexpr unsigned int UITBGCampaign_TypeDefinitionIndex = 8370;

	class UITBGCampaign : public Il2CppObject
	{
	public:
		::System::Boolean IsLeanCameraActive; // 0x0
		::Lean::Touch::LeanCameraZoom* leanCameraZoom; // 0xD8
		HexaCameraTranslate* HexaCameraTranslate; // 0xE0
		::UnityEngine::GameObject* MapRoot; // 0xE8
		::UnityEngine::Transform* TagRoot; // 0xF0
		::UnityEngine::GameObject* SweepButtonObject; // 0xF8
		UILabel* MaterialAmountLabel; // 0x100
		UILabel* RoundLabel; // 0x108
		UILabel* MapNameLabel; // 0x110
		MXButton* BackButton; // 0x118
		MXButton* InfoButton; // 0x120
		MXButton* MapButton; // 0x128
		MXButton* SweepButton; // 0x130
		UITBGDiceInfo* DiceInfo; // 0x138
		UITBGEchelonInfo* EchelonInfo; // 0x140
		UITBGPlayerHealth* PlayerHealth; // 0x148
		UITBGItemInfo* ItemInfo; // 0x150
		TBGTileMapVisual* Map; // 0x158
		::UnityEngine::Camera* mainCamera; // 0x160
		TBGTileVisual* pressedTile; // 0x168
		::UnityEngine::Vector3* pressedCameraPos; // 0x170
		::System::Boolean mapMove; // 0x17C
		::System::Boolean pressed; // 0x17D
		::System::Boolean positionChangeEnterCurFrame; // 0x17E
		Il2CppObject* hexaUIs; // 0x180
		::System::Action* onClosePlayGuide; // 0x188
		::System::Boolean isThemaMove; // 0x1

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONPARCELRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshState(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_REFRESHSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickMapButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONCLICKMAPBUTTON_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void _OnRewardOption_g__OnCancel|55_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN__ONREWARDOPTION_G__ONCANCEL|55_4_OFFSET))(nullptr);
		}

		::System::Void ShowPlayGuide(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_SHOWPLAYGUIDE_OFFSET))(arg, nullptr);
		}

		::System::Void InitCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_INITCAMERA_OFFSET))(nullptr);
		}

		::System::Void _OnRewardOption_g__OnUse|55_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN__ONREWARDOPTION_G__ONUSE|55_3_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ClearThema()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_CLEARTHEMA_OFFSET))(nullptr);
		}

		::System::Void UITBGCampaignOpener(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_UITBGCAMPAIGNOPENER_OFFSET))(arg, nullptr);
		}

		::System::Void OpenIngame(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_OPENINGAME_OFFSET))(arg, nullptr);
		}

		::System::Void _OnRewardOption_g__OnReceive|55_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN__ONREWARDOPTION_G__ONRECEIVE|55_2_OFFSET))(nullptr);
		}

		::System::Void PlayDice(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_PLAYDICE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ReEnterTBGCampaign(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_REENTERTBGCAMPAIGN_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlayGuideButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONCLICKPLAYGUIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleUICloseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_HANDLEUICLOSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnSweep(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONSWEEP_OFFSET))(arg, nullptr);
		}

		::System::Void OnResurrect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONRESURRECT_OFFSET))(nullptr);
		}

		::System::Void OnRewardOption(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONREWARDOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void MoveCharacter(Il2CppObject* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_MOVECHARACTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickSweepButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONCLICKSWEEPBUTTON_OFFSET))(nullptr);
		}

		HexaUI_TBG_UnitInfo* MakeHexaUI(HexaUI_TBG_UnitInfo* arg)
		{
			return ((HexaUI_TBG_UnitInfo*(*)(HexaUI_TBG_UnitInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_MAKEHEXAUI_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_REFRESHMAP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnCanInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONCANINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnUseItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONUSEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMaterialAmountLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_REFRESHMATERIALAMOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGCAMPAIGN_ONENABLE_OFFSET))(nullptr);
		}

	};

