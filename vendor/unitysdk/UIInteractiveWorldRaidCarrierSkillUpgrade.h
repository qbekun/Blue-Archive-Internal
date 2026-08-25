#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIInteractiveWorldRaidCarrierCore;
class UILabel;
class UIInteractiveWorldRaidCarrierSkillInfoTooltip;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace MX::NetworkProtocol { class WorldRaidUpdateCarrierSkillRequest; }
class InteractiveWorldRaidCarrierSkillInfoTooltipInfo;
namespace MX::NetworkProtocol { class WorldRaidUpdateCarrierSkillResponse; }

#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE___N__0_OFFSET UNITYSDK_OFFSET(0x2614780)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_USEPASSIVEUPGRADEITEM_OFFSET UNITYSDK_OFFSET(0x2614790)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONMANUALROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x2614900)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26149F0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_HIDETOOLTIP_OFFSET UNITYSDK_OFFSET(0x2614B10)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x2614C50)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONMANUALROTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2614D60)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2614E20)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_REFRESH_OFFSET UNITYSDK_OFFSET(0x2614EA0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__ONSCREENRESOLUTIONCHANGED_G__COCHECKSCREENRESOLUTIONCHANGED|46_0_OFFSET UNITYSDK_OFFSET(0x2614CF0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2616680)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONINFORMATIONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26170C0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_USEEXUPGRADEITEM_OFFSET UNITYSDK_OFFSET(0x2617170)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__ONMANUALROTATEFINISH_B__51_0_OFFSET UNITYSDK_OFFSET(0x2617240)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONBACK_OFFSET UNITYSDK_OFFSET(0x26172A0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_SENDUPDATESKILLREQUEST_OFFSET UNITYSDK_OFFSET(0x2614870)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26173A0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2617430)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_SHOWTOOLTIP_OFFSET UNITYSDK_OFFSET(0x26174C0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__SENDUPDATESKILLREQUEST_B__38_0_OFFSET UNITYSDK_OFFSET(0x2617680)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONMANUALROTATEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x2618120)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__PLAYUPDATEDSKILLEFFECTS_G__COREFRESHDEFERRED|39_1_OFFSET UNITYSDK_OFFSET(0x2618210)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x26182B0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2618380)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_PLAYUPDATEDSKILLEFFECTS_OFFSET UNITYSDK_OFFSET(0x2617AE0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONCOLLECTIONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26184B0)
#define UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONCOREROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x2618660)

	inline static constexpr unsigned int UIInteractiveWorldRaidCarrierSkillUpgrade_TypeDefinitionIndex = 6519;

	class UIInteractiveWorldRaidCarrierSkillUpgrade : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		::Il2CppArray<::System::Object*>* skillElements; // 0xE0
		MXButton* informationButton; // 0xE8
		MXButton* collectionButton; // 0xF0
		::System::Int64 passiveUpgradeItemGroupId; // 0xF8
		::System::Int64 exUpgradeItemGroupId; // 0x100
		::UnityEngine::GameObject* corePanel; // 0x108
		::UnityEngine::GameObject* emptyPanel; // 0x110
		UIInteractiveWorldRaidCarrierCore* core; // 0x118
		UILabel* coreLevel; // 0x120
		::UnityEngine::GameObject* passiveUpgradeButtonObject; // 0x128
		MXButton* passiveUpgradeButton; // 0x130
		::UnityEngine::GameObject* manualRotateIndicator; // 0x138
		MXButton* manualRotateButton; // 0x140
		UILabel* manualRotateAxisLabelX; // 0x148
		UILabel* manualRotateAxisLabelY; // 0x150
		UILabel* manualRotateAxisLabelZ; // 0x158
		::Il2CppArray<::System::Object*>* usbButtons; // 0x160
		::UnityEngine::GameObject* usbUpgradeObject; // 0x168
		UIInteractiveWorldRaidCarrierSkillInfoTooltip* tooltip; // 0x170
		::UnityEngine::GameObject* tooltipParentObject; // 0x178
		::UnityEngine::Transform* tooltipTargetObjectParent; // 0x180
		MXButton* tooltipCloseButton; // 0x188
		::System::Int64 _seasonId; // 0x190
		::System::Boolean _allExSkillsUnlocked; // 0x198
		Il2CppObject* _currSeasonSkillDic; // 0x1A0
		Il2CppObject* _nextUseItemDic; // 0x1A8
		::UnityEngine::Transform* _tooltipTarget; // 0x1B0
		::UnityEngine::Transform* _tooltipTargetParent; // 0x1B8
		::UnityEngine::Vector2* _tooltipExtent; // 0x1C0

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE___N__0_OFFSET))(nullptr);
		}

		::System::Void UsePassiveUpgradeItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_USEPASSIVEUPGRADEITEM_OFFSET))(nullptr);
		}

		::System::Void OnManualRotateFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONMANUALROTATEFINISH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void HideTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_HIDETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnManualRotateUpdate(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONMANUALROTATEUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnScreenResolutionChanged_g__CoCheckScreenResolutionChanged|46_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__ONSCREENRESOLUTIONCHANGED_G__COCHECKSCREENRESOLUTIONCHANGED|46_0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnInformationButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONINFORMATIONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void UseExUpgradeItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_USEEXUPGRADEITEM_OFFSET))(nullptr);
		}

		::System::Void _OnManualRotateFinish_b__51_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__ONMANUALROTATEFINISH_B__51_0_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SendUpdateSkillRequest(::MX::NetworkProtocol::WorldRaidUpdateCarrierSkillRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WorldRaidUpdateCarrierSkillRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_SENDUPDATESKILLREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowTooltip(InteractiveWorldRaidCarrierSkillInfoTooltipInfo* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector2* arg3)
		{
			((::System::Void(*)(InteractiveWorldRaidCarrierSkillInfoTooltipInfo*, ::UnityEngine::Transform*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_SHOWTOOLTIP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _SendUpdateSkillRequest_b__38_0(::MX::NetworkProtocol::WorldRaidUpdateCarrierSkillResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WorldRaidUpdateCarrierSkillResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__SENDUPDATESKILLREQUEST_B__38_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnManualRotateButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONMANUALROTATEBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _PlayUpdatedSkillEffects_g__CoRefreshDeferred|39_1(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE__PLAYUPDATEDSKILLEFFECTS_G__COREFRESHDEFERRED|39_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void PlayUpdatedSkillEffects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_PLAYUPDATEDSKILLEFFECTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONCOLLECTIONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnCoreRotateFinish(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERSKILLUPGRADE_ONCOREROTATEFINISH_OFFSET))(arg, nullptr);
		}

	};

