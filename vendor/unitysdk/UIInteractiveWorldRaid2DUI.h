#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCameraManager;
class MXButton;
namespace UnityEngine { class GameObject; }
class InteractiveWorldRaidZoomInBossInfoRoot;
class InteractiveWorldRaidZoomInBottomBossList;
class UILabel;
namespace UnityEngine { class Animation; }
class BossAppearState;
namespace UnityEngine { class Camera; }
class UIPopup_System_InteractiveWorldRaid;
namespace MX::Data { class WorldRaidSeasonInfo; }
class UIInteractiveWorldRaidBossNode;
namespace MX::Data { class BGMPlayInfo; }
namespace UnityEngine { class Rect; }
class UIWidget;
class InteractiveWorldRaidTask;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIINTERACTIVEWORLDRAID2DUI_ONOPTIONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2609DB0)
#define UIINTERACTIVEWORLDRAID2DUI_ONCLICKBOSSBUTTON_OFFSET UNITYSDK_OFFSET(0x2609EB0)
#define UIINTERACTIVEWORLDRAID2DUI_SETZOOMINBOSSUIROOT_OFFSET UNITYSDK_OFFSET(0x260A390)
#define UIINTERACTIVEWORLDRAID2DUI__ZOOMINBOSSINFOUIATONOPENED_G__SETBUTTONONEFRAMEDELAYED|83_0_OFFSET UNITYSDK_OFFSET(0x260B0A0)
#define UIINTERACTIVEWORLDRAID2DUI_SETOVERVIEWBOSSNAMETAGUI_OFFSET UNITYSDK_OFFSET(0x260B130)
#define UIINTERACTIVEWORLDRAID2DUI_ONCLICKZOOMINRIGHT_OFFSET UNITYSDK_OFFSET(0x260C0F0)
#define UIINTERACTIVEWORLDRAID2DUI_SET_CURRENTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x260A150)
#define UIINTERACTIVEWORLDRAID2DUI_GET_CURRENTBOSSCOUNT_OFFSET UNITYSDK_OFFSET(0x260C2C0)
#define UIINTERACTIVEWORLDRAID2DUI_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x260C300)
#define UIINTERACTIVEWORLDRAID2DUI_ONPRESSOVERVIEWLEFT_OFFSET UNITYSDK_OFFSET(0x260C3A0)
#define UIINTERACTIVEWORLDRAID2DUI_ZOOMINBOSSINFOUIATONOPENED_OFFSET UNITYSDK_OFFSET(0x260C4B0)
#define UIINTERACTIVEWORLDRAID2DUI_ONBACK_OFFSET UNITYSDK_OFFSET(0x260C7F0)
#define UIINTERACTIVEWORLDRAID2DUI_ONCLICKENTERBUTTON_OFFSET UNITYSDK_OFFSET(0x260C850)
#define UIINTERACTIVEWORLDRAID2DUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x260CEC0)
#define UIINTERACTIVEWORLDRAID2DUI_GET_ISSINGLEBOSS_OFFSET UNITYSDK_OFFSET(0x260B060)
#define UIINTERACTIVEWORLDRAID2DUI_ONCLICKZOOMINLEFT_OFFSET UNITYSDK_OFFSET(0x260D030)
#define UIINTERACTIVEWORLDRAID2DUI__UPDATE_B__61_0_OFFSET UNITYSDK_OFFSET(0x260D210)
#define UIINTERACTIVEWORLDRAID2DUI_GET_WORLDRAIDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x260B980)
#define UIINTERACTIVEWORLDRAID2DUI_SELECTBOSSFROMBOSSLABEL_OFFSET UNITYSDK_OFFSET(0x260D2C0)
#define UIINTERACTIVEWORLDRAID2DUI_SETCURRENTIDSFROMCURRENTBOSSNODE_OFFSET UNITYSDK_OFFSET(0x260A2A0)
#define UIINTERACTIVEWORLDRAID2DUI__SETCAMERAMANAGER_B__82_0_OFFSET UNITYSDK_OFFSET(0x260D3E0)
#define UIINTERACTIVEWORLDRAID2DUI__BACKTOOVERVIEW_B__65_0_OFFSET UNITYSDK_OFFSET(0x260D4F0)
#define UIINTERACTIVEWORLDRAID2DUI_GETCURRENTCARRIERBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x260D530)
#define UIINTERACTIVEWORLDRAID2DUI_ONTOLOBBYBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x260D710)
#define UIINTERACTIVEWORLDRAID2DUI_GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0x260D7A0)
#define UIINTERACTIVEWORLDRAID2DUI_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x260D940)
#define UIINTERACTIVEWORLDRAID2DUI__HANDLE3DUIRAYCAST_B__62_0_OFFSET UNITYSDK_OFFSET(0x260D9F0)
#define UIINTERACTIVEWORLDRAID2DUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x260DB00)
#define UIINTERACTIVEWORLDRAID2DUI_GET__IAWORLDRAIDTASK_OFFSET UNITYSDK_OFFSET(0x260A200)
#define UIINTERACTIVEWORLDRAID2DUI_REFRESHMOSTPARTICIPATED_OFFSET UNITYSDK_OFFSET(0x260E4D0)
#define UIINTERACTIVEWORLDRAID2DUI___N__1_OFFSET UNITYSDK_OFFSET(0x260E6A0)
#define UIINTERACTIVEWORLDRAID2DUI_SETCAMERAMANAGER_OFFSET UNITYSDK_OFFSET(0x260E6B0)
#define UIINTERACTIVEWORLDRAID2DUI_UPDATE_OFFSET UNITYSDK_OFFSET(0x260E770)
#define UIINTERACTIVEWORLDRAID2DUI_RESOLVEOVERLAPS_OFFSET UNITYSDK_OFFSET(0x260EDB0)
#define UIINTERACTIVEWORLDRAID2DUI_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x260EE60)
#define UIINTERACTIVEWORLDRAID2DUI_APPLYVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x260EED0)
#define UIINTERACTIVEWORLDRAID2DUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x260EF90)
#define UIINTERACTIVEWORLDRAID2DUI_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x260F0A0)
#define UIINTERACTIVEWORLDRAID2DUI_SETZOOMINBOSSINFOUI_OFFSET UNITYSDK_OFFSET(0x260A430)
#define UIINTERACTIVEWORLDRAID2DUI_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x260F1F0)
#define UIINTERACTIVEWORLDRAID2DUI_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x260F280)
#define UIINTERACTIVEWORLDRAID2DUI_SETSELECTEDBOSSBUTTONON_OFFSET UNITYSDK_OFFSET(0x260A2F0)
#define UIINTERACTIVEWORLDRAID2DUI_GET_CURRENTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x260A0E0)
#define UIINTERACTIVEWORLDRAID2DUI_ONOPENED_OFFSET UNITYSDK_OFFSET(0x260F310)
#define UIINTERACTIVEWORLDRAID2DUI_BACKTOOVERVIEW_OFFSET UNITYSDK_OFFSET(0x260FA00)
#define UIINTERACTIVEWORLDRAID2DUI_ONCLICKINFORMATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x260FAA0)
#define UIINTERACTIVEWORLDRAID2DUI_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x260C350)
#define UIINTERACTIVEWORLDRAID2DUI_ONPRESSOVERVIEWRIGHT_OFFSET UNITYSDK_OFFSET(0x260FAD0)
#define UIINTERACTIVEWORLDRAID2DUI_SETOVERVIEWBOSSNAMETAGPOSITION_OFFSET UNITYSDK_OFFSET(0x260BA10)
#define UIINTERACTIVEWORLDRAID2DUI___N__0_OFFSET UNITYSDK_OFFSET(0x260FBE0)
#define UIINTERACTIVEWORLDRAID2DUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x260FBF0)
#define UIINTERACTIVEWORLDRAID2DUI_HANDLE3DUIRAYCAST_OFFSET UNITYSDK_OFFSET(0x260EC70)
#define UIINTERACTIVEWORLDRAID2DUI_ONCLICKSWITCHPHASEBUTTON_OFFSET UNITYSDK_OFFSET(0x260FE10)

	inline static constexpr unsigned int UIInteractiveWorldRaid2DUI_TypeDefinitionIndex = 6499;

	class UIInteractiveWorldRaid2DUI : public Il2CppObject
	{
	public:
		InteractiveWorldRaidCameraManager* worldRaidCameraManager; // 0xD8
		::Il2CppArray<::System::Object*>* WorldViewBossOverlayUIs; // 0xE0
		MXButton* optionButton; // 0xE8
		MXButton* toLobbyButton; // 0xF0
		MXButton* overViewLeftButton; // 0xF8
		MXButton* overViewRightButton; // 0x100
		MXButton* zoomInLefButton; // 0x108
		MXButton* zoomInRightButton; // 0x110
		MXButton* backToOverviewButton; // 0x118
		MXButton* informationButton; // 0x120
		MXButton* BottomRightBossEnterButton; // 0x128
		MXButton* switchPhaseButton; // 0x130
		::UnityEngine::GameObject* overviewUIRoot; // 0x138
		::UnityEngine::GameObject* zoomInUIRoot; // 0x140
		InteractiveWorldRaidZoomInBossInfoRoot* zoomInBossInfoUI; // 0x148
		InteractiveWorldRaidZoomInBottomBossList* zoomInBottomBossList; // 0x150
		::Il2CppArray<::System::Object*>* overViewBottomDecoByPhase; // 0x158
		::UnityEngine::GameObject* bossAppearCountDownRoot; // 0x160
		UILabel* bossAppearCountDownClockLabel; // 0x168
		::Il2CppArray<::System::Object*>* bossAppearCountDownDecoByPhase; // 0x170
		::UnityEngine::Animation* bossAppearCountDownAppearAnimation; // 0x178
		::System::Boolean _isOverViewButtonPressed; // 0x180
		::System::Single _bossAppearCountdownAnimNormalizedTime; // 0x184
		BossAppearState* _currentAppearState; // 0x188
		Il2CppObject* _artLevelToIndex; // 0x190
		::System::Int32 _currentBossIndex; // 0x198
		::System::Int64 _currentBossGroupId; // 0x1A0
		::System::String* _currentBossGroupName; // 0x1A8
		::System::Int64 _eventContentStageId; // 0x1B0
		::System::Boolean _isBossNotOpenedYet; // 0x1B8
		::System::DateTime* _bossSpawnTime; // 0x1C0
		Il2CppObject* _bossNameLabelWidgets; // 0x1C8
		::System::Int32 lastRemainTimeSec; // 0x1D0
		::System::TimeSpan* lastRemainTimeSpan; // 0x1D8
		::System::Random* randomSecond; // 0x1E0

		::System::Void OnOptionButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONOPTIONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnClickBossButton(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONCLICKBOSSBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetZoomInBossUIRoot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SETZOOMINBOSSUIROOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _ZoomInBossInfoUIAtOnOpened_g__SetButtonOneFrameDelayed|83_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI__ZOOMINBOSSINFOUIATONOPENED_G__SETBUTTONONEFRAMEDELAYED|83_0_OFFSET))(nullptr);
		}

		::System::Void SetOverViewBossNameTagUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SETOVERVIEWBOSSNAMETAGUI_OFFSET))(nullptr);
		}

		::System::Void OnClickZoomInRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONCLICKZOOMINRIGHT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBossIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SET_CURRENTBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentBossCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GET_CURRENTBOSSCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnPressOverViewLeft(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONPRESSOVERVIEWLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void ZoomInBossInfoUIAtOnOpened(InteractiveWorldRaidCameraManager* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(InteractiveWorldRaidCameraManager*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ZOOMINBOSSINFOUIATONOPENED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONCLICKENTERBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSingleBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GET_ISSINGLEBOSS_OFFSET))(nullptr);
		}

		::System::Void OnClickZoomInLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONCLICKZOOMINLEFT_OFFSET))(nullptr);
		}

		::System::Void _Update_b__61_0(UIPopup_System_InteractiveWorldRaid* arg)
		{
			((::System::Void(*)(UIPopup_System_InteractiveWorldRaid*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI__UPDATE_B__61_0_OFFSET))(arg, nullptr);
		}

		::MX::Data::WorldRaidSeasonInfo* get_WorldRaidSeasonInfo()
		{
			return ((::MX::Data::WorldRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GET_WORLDRAIDSEASONINFO_OFFSET))(nullptr);
		}

		::System::Void SelectBossFromBossLabel(::System::Int32 arg, UIInteractiveWorldRaidBossNode* arg2)
		{
			((::System::Void(*)(::System::Int32, UIInteractiveWorldRaidBossNode*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SELECTBOSSFROMBOSSLABEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCurrentIdsFromCurrentBossNode(UIInteractiveWorldRaidBossNode* arg)
		{
			((::System::Void(*)(UIInteractiveWorldRaidBossNode*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SETCURRENTIDSFROMCURRENTBOSSNODE_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCameraManager_b__82_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI__SETCAMERAMANAGER_B__82_0_OFFSET))(nullptr);
		}

		::System::Void _BackToOverview_b__65_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI__BACKTOOVERVIEW_B__65_0_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetCurrentCarrierBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GETCURRENTCARRIERBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnToLobbyButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONTOLOBBYBUTTONCLICK_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* GetScreenRect(UIWidget* arg)
		{
			return ((::UnityEngine::Rect*(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GETSCREENRECT_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void _Handle3DUIRaycast_b__62_0(UIInteractiveWorldRaidBossNode* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIInteractiveWorldRaidBossNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI__HANDLE3DUIRAYCAST_B__62_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_AWAKE_OFFSET))(nullptr);
		}

		InteractiveWorldRaidTask* get__iaWorldRaidTask()
		{
			return ((InteractiveWorldRaidTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GET__IAWORLDRAIDTASK_OFFSET))(nullptr);
		}

		::System::Void RefreshMostParticipated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_REFRESHMOSTPARTICIPATED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI___N__1_OFFSET))(nullptr);
		}

		::System::Void SetCameraManager(InteractiveWorldRaidCameraManager* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(InteractiveWorldRaidCameraManager*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SETCAMERAMANAGER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_UPDATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ResolveOverlaps(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_RESOLVEOVERLAPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleWorldRaidBossListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_HANDLEWORLDRAIDBOSSLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyVerticalOffset(UIWidget* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIWidget*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_APPLYVERTICALOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void SetZoomInBossInfoUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SETZOOMINBOSSINFOUI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void SetSelectedBossButtonOn(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SETSELECTEDBOSSBUTTONON_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_GET_CURRENTBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void BackToOverview()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_BACKTOOVERVIEW_OFFSET))(nullptr);
		}

		::System::Void OnClickInformationButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONCLICKINFORMATIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnPressOverViewRight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONPRESSOVERVIEWRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetOverviewBossNameTagPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_SETOVERVIEWBOSSNAMETAGPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Handle3DUIRaycast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_HANDLE3DUIRAYCAST_OFFSET))(nullptr);
		}

		::System::Void OnClickSwitchPhaseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAID2DUI_ONCLICKSWITCHPHASEBUTTON_OFFSET))(nullptr);
		}

	};

