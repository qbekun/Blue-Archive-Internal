#pragma once
#include "unitysdk.h"

class MXToggle;
class MXButton;
class ButtonActivator;
class MultiStageSweep;
class IntTabController;
class UIMultiSweepStageSort;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class MultiSweepListScrollController;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::NetworkProtocol { class ContentSweepSetMultiSweepPresetNameResponse; }
namespace MX::GameLogic::DBModel { class MultiSweepPresetDB; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class UIPopup_MultiSweep_Select;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_MultiSweep_Notice;
class MultiSweepListScrollInfo;

#define UIPOPUP_MULTISWEEP_REFRESHMULTISWEEPTABNAME_OFFSET UNITYSDK_OFFSET(0x270C050)
#define UIPOPUP_MULTISWEEP_ONCLICKPRESETEDIT_OFFSET UNITYSDK_OFFSET(0x270C3A0)
#define UIPOPUP_MULTISWEEP_REQUESTCONTENTSWEEPSETMULTISWEEPPRESET_OFFSET UNITYSDK_OFFSET(0x270C480)
#define UIPOPUP_MULTISWEEP__ONCLICKREGISTRATION_B__51_1_OFFSET UNITYSDK_OFFSET(0x270C750)
#define UIPOPUP_MULTISWEEP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x270C780)
#define UIPOPUP_MULTISWEEP_SETMULTISWEEPSCROLLLIST_OFFSET UNITYSDK_OFFSET(0x270C810)
#define UIPOPUP_MULTISWEEP_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x270D7D0)
#define UIPOPUP_MULTISWEEP_AWAKE_OFFSET UNITYSDK_OFFSET(0x270D840)
#define UIPOPUP_MULTISWEEP_ONCLICKREGISTRATION_OFFSET UNITYSDK_OFFSET(0x270E470)
#define UIPOPUP_MULTISWEEP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x270E550)
#define UIPOPUP_MULTISWEEP___N__0_OFFSET UNITYSDK_OFFSET(0x270E810)
#define UIPOPUP_MULTISWEEP__ONCONFIRM_B__50_0_OFFSET UNITYSDK_OFFSET(0x270E820)
#define UIPOPUP_MULTISWEEP_ONCHANGEDPRESETGROUP_OFFSET UNITYSDK_OFFSET(0x270E940)
#define UIPOPUP_MULTISWEEP__ONCLICKSAVE_B__54_0_OFFSET UNITYSDK_OFFSET(0x270F060)
#define UIPOPUP_MULTISWEEP_BUNCHTOGGLECANCELCHECK_OFFSET UNITYSDK_OFFSET(0x270F020)
#define UIPOPUP_MULTISWEEP_ONCLICKSELECTRESETCHECK_OFFSET UNITYSDK_OFFSET(0x270F0C0)
#define UIPOPUP_MULTISWEEP_ONCLICKSAVE_OFFSET UNITYSDK_OFFSET(0x270F2A0)
#define UIPOPUP_MULTISWEEP_ONSELECTEDPARCELCARD_OFFSET UNITYSDK_OFFSET(0x270E7B0)
#define UIPOPUP_MULTISWEEP_SETTOOLTIPOPENDATA_OFFSET UNITYSDK_OFFSET(0x270F830)
#define UIPOPUP_MULTISWEEP_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x270F900)
#define UIPOPUP_MULTISWEEP_ONBUNCHTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x270F9E0)
#define UIPOPUP_MULTISWEEP__ONCLICKREGISTRATION_B__51_0_OFFSET UNITYSDK_OFFSET(0x270FF90)
#define UIPOPUP_MULTISWEEP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2710A50)
#define UIPOPUP_MULTISWEEP_SETPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x270D340)
#define UIPOPUP_MULTISWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2710C20)
#define UIPOPUP_MULTISWEEP_HANDLECONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2710DE0)
#define UIPOPUP_MULTISWEEP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27111E0)
#define UIPOPUP_MULTISWEEP__ONCLICKPRESETEDIT_B__49_0_OFFSET UNITYSDK_OFFSET(0x27112F0)
#define UIPOPUP_MULTISWEEP_ONSORT_OFFSET UNITYSDK_OFFSET(0x270FA40)
#define UIPOPUP_MULTISWEEP_ONSWEEPSTAGESELECT_OFFSET UNITYSDK_OFFSET(0x27115C0)

	inline static constexpr unsigned int UIPopup_MultiSweep_TypeDefinitionIndex = 7126;

	class UIPopup_MultiSweep : public Il2CppObject
	{
	public:
		MXToggle* bunchToggle; // 0xD8
		MXButton* closeButton; // 0xE0
		ButtonActivator* registrationActivatorButton; // 0xE8
		MXButton* presetEditButton; // 0xF0
		MXButton* selectResetButton; // 0xF8
		MXButton* saveButton; // 0x100
		::Il2CppArray<::System::Object*>* selectedParcelCards; // 0x108
		MultiStageSweep* sweepObject; // 0x110
		IntTabController* tabController; // 0x118
		::Il2CppArray<::System::Object*>* tab1Labels; // 0x120
		::Il2CppArray<::System::Object*>* tab2Labels; // 0x128
		::Il2CppArray<::System::Object*>* tab3Labels; // 0x130
		::Il2CppArray<::System::Object*>* tab4Labels; // 0x138
		::Il2CppArray<::System::Object*>* tab5Labels; // 0x140
		::Il2CppArray<::System::Object*>* tab6Labels; // 0x148
		::Il2CppArray<::System::Object*>* tab7Labels; // 0x150
		UIMultiSweepStageSort* uiMultiSweepStageSort; // 0x158
		::UnityEngine::GameObject* stageListEmpty; // 0x160
		::UnityEngine::Transform* presetRoot; // 0x168
		Il2CppObject* tabLabels; // 0x170
		MultiSweepListScrollController* _scrollController; // 0x178
		Il2CppObject* multiSweepList; // 0x180
		Il2CppObject* multiSweepSelectList; // 0x188
		Il2CppObject* selectedItemParcelInfoList; // 0x190
		::Il2CppArray<::System::Object*>* presetNames; // 0x198
		::System::Boolean bunchCheck; // 0x1A0
		::System::Boolean bunchToggleUse; // 0x1A1
		Il2CppObject* allStageRewards; // 0x1A8
		Il2CppObject* allStageIds; // 0x1B0
		Il2CppObject* presetSetStageIds; // 0x1B8
		::System::Boolean isResetSweepCount; // 0x1C0
		::System::Boolean openFromTooltip; // 0x1C1
		::MX::GameLogic::Parcel::ParcelInfo* tooltipParcelInfo; // 0x1C8

		::System::Void RefreshMultiSweepTabName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_REFRESHMULTISWEEPTABNAME_OFFSET))(nullptr);
		}

		::System::Void OnClickPresetEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONCLICKPRESETEDIT_OFFSET))(nullptr);
		}

		::System::Void RequestContentSweepSetMultiSweepPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_REQUESTCONTENTSWEEPSETMULTISWEEPPRESET_OFFSET))(nullptr);
		}

		::System::Void _OnClickRegistration_b__51_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP__ONCLICKREGISTRATION_B__51_1_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetMultiSweepScrollList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SETMULTISWEEPSCROLLLIST_OFFSET))(arg, nullptr);
		}

		MultiSweepListScrollController* get_scrollController()
		{
			return ((MultiSweepListScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickRegistration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONCLICKREGISTRATION_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnConfirm_b__50_0(::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetNameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ContentSweepSetMultiSweepPresetNameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP__ONCONFIRM_B__50_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedPresetGroup(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONCHANGEDPRESETGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _OnClickSave_b__54_0(::MX::GameLogic::DBModel::MultiSweepPresetDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MultiSweepPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP__ONCLICKSAVE_B__54_0_OFFSET))(arg, nullptr);
		}

		::System::Void BunchToggleCancelCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_BUNCHTOGGLECANCELCHECK_OFFSET))(nullptr);
		}

		::System::Void OnClickSelectResetCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONCLICKSELECTRESETCHECK_OFFSET))(nullptr);
		}

		::System::Void OnClickSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONCLICKSAVE_OFFSET))(nullptr);
		}

		::System::Void OnSelectedParcelCard(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONSELECTEDPARCELCARD_OFFSET))(arg, nullptr);
		}

		::System::Void SetTooltipOpenData(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SETTOOLTIPOPENDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnConfirm(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONCONFIRM_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnBunchToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONBUNCHTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickRegistration_b__51_0(UIPopup_MultiSweep_Select* arg)
		{
			((::System::Void(*)(UIPopup_MultiSweep_Select*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP__ONCLICKREGISTRATION_B__51_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetParcelCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SETPARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleContentSweepMultiSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_HANDLECONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _OnClickPresetEdit_b__49_0(UIPopup_MultiSweep_Notice* arg)
		{
			((::System::Void(*)(UIPopup_MultiSweep_Notice*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP__ONCLICKPRESETEDIT_B__49_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSweepStageSelect(MultiSweepListScrollInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MultiSweepListScrollInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_ONSWEEPSTAGESELECT_OFFSET))(arg, arg2, nullptr);
		}

	};

