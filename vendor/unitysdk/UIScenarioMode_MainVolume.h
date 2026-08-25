#pragma once
#include "unitysdk.h"

class UIScrollView;
class UISlider;
namespace UnityEngine { class GameObject; }
class MXButton;
class SNSButton;
class UIScenarioMode_MainChapterList;
class UIDragScrollView;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
class UIScenarioMode_MainVolumeUnit;
namespace MX::Data { class BGMPlayInfo; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define UISCENARIOMODE_MAINVOLUME___N__0_OFFSET UNITYSDK_OFFSET(0x2802790)
#define UISCENARIOMODE_MAINVOLUME_GET_CURRENTVOLUMEID_OFFSET UNITYSDK_OFFSET(0x28027A0)
#define UISCENARIOMODE_MAINVOLUME__INITOPENSEQUENCE_B__58_0_OFFSET UNITYSDK_OFFSET(0x28027D0)
#define UISCENARIOMODE_MAINVOLUME_ONOPENED_OFFSET UNITYSDK_OFFSET(0x28028F0)
#define UISCENARIOMODE_MAINVOLUME_GET_PARTOPENFORWARD_OFFSET UNITYSDK_OFFSET(0x2802F10)
#define UISCENARIOMODE_MAINVOLUME_GET_CURRENTMODETYPE_OFFSET UNITYSDK_OFFSET(0x2802F20)
#define UISCENARIOMODE_MAINVOLUME_INITVOLUMES_OFFSET UNITYSDK_OFFSET(0x2802F50)
#define UISCENARIOMODE_MAINVOLUME__TRYADDSHOWLASTVOLUMESEQUENCE_G__WAITOPENANI|59_2_OFFSET UNITYSDK_OFFSET(0x28030E0)
#define UISCENARIOMODE_MAINVOLUME_ONSELECTMAINVOLUME_OFFSET UNITYSDK_OFFSET(0x2803170)
#define UISCENARIOMODE_MAINVOLUME_AWAKE_OFFSET UNITYSDK_OFFSET(0x2803580)
#define UISCENARIOMODE_MAINVOLUME_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x2803B70)
#define UISCENARIOMODE_MAINVOLUME_SELECTOPENVOLUMEONOPENED_OFFSET UNITYSDK_OFFSET(0x2802CD0)
#define UISCENARIOMODE_MAINVOLUME__ONCHANGELISTANIEVENT_B__63_2_OFFSET UNITYSDK_OFFSET(0x2803DB0)
#define UISCENARIOMODE_MAINVOLUME_SET_PARTOPENFORWARD_OFFSET UNITYSDK_OFFSET(0x2803F70)
#define UISCENARIOMODE_MAINVOLUME_ANYLASTVOLUMECLEARED_OFFSET UNITYSDK_OFFSET(0x2803F80)
#define UISCENARIOMODE_MAINVOLUME_CHECKSNSOPENCONDITIONANDSETACTIVE_OFFSET UNITYSDK_OFFSET(0x2802DE0)
#define UISCENARIOMODE_MAINVOLUME_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x2804040)
#define UISCENARIOMODE_MAINVOLUME_PLAYPARTOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x28042D0)
#define UISCENARIOMODE_MAINVOLUME_TRYADDSHOWLASTVOLUMESEQUENCE_OFFSET UNITYSDK_OFFSET(0x2802B70)
#define UISCENARIOMODE_MAINVOLUME_DECIDEOPENANI_OFFSET UNITYSDK_OFFSET(0x2804720)
#define UISCENARIOMODE_MAINVOLUME_CREATELASTSELECTION_OFFSET UNITYSDK_OFFSET(0x2804BA0)
#define UISCENARIOMODE_MAINVOLUME__TRYADDSHOWLASTVOLUMESEQUENCE_B__59_0_OFFSET UNITYSDK_OFFSET(0x2805780)
#define UISCENARIOMODE_MAINVOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x2805800)
#define UISCENARIOMODE_MAINVOLUME_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x28058A0)
#define UISCENARIOMODE_MAINVOLUME_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2805960)
#define UISCENARIOMODE_MAINVOLUME_ISLASTSELECTIONFINAL_OFFSET UNITYSDK_OFFSET(0x28041C0)
#define UISCENARIOMODE_MAINVOLUME_GET_SHOULDSHOWLASTVOLUMEOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x2804560)
#define UISCENARIOMODE_MAINVOLUME_ONCLICKSWAPSERIES_OFFSET UNITYSDK_OFFSET(0x28059F0)
#define UISCENARIOMODE_MAINVOLUME_GET_CANWATCHLAST_OFFSET UNITYSDK_OFFSET(0x2805610)
#define UISCENARIOMODE_MAINVOLUME_ONCHANGELISTANIEVENT_OFFSET UNITYSDK_OFFSET(0x2805AF0)
#define UISCENARIOMODE_MAINVOLUME__AWAKE_B__35_1_OFFSET UNITYSDK_OFFSET(0x2805DB0)
#define UISCENARIOMODE_MAINVOLUME__TRYADDSHOWLASTVOLUMESEQUENCE_B__59_1_OFFSET UNITYSDK_OFFSET(0x2805EE0)
#define UISCENARIOMODE_MAINVOLUME_MOVETOVOLUME_OFFSET UNITYSDK_OFFSET(0x2803B80)
#define UISCENARIOMODE_MAINVOLUME_ONCLICKSELECTDISABLEDLAST_OFFSET UNITYSDK_OFFSET(0x2806050)
#define UISCENARIOMODE_MAINVOLUME_ONCLICKCLOSELAST_OFFSET UNITYSDK_OFFSET(0x2806070)
#define UISCENARIOMODE_MAINVOLUME_GET_VOLUMEDRAG_OFFSET UNITYSDK_OFFSET(0x28034C0)
#define UISCENARIOMODE_MAINVOLUME_CO_PLAYUNLOCK_OFFSET UNITYSDK_OFFSET(0x2802860)
#define UISCENARIOMODE_MAINVOLUME_GET_LASTSTARTVOLUMEID_OFFSET UNITYSDK_OFFSET(0x2800370)
#define UISCENARIOMODE_MAINVOLUME_CO_SHOWOPENLAST_OFFSET UNITYSDK_OFFSET(0x2805F60)
#define UISCENARIOMODE_MAINVOLUME_ISALLLASTVOLUMECLEARED_OFFSET UNITYSDK_OFFSET(0x28056B0)
#define UISCENARIOMODE_MAINVOLUME_GET_CHANGEANINAMES_OFFSET UNITYSDK_OFFSET(0x28060D0)
#define UISCENARIOMODE_MAINVOLUME__DECIDEOPENANI_G__SELECTCLIP|38_0_OFFSET UNITYSDK_OFFSET(0x2804B10)
#define UISCENARIOMODE_MAINVOLUME_DECIDELASTSELECTEDVOLUMEID_OFFSET UNITYSDK_OFFSET(0x2804750)
#define UISCENARIOMODE_MAINVOLUME_SETPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x2806670)
#define UISCENARIOMODE_MAINVOLUME_GET_SHOULDPLAYBGM2ND_OFFSET UNITYSDK_OFFSET(0x2806BE0)
#define UISCENARIOMODE_MAINVOLUME_ONCLICKOPENLAST_OFFSET UNITYSDK_OFFSET(0x2806EB0)
#define UISCENARIOMODE_MAINVOLUME__ONCLICKSWAPSERIES_B__52_0_OFFSET UNITYSDK_OFFSET(0x2806ED0)
#define UISCENARIOMODE_MAINVOLUME__AWAKE_G__SETGAMEOBJECTFIELD|35_0_OFFSET UNITYSDK_OFFSET(0x2803AF0)
#define UISCENARIOMODE_MAINVOLUME_GET_SHOULDPLAYBGM3RD_OFFSET UNITYSDK_OFFSET(0x2806F60)

	inline static constexpr unsigned int UIScenarioMode_MainVolume_TypeDefinitionIndex = 7772;

	class UIScenarioMode_MainVolume : public Il2CppObject
	{
	public:
		UIScrollView* VolumeScroll; // 0xD8
		UISlider* progressBar; // 0xE0
		::UnityEngine::GameObject* partProgressBar; // 0xE8
		::UnityEngine::GameObject* completedDisplay; // 0xF0
		::UnityEngine::GameObject* partMax; // 0xF8
		Il2CppObject* openLastButtons; // 0x100
		MXButton* closeLastButton; // 0x108
		MXButton* selectDisabledLastButton; // 0x110
		::UnityEngine::GameObject* lastOpenSequcence; // 0x118
		::UnityEngine::GameObject* finalGaugeRoot; // 0x120
		MXButton* swapSeriesButton; // 0x128
		SNSButton* snsButtonObject; // 0x130
		UIScenarioMode_MainChapterList* ChapterList; // 0x138
		Il2CppObject* DefaultVolumes; // 0x140
		Il2CppObject* LastVolumes; // 0x148
		::Il2CppArray<::System::Object*>* changeAniNames; // 0x150
		::System::String* openLastAniName; // 0x158
		::System::String* defaultChangeAniName; // 0x160
		::System::String* lastChangeAniName; // 0x168
		::System::Int64 lastStartVolumeId; // 0x170
		UIDragScrollView* volumeDrag; // 0x178
		::System::Boolean _PartOpenForward_k__BackingField; // 0x180

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME___N__0_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentVolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_CURRENTVOLUMEID_OFFSET))(nullptr);
		}

		::System::Void _InitOpenSequence_b__58_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__INITOPENSEQUENCE_B__58_0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PartOpenForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_PARTOPENFORWARD_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_CurrentModeType()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_CURRENTMODETYPE_OFFSET))(nullptr);
		}

		::System::Void InitVolumes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_INITVOLUMES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _TryAddShowLastVolumeSequence_g__WaitOpenAni|59_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__TRYADDSHOWLASTVOLUMESEQUENCE_G__WAITOPENANI|59_2_OFFSET))(nullptr);
		}

		::System::Void OnSelectMainVolume(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ONSELECTMAINVOLUME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_AWAKE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void SelectOpenVolumeOnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_SELECTOPENVOLUMEONOPENED_OFFSET))(nullptr);
		}

		::System::Void _OnChangeListAniEvent_b__63_2(UIScenarioMode_MainVolumeUnit* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainVolumeUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__ONCHANGELISTANIEVENT_B__63_2_OFFSET))(arg, nullptr);
		}

		::System::Void set_PartOpenForward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_SET_PARTOPENFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyLastVolumeCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ANYLASTVOLUMECLEARED_OFFSET))(nullptr);
		}

		::System::Void CheckSNSOpenConditionAndSetActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_CHECKSNSOPENCONDITIONANDSETACTIVE_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void PlayPartOpenAnimation(::System::String* str, ::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_PLAYPARTOPENANIMATION_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void TryAddShowLastVolumeSequence(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_TRYADDSHOWLASTVOLUMESEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void DecideOpenAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_DECIDEOPENANI_OFFSET))(nullptr);
		}

		::System::Void CreateLastSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_CREATELASTSELECTION_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* _TryAddShowLastVolumeSequence_b__59_0()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__TRYADDSHOWLASTVOLUMESEQUENCE_B__59_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean IsLastSelectionFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ISLASTSELECTIONFINAL_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldShowLastVolumeOpenSequence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_SHOULDSHOWLASTVOLUMEOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void OnClickSwapSeries()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ONCLICKSWAPSERIES_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWatchLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_CANWATCHLAST_OFFSET))(nullptr);
		}

		::System::Void OnChangeListAniEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ONCHANGELISTANIEVENT_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__35_1(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__AWAKE_B__35_1_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* _TryAddShowLastVolumeSequence_b__59_1()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__TRYADDSHOWLASTVOLUMESEQUENCE_B__59_1_OFFSET))(nullptr);
		}

		::System::Void MoveToVolume(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_MOVETOVOLUME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickSelectDisabledLast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ONCLICKSELECTDISABLEDLAST_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseLast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ONCLICKCLOSELAST_OFFSET))(nullptr);
		}

		UIDragScrollView* get_VolumeDrag()
		{
			return ((UIDragScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_VOLUMEDRAG_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayUnlock(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_CO_PLAYUNLOCK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LastStartVolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_LASTSTARTVOLUMEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowOpenLast()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_CO_SHOWOPENLAST_OFFSET))(nullptr);
		}

		::System::Boolean IsAllLastVolumeCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ISALLLASTVOLUMECLEARED_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeAniNames()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_CHANGEANINAMES_OFFSET))(nullptr);
		}

		::System::Void _DecideOpenAni_g__SelectClip|38_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__DECIDEOPENANI_G__SELECTCLIP|38_0_OFFSET))(arg, nullptr);
		}

		::System::Void DecideLastSelectedVolumeId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_DECIDELASTSELECTEDVOLUMEID_OFFSET))(nullptr);
		}

		::System::Void SetProgressBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_SETPROGRESSBAR_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldPlayBGM2nd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_SHOULDPLAYBGM2ND_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenLast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_ONCLICKOPENLAST_OFFSET))(nullptr);
		}

		::System::Void _OnClickSwapSeries_b__52_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__ONCLICKSWAPSERIES_B__52_0_OFFSET))(nullptr);
		}

		::System::Void _Awake_g__SetGameObjectField|35_0(::UnityEngine::Transform* arg, ::UnityEngine::GameObject&* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::GameObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME__AWAKE_G__SETGAMEOBJECTFIELD|35_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ShouldPlayBGM3rd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_GET_SHOULDPLAYBGM3RD_OFFSET))(nullptr);
		}

	};

