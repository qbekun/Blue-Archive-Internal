#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class Animation; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace MX::Data { class ScenarioModeData; }
class UIScenarioMode_VolumeSet;
class SwipeDir;

#define UISCENARIOMODE_VOLUME_AWAKE_OFFSET UNITYSDK_OFFSET(0x2811280)
#define UISCENARIOMODE_VOLUME_ONPAGEEND_OFFSET UNITYSDK_OFFSET(0x28114A0)
#define UISCENARIOMODE_VOLUME_GET_MAXPAGE_OFFSET UNITYSDK_OFFSET(0x28115D0)
#define UISCENARIOMODE_VOLUME_SET_LASTVOLUMEID_OFFSET UNITYSDK_OFFSET(0x28115E0)
#define UISCENARIOMODE_VOLUME_GET_VOLUMESPERPAGE_OFFSET UNITYSDK_OFFSET(0x28115F0)
#define UISCENARIOMODE_VOLUME_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x28117A0)
#define UISCENARIOMODE_VOLUME_INITPAGES_OFFSET UNITYSDK_OFFSET(0x28117B0)
#define UISCENARIOMODE_VOLUME_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x27FE050)
#define UISCENARIOMODE_VOLUME_COMPAREVOLUMECANWATCH_OFFSET UNITYSDK_OFFSET(0x2811EB0)
#define UISCENARIOMODE_VOLUME_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27FE060)
#define UISCENARIOMODE_VOLUME_GETVOLUMEIDS_OFFSET UNITYSDK_OFFSET(0x28123C0)
#define UISCENARIOMODE_VOLUME_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x28125D0)
#define UISCENARIOMODE_VOLUME_GET_CURRENTPAGE_OFFSET UNITYSDK_OFFSET(0x2812A10)
#define UISCENARIOMODE_VOLUME_ONPAGEDOWN_OFFSET UNITYSDK_OFFSET(0x2812A20)
#define UISCENARIOMODE_VOLUME_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x2812B30)
#define UISCENARIOMODE_VOLUME_SETLASTVOLUMEID_OFFSET UNITYSDK_OFFSET(0x2812BD0)
#define UISCENARIOMODE_VOLUME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2812140)
#define UISCENARIOMODE_VOLUME_SETACTIVEBUTTONS_OFFSET UNITYSDK_OFFSET(0x2811520)
#define UISCENARIOMODE_VOLUME_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2812C90)
#define UISCENARIOMODE_VOLUME_GET_VOLUMESET_OFFSET UNITYSDK_OFFSET(0x2811680)
#define UISCENARIOMODE_VOLUME_INITVOLUMEIDS_OFFSET UNITYSDK_OFFSET(0x2812CA0)
#define UISCENARIOMODE_VOLUME_SET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x2812E80)
#define UISCENARIOMODE_VOLUME_ONPAGEUP_OFFSET UNITYSDK_OFFSET(0x2812E90)
#define UISCENARIOMODE_VOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FDEC0)
#define UISCENARIOMODE_VOLUME_SETVOLUMECONTENTS_OFFSET UNITYSDK_OFFSET(0x28122F0)
#define UISCENARIOMODE_VOLUME__GET_VOLUMESET_B__4_0_OFFSET UNITYSDK_OFFSET(0x2814260)
#define UISCENARIOMODE_VOLUME_SET_MAXPAGE_OFFSET UNITYSDK_OFFSET(0x2814280)
#define UISCENARIOMODE_VOLUME_INITVOLUMESETS_OFFSET UNITYSDK_OFFSET(0x2812BF0)
#define UISCENARIOMODE_VOLUME_SET_CURRENTPAGE_OFFSET UNITYSDK_OFFSET(0x2814290)
#define UISCENARIOMODE_VOLUME_ONBACK_OFFSET UNITYSDK_OFFSET(0x28142A0)
#define UISCENARIOMODE_VOLUME_SWIPE_OFFSET UNITYSDK_OFFSET(0x2814300)
#define UISCENARIOMODE_VOLUME__INITVOLUMESETS_B__39_0_OFFSET UNITYSDK_OFFSET(0x2814370)
#define UISCENARIOMODE_VOLUME_GET_LASTVOLUMEID_OFFSET UNITYSDK_OFFSET(0x28143E0)

	inline static constexpr unsigned int UIScenarioMode_Volume_TypeDefinitionIndex = 7800;

	class UIScenarioMode_Volume : public Il2CppObject
	{
	public:
		::System::Int64 EVENT_MEETUP_VOL_ID; // 0x0
		UILabel* title; // 0xD8
		Il2CppObject* typeVolumes; // 0xE0
		MXButton* nextButton; // 0xE8
		MXButton* prevButton; // 0xF0
		::UnityEngine::Animation* pageAnimation; // 0xF8
		::System::Boolean SearchLastVolume; // 0x100
		::FlatData::ScenarioModeTypes* _Type; // 0x104
		::FlatData::ScenarioModeReplayTypes* _ReplayType_k__BackingField; // 0x108
		Il2CppObject* volumeIds; // 0x110
		::System::Int32 _CurrentPage_k__BackingField; // 0x118
		::System::Int32 _MaxPage_k__BackingField; // 0x11C
		::System::Int64 _LastVolumeId_k__BackingField; // 0x120
		::System::Boolean initialized; // 0x128

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnPageEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_ONPAGEEND_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxPage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GET_MAXPAGE_OFFSET))(nullptr);
		}

		::System::Void set_LastVolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SET_LASTVOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VolumesPerPage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GET_VOLUMESPERPAGE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void InitPages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_INITPAGES_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareVolumeCanWatch(::MX::Data::ScenarioModeData* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Int32(*)(::MX::Data::ScenarioModeData*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_COMPAREVOLUMECANWATCH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_ONOPENED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVolumeIds(::MX::Data::ScenarioModeData* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::ScenarioModeData*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GETVOLUMEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GET_CURRENTPAGE_OFFSET))(nullptr);
		}

		::System::Void OnPageDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_ONPAGEDOWN_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void SetLastVolumeId(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SETLASTVOLUMEID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetActiveButtons(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SETACTIVEBUTTONS_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GET_TYPE_OFFSET))(nullptr);
		}

		UIScenarioMode_VolumeSet* get_VolumeSet()
		{
			return ((UIScenarioMode_VolumeSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GET_VOLUMESET_OFFSET))(nullptr);
		}

		::System::Void InitVolumeIds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_INITVOLUMEIDS_OFFSET))(nullptr);
		}

		::System::Void set_ReplayType(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SET_REPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPageUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_ONPAGEUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetVolumeContents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SETVOLUMECONTENTS_OFFSET))(nullptr);
		}

		::System::Boolean _get_VolumeSet_b__4_0(UIScenarioMode_VolumeSet* arg)
		{
			return ((::System::Boolean(*)(UIScenarioMode_VolumeSet*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME__GET_VOLUMESET_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SET_MAXPAGE_OFFSET))(arg, nullptr);
		}

		::System::Void InitVolumeSets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_INITVOLUMESETS_OFFSET))(nullptr);
		}

		::System::Void set_CurrentPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SET_CURRENTPAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_SWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void _InitVolumeSets_b__39_0(UIScenarioMode_VolumeSet* arg)
		{
			((::System::Void(*)(UIScenarioMode_VolumeSet*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME__INITVOLUMESETS_B__39_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LastVolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUME_GET_LASTVOLUMEID_OFFSET))(nullptr);
		}

	};

