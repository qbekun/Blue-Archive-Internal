#pragma once
#include "unitysdk.h"

class MXButton;
class ButtonActivator;
class SpineChatDialogContainerEvent;
namespace UnityEngine { class Transform; }
class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UIEventContentClueCulprit;
class UIEventContentClueViewModel;
namespace UnityEngine { class Coroutine; }
namespace FlatData { class DialogCondition; }
class NextRoundIntroPhase;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data::Excel { class EventContentClueSearchExcel; }
class ClueSlotViewData;
class ClueRoundProgress;
namespace MX::Data { class BGMPlayInfo; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UIEVENTCONTENTCLUEBASEVIEW_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24940A0)
#define UIEVENTCONTENTCLUEBASEVIEW_REFRESHROUNDHINTALARMUI_OFFSET UNITYSDK_OFFSET(0x2494110)
#define UIEVENTCONTENTCLUEBASEVIEW_ONROUNDCLEARPAGECHANGED_OFFSET UNITYSDK_OFFSET(0x2494220)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_PLAYNEXTROUNDINTRO_OFFSET UNITYSDK_OFFSET(0x24944B0)
#define UIEVENTCONTENTCLUEBASEVIEW_ONHINTCHANGED_OFFSET UNITYSDK_OFFSET(0x2494520)
#define UIEVENTCONTENTCLUEBASEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x2493F30)
#define UIEVENTCONTENTCLUEBASEVIEW_ONSLOTCLUEHINTREQUESTED_OFFSET UNITYSDK_OFFSET(0x24946C0)
#define UIEVENTCONTENTCLUEBASEVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2494800)
#define UIEVENTCONTENTCLUEBASEVIEW_ONSLOTSCHANGED_OFFSET UNITYSDK_OFFSET(0x2494AE0)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_SHOWSLOTHINT_OFFSET UNITYSDK_OFFSET(0x2494760)
#define UIEVENTCONTENTCLUEBASEVIEW_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2495390)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_LOADSPINE_OFFSET UNITYSDK_OFFSET(0x2495600)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_WAITCLEARPAGEINTRO_OFFSET UNITYSDK_OFFSET(0x2494440)
#define UIEVENTCONTENTCLUEBASEVIEW_SETVIEWMODELBIND_OFFSET UNITYSDK_OFFSET(0x2495670)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_CLAIMROUNDREWARDFLOW_OFFSET UNITYSDK_OFFSET(0x2495950)
#define UIEVENTCONTENTCLUEBASEVIEW_SETDEFERREDCLUELINES_OFFSET UNITYSDK_OFFSET(0x2490400)
#define UIEVENTCONTENTCLUEBASEVIEW_ONCLICKREGISTERSLOT_OFFSET UNITYSDK_OFFSET(0x24959C0)
#define UIEVENTCONTENTCLUEBASEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x2495AB0)
#define UIEVENTCONTENTCLUEBASEVIEW___N__0_OFFSET UNITYSDK_OFFSET(0x2496200)
#define UIEVENTCONTENTCLUEBASEVIEW_ONCLICKCLAIMBUTTON_OFFSET UNITYSDK_OFFSET(0x2496210)
#define UIEVENTCONTENTCLUEBASEVIEW_ONCLAIMBUTTONINTERACTABLECHANGED_OFFSET UNITYSDK_OFFSET(0x2496290)
#define UIEVENTCONTENTCLUEBASEVIEW_APPLYROUNDHINTUI_OFFSET UNITYSDK_OFFSET(0x2494560)
#define UIEVENTCONTENTCLUEBASEVIEW_BINDVIEWMODELEVENTS_OFFSET UNITYSDK_OFFSET(0x24956E0)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_CLEARIMAGECLICKFLOW_OFFSET UNITYSDK_OFFSET(0x2496310)
#define UIEVENTCONTENTCLUEBASEVIEW_ONBACK_OFFSET UNITYSDK_OFFSET(0x2496380)
#define UIEVENTCONTENTCLUEBASEVIEW_PLAYDIALOGDELAYED_OFFSET UNITYSDK_OFFSET(0x24963A0)
#define UIEVENTCONTENTCLUEBASEVIEW_UPDATECULPRITFORCURRENTROUND_OFFSET UNITYSDK_OFFSET(0x2496410)
#define UIEVENTCONTENTCLUEBASEVIEW_ONROUNDPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x24964D0)
#define UIEVENTCONTENTCLUEBASEVIEW_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2496760)
#define UIEVENTCONTENTCLUEBASEVIEW_ONCLICKTOTALREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x2496780)
#define UIEVENTCONTENTCLUEBASEVIEW__CO_LOADSPINE_G__ONSPINELOADED|47_0_OFFSET UNITYSDK_OFFSET(0x24968B0)
#define UIEVENTCONTENTCLUEBASEVIEW_OPENEDFLOW_OFFSET UNITYSDK_OFFSET(0x24953B0)
#define UIEVENTCONTENTCLUEBASEVIEW_ONCLICKCLEARIMAGE_OFFSET UNITYSDK_OFFSET(0x2496A20)
#define UIEVENTCONTENTCLUEBASEVIEW__CO_CLEARIMAGECLICKFLOW_B__62_0_OFFSET UNITYSDK_OFFSET(0x2496AA0)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_VMINITIALIZE_OFFSET UNITYSDK_OFFSET(0x2496B90)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_REGISTERSLOTFLOW_OFFSET UNITYSDK_OFFSET(0x2495A40)
#define UIEVENTCONTENTCLUEBASEVIEW_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x2496C00)
#define UIEVENTCONTENTCLUEBASEVIEW_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2496C40)
#define UIEVENTCONTENTCLUEBASEVIEW_CO_GOTONEXTROUNDFLOW_OFFSET UNITYSDK_OFFSET(0x2496B20)
#define UIEVENTCONTENTCLUEBASEVIEW_SHOWREWARDFROMINFOS_OFFSET UNITYSDK_OFFSET(0x2496C60)
#define UIEVENTCONTENTCLUEBASEVIEW_CALCOPENDIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x2496D90)

	inline static constexpr unsigned int UIEventContentClueBaseView_TypeDefinitionIndex = 5757;

	class UIEventContentClueBaseView : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		ButtonActivator* claimButton; // 0xE0
		MXButton* totalRewardButton; // 0xE8
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0xF0
		::UnityEngine::Transform* spineOffsetTransform; // 0xF8
		::UnityEngine::Transform* dialogOffsetTransform; // 0x100
		UITexture* bgTexture; // 0x108
		UILabel* titleLabel; // 0x110
		UILabel* roundCountLabel; // 0x118
		UILabel* clueProgressLabel; // 0x120
		::UnityEngine::GameObject* clueProgressCompleteRoot; // 0x128
		::Il2CppArray<::System::Object*>* clueSlotObjects; // 0x130
		::UnityEngine::GameObject* clearPageRoot; // 0x138
		UITexture* clearImage; // 0x140
		UILabel* clearTextLabel; // 0x148
		MXButton* clearImageButton; // 0x150
		::UnityEngine::GameObject* roundHintRoot; // 0x158
		UILabel* roundHintDescLabel; // 0x160
		::UnityEngine::GameObject* roundAlarmRoot; // 0x168
		::UnityEngine::GameObject* slotHintRoot; // 0x170
		UILabel* slotHintNameLabel; // 0x178
		UILabel* slotHintDescLabel; // 0x180
		::UnityEngine::GameObject* slotHintExtraRoot; // 0x188
		::System::Single slotHintDurationSec; // 0x190
		::UnityEngine::Animation* nextRoundIntroAnim; // 0x198
		UIEventContentClueCulprit* culpritView; // 0x1A0
		UIEventContentClueViewModel* _viewModel; // 0x1A8
		Il2CppObject* _slotMap; // 0x1B0
		::System::Boolean _spineLoaded; // 0x1B8
		::System::Boolean _hasDefaultClip; // 0x1B9
		::System::Int32 _lastCulpritRoundId; // 0x1BC
		::System::String* _roundHintText; // 0x1C0
		::UnityEngine::Coroutine* _slotHintCo; // 0x1C8
		::System::Boolean _isSlotHintMode; // 0x1D0
		::System::Boolean _isBlockingBackInput; // 0x1D1
		::System::Boolean _forceFullSlotReset; // 0x1D2
		::Il2CppArray<::System::Object*>* _boundFlags; // 0x1D8
		::FlatData::DialogCondition* _openDialogCondition; // 0x1E0
		Il2CppObject* _lastSlotsSnapshot; // 0x1E8
		::Il2CppArray<::System::Object*>* _nextRoundIntroClipNames; // 0x1F0

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void RefreshRoundHintAlarmUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_REFRESHROUNDHINTALARMUI_OFFSET))(nullptr);
		}

		::System::Void OnRoundClearPageChanged(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONROUNDCLEARPAGECHANGED_OFFSET))(str, str2, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayNextRoundIntro(NextRoundIntroPhase* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(NextRoundIntroPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_PLAYNEXTROUNDINTRO_OFFSET))(arg, nullptr);
		}

		::System::Void OnHintChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONHINTCHANGED_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSlotClueHintRequested(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONSLOTCLUEHINTREQUESTED_OFFSET))(str, str2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnSlotsChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONSLOTSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowSlotHint(::System::String* str, ::System::String* str2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_SHOWSLOTHINT_OFFSET))(str, str2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_LOADSPINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_WaitClearPageIntro()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_WAITCLEARPAGEINTRO_OFFSET))(nullptr);
		}

		::System::Void SetViewModelBind(UIEventContentClueViewModel* arg, ::MX::Data::EventContentSeasonInfo* arg2, ::MX::Data::Excel::EventContentClueSearchExcel* arg3)
		{
			((::System::Void(*)(UIEventContentClueViewModel*, ::MX::Data::EventContentSeasonInfo*, ::MX::Data::Excel::EventContentClueSearchExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_SETVIEWMODELBIND_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_ClaimRoundRewardFlow()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_CLAIMROUNDREWARDFLOW_OFFSET))(nullptr);
		}

		::System::Void SetDeferredClueLines(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_SETDEFERREDCLUELINES_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRegisterSlot(ClueSlotViewData* arg)
		{
			((::System::Void(*)(ClueSlotViewData*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONCLICKREGISTERSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickClaimButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONCLICKCLAIMBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClaimButtonInteractableChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONCLAIMBUTTONINTERACTABLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyRoundHintUI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_APPLYROUNDHINTUI_OFFSET))(str, nullptr);
		}

		::System::Void BindViewModelEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_BINDVIEWMODELEVENTS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ClearImageClickFlow()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_CLEARIMAGECLICKFLOW_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayDialogDelayed()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_PLAYDIALOGDELAYED_OFFSET))(nullptr);
		}

		::System::Void UpdateCulpritForCurrentRound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_UPDATECULPRITFORCURRENTROUND_OFFSET))(nullptr);
		}

		::System::Void OnRoundProgressChanged(ClueRoundProgress* arg)
		{
			((::System::Void(*)(ClueRoundProgress*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONROUNDPROGRESSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickTotalRewardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONCLICKTOTALREWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void _Co_LoadSpine_g__OnSpineLoaded|47_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW__CO_LOADSPINE_G__ONSPINELOADED|47_0_OFFSET))(nullptr);
		}

		::System::Void OpenedFlow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_OPENEDFLOW_OFFSET))(nullptr);
		}

		::System::Void OnClickClearImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONCLICKCLEARIMAGE_OFFSET))(nullptr);
		}

		::System::Void _Co_ClearImageClickFlow_b__62_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW__CO_CLEARIMAGECLICKFLOW_B__62_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_VMInitialize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_VMINITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RegisterSlotFlow(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_REGISTERSLOTFLOW_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_GoToNextRoundFlow()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CO_GOTONEXTROUNDFLOW_OFFSET))(nullptr);
		}

		::System::Void ShowRewardFromInfos(::MX::GameLogic::Parcel::ParcelResultDB* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_SHOWREWARDFROMINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DialogCondition* CalcOpenDialogCondition(Il2CppObject* arg)
		{
			return ((::FlatData::DialogCondition*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEBASEVIEW_CALCOPENDIALOGCONDITION_OFFSET))(arg, nullptr);
		}

	};

