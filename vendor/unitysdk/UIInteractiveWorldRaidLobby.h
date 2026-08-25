#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILobbyScreenshotMode;
class UIInteractiveWorldRaidLobbyEventMenu;
class UIInteractiveWorldRaidLobbyToast;
class WidgetCharacterDialogEmoji;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::SaveData { class InteractiveWorldRaidSaveData; }
class UIInteractiveWorldRaidLobby_WorldMap;
class InteractiveWorldRaidTask;
class RedDotChangedMessage;
class UIBase;
namespace MX::Data { class BGMPlayInfo; }
class InteractiveWorldRaidUITriggerMessage;
class UIInteractiveWorldRaidReplayUI;

#define UIINTERACTIVEWORLDRAIDLOBBY_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x2623190)
#define UIINTERACTIVEWORLDRAIDLOBBY_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x26238B0)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2623950)
#define UIINTERACTIVEWORLDRAIDLOBBY_HIDECURRENTUIWITHBUTTON_OFFSET UNITYSDK_OFFSET(0x2624380)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONREPLAYBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2624490)
#define UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_2_OFFSET UNITYSDK_OFFSET(0x26245A0)
#define UIINTERACTIVEWORLDRAIDLOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x2624700)
#define UIINTERACTIVEWORLDRAIDLOBBY__CO_CLOSINGONBACK_B__62_0_OFFSET UNITYSDK_OFFSET(0x26247C0)
#define UIINTERACTIVEWORLDRAIDLOBBY_SETSPECIFICUIVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2624830)
#define UIINTERACTIVEWORLDRAIDLOBBY_GETCURRENTCARRIERBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x2625A60)
#define UIINTERACTIVEWORLDRAIDLOBBY_SETDATA_OFFSET UNITYSDK_OFFSET(0x2625CA0)
#define UIINTERACTIVEWORLDRAIDLOBBY_CO_VIEWTABCHANGE_OFFSET UNITYSDK_OFFSET(0x2625CC0)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONINFORMATIONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2625D60)
#define UIINTERACTIVEWORLDRAIDLOBBY_SETLOBBYPREFABTOTASK_OFFSET UNITYSDK_OFFSET(0x2625D90)
#define UIINTERACTIVEWORLDRAIDLOBBY_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x2625E90)
#define UIINTERACTIVEWORLDRAIDLOBBY__COHIDECURRENTUIWITHBUTTON_B__55_0_OFFSET UNITYSDK_OFFSET(0x2625F40)
#define UIINTERACTIVEWORLDRAIDLOBBY_SHOWCURRENTUI_OFFSET UNITYSDK_OFFSET(0x26240D0)
#define UIINTERACTIVEWORLDRAIDLOBBY_CO_CLOSINGONBACK_OFFSET UNITYSDK_OFFSET(0x2625F60)
#define UIINTERACTIVEWORLDRAIDLOBBY_HANDLEUITRIGGERMESSAGE_OFFSET UNITYSDK_OFFSET(0x2625FF0)
#define UIINTERACTIVEWORLDRAIDLOBBY_SHOWCURRENTUIWITHBUTTON_OFFSET UNITYSDK_OFFSET(0x2626500)
#define UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_0_OFFSET UNITYSDK_OFFSET(0x2626550)
#define UIINTERACTIVEWORLDRAIDLOBBY__COSHOWCURRENTUIWITHBUTTON_B__56_0_OFFSET UNITYSDK_OFFSET(0x2626570)
#define UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_1_OFFSET UNITYSDK_OFFSET(0x2626590)
#define UIINTERACTIVEWORLDRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x26265B0)
#define UIINTERACTIVEWORLDRAIDLOBBY_INITIALIZETAB_OFFSET UNITYSDK_OFFSET(0x26265C0)
#define UIINTERACTIVEWORLDRAIDLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2626630)
#define UIINTERACTIVEWORLDRAIDLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2626740)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONUPGRADEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26267D0)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONHIDEUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26268B0)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONVIEWTABBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2626980)
#define UIINTERACTIVEWORLDRAIDLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2626FE0)
#define UIINTERACTIVEWORLDRAIDLOBBY__ONREPLAYBUTTONCLICK_B__49_0_OFFSET UNITYSDK_OFFSET(0x26279D0)
#define UIINTERACTIVEWORLDRAIDLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x2627A80)
#define UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_3_OFFSET UNITYSDK_OFFSET(0x2627A90)
#define UIINTERACTIVEWORLDRAIDLOBBY_COSHOWCURRENTUIWITHBUTTON_OFFSET UNITYSDK_OFFSET(0x2627AE0)
#define UIINTERACTIVEWORLDRAIDLOBBY_SHOWFLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x2627B70)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONOPTIONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2627CA0)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONTOLOBBYBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2627DA0)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2627E40)
#define UIINTERACTIVEWORLDRAIDLOBBY_COHIDECURRENTUIWITHBUTTON_OFFSET UNITYSDK_OFFSET(0x2624420)
#define UIINTERACTIVEWORLDRAIDLOBBY_HIDECURRENTUI_OFFSET UNITYSDK_OFFSET(0x2626240)
#define UIINTERACTIVEWORLDRAIDLOBBY_ONCHANGECAMERABUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2627FB0)
#define UIINTERACTIVEWORLDRAIDLOBBY_SETUISTACK_OFFSET UNITYSDK_OFFSET(0x26280B0)

	inline static constexpr unsigned int UIInteractiveWorldRaidLobby_TypeDefinitionIndex = 6548;

	class UIInteractiveWorldRaidLobby : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* dimmer; // 0xD8
		::System::Single fadeOutDelay; // 0xE0
		Il2CppObject* viewTabButtons; // 0xE8
		Il2CppObject* specificUIs; // 0xF0
		MXButton* backButton; // 0xF8
		MXButton* informationButton; // 0x100
		MXButton* optionButton; // 0x108
		MXButton* toLobbyButton; // 0x110
		MXButton* hideUIButton; // 0x118
		UILobbyScreenshotMode* screenshotMode; // 0x120
		UIInteractiveWorldRaidLobbyEventMenu* eventMenu; // 0x128
		MXButton* upgradeButton; // 0x130
		::UnityEngine::GameObject* upgradeButtonRedDot; // 0x138
		UIInteractiveWorldRaidLobbyToast* toast; // 0x140
		MXButton* replayButton; // 0x148
		MXButton* changeCameraButton; // 0x150
		::Il2CppArray<::System::Object*>* changeCameraIndicators; // 0x158
		Il2CppObject* changeCameraViewTabIndices; // 0x160
		WidgetCharacterDialogEmoji* dialogWidget; // 0x168
		::UnityEngine::GameObject* IWCameraManagerPrefab; // 0x170
		::System::Int32 _currViewTabIndex; // 0x178
		::System::Int32 _currCameraIndex; // 0x17C
		Il2CppObject* _viewVisitedFlags; // 0x180
		::System::Boolean _topUiOpened; // 0x188
		::System::Boolean _isLeaving; // 0x189
		::MX::Data::EventContentSeasonInfo* _seasonInfo; // 0x190
		::MX::SaveData::InteractiveWorldRaidSaveData* _saveData; // 0x198
		UIInteractiveWorldRaidLobby_WorldMap* _worldMapButton; // 0x1A0
		InteractiveWorldRaidTask* _task; // 0x1A8
		Il2CppObject* _uiStack; // 0x1B0

		::System::Void UpdateRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_UPDATEREDDOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void HideCurrentUIWithButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_HIDECURRENTUIWITHBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnReplayButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONREPLAYBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void _Co_Loading_b__38_2(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleRedDotChangedMessage(RedDotChangedMessage* arg)
		{
			return ((::System::Boolean(*)(RedDotChangedMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Co_ClosingOnBack_b__62_0(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__CO_CLOSINGONBACK_B__62_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpecificUIVisibility(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_SETSPECIFICUIVISIBILITY_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetCurrentCarrierBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_GETCURRENTCARRIERBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ViewTabChange(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_CO_VIEWTABCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnInformationButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONINFORMATIONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetLobbyPrefabToTask()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_SETLOBBYPREFABTOTASK_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Boolean _CoHideCurrentUIWithButton_b__55_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__COHIDECURRENTUIWITHBUTTON_B__55_0_OFFSET))(nullptr);
		}

		::System::Void ShowCurrentUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_SHOWCURRENTUI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ClosingOnBack()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_CO_CLOSINGONBACK_OFFSET))(nullptr);
		}

		::System::Boolean HandleUITriggerMessage(InteractiveWorldRaidUITriggerMessage* arg)
		{
			return ((::System::Boolean(*)(InteractiveWorldRaidUITriggerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_HANDLEUITRIGGERMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowCurrentUIWithButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_SHOWCURRENTUIWITHBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _Co_Loading_b__38_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_0_OFFSET))(nullptr);
		}

		::System::Boolean _CoShowCurrentUIWithButton_b__56_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__COSHOWCURRENTUIWITHBUTTON_B__56_0_OFFSET))(nullptr);
		}

		::System::Boolean _Co_Loading_b__38_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_1_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void InitializeTab(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_INITIALIZETAB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnUpgradeButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONUPGRADEBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnHideUIButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONHIDEUIBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnViewTabButtonClick(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONVIEWTABBUTTONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnReplayButtonClick_b__49_0(UIInteractiveWorldRaidReplayUI* arg)
		{
			((::System::Void(*)(UIInteractiveWorldRaidReplayUI*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__ONREPLAYBUTTONCLICK_B__49_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Boolean _Co_Loading_b__38_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY__CO_LOADING_B__38_3_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowCurrentUIWithButton()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_COSHOWCURRENTUIWITHBUTTON_OFFSET))(nullptr);
		}

		::System::Void ShowFlavorText(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_SHOWFLAVORTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void OnOptionButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONOPTIONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnToLobbyButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONTOLOBBYBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoHideCurrentUIWithButton()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_COHIDECURRENTUIWITHBUTTON_OFFSET))(nullptr);
		}

		::System::Void HideCurrentUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_HIDECURRENTUI_OFFSET))(nullptr);
		}

		::System::Void OnChangeCameraButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_ONCHANGECAMERABUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetUIStack(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBY_SETUISTACK_OFFSET))(arg, nullptr);
		}

	};

