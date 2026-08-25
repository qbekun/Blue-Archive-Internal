#pragma once
#include "../../unitysdk.h"

class TimelineType;
class FinishType;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
class CharacterLight;
namespace UnityEngine { class AudioListener; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine { class Behaviour; }
namespace Mx::Timeline { class TimelineEntityIndex; }

#define MX_TIMELINE_TIMELINEENVIRONMENT_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xE22270)
#define MX_TIMELINE_TIMELINEENVIRONMENT_SWITCHTOGGLE_OFFSET UNITYSDK_OFFSET(0xE22360)
#define MX_TIMELINE_TIMELINEENVIRONMENT__INITACTORS_G__CHANGEPOSITION|24_1_OFFSET UNITYSDK_OFFSET(0xE22410)
#define MX_TIMELINE_TIMELINEENVIRONMENT_COPYLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0xE22790)
#define MX_TIMELINE_TIMELINEENVIRONMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE22870)
#define MX_TIMELINE_TIMELINEENVIRONMENT_INITACTORS_OFFSET UNITYSDK_OFFSET(0xE22890)
#define MX_TIMELINE_TIMELINEENVIRONMENT__INITACTORS_G__SWAPPOSITION|24_2_OFFSET UNITYSDK_OFFSET(0xE22470)
#define MX_TIMELINE_TIMELINEENVIRONMENT_ONPLAYED_OFFSET UNITYSDK_OFFSET(0xE24440)
#define MX_TIMELINE_TIMELINEENVIRONMENT_RETURNTOSCENE_OFFSET UNITYSDK_OFFSET(0xE21FF0)
#define MX_TIMELINE_TIMELINEENVIRONMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xE24890)
#define MX_TIMELINE_TIMELINEENVIRONMENT_FINDAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0xE24800)
#define MX_TIMELINE_TIMELINEENVIRONMENT_SET_SKIPENVIRONMENTSETTING_OFFSET UNITYSDK_OFFSET(0xE24AB0)
#define MX_TIMELINE_TIMELINEENVIRONMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE22260)
#define MX_TIMELINE_TIMELINEENVIRONMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE24AC0)
#define MX_TIMELINE_TIMELINEENVIRONMENT_FINDMAINLIGHT_OFFSET UNITYSDK_OFFSET(0xE24760)
#define MX_TIMELINE_TIMELINEENVIRONMENT_GET_SKIPENVIRONMENTSETTING_OFFSET UNITYSDK_OFFSET(0xE24B10)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineEnvironment_TypeDefinitionIndex = 10373;

	class TimelineEnvironment : public Il2CppObject
	{
	public:
		TimelineType* TimelinePositionType; // 0x18
		FinishType* TimelineFinishType; // 0x1C
		::System::Boolean SkipCameraChangeAfterFinish; // 0x20
		::UnityEngine::Camera* TimelineCamera; // 0x28
		::UnityEngine::Light* TimelineLight; // 0x30
		CharacterLight* TimelineCharLight; // 0x38
		::UnityEngine::AudioListener* TimelineAudioListener; // 0x40
		::System::Boolean UseRendererMatching; // 0x48
		::System::Boolean UseMainLightColor; // 0x49
		::System::Boolean TimelineCharacterVisualUpdate; // 0x4A
		::System::Single screenTransitionTime; // 0x4C
		::System::Boolean _SkipEnvironmentSetting_k__BackingField; // 0x50
		::UnityEngine::Playables::PlayableDirector* director; // 0x58
		::UnityEngine::Light* mainLight; // 0x60
		::UnityEngine::AudioListener* mainAudioListener; // 0x68
		::System::Boolean isPlaying; // 0x70

		::System::Void OnStopped(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_ONSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void SwitchToggle(::UnityEngine::Behaviour* arg, ::UnityEngine::Behaviour* arg2)
		{
			((::System::Void(*)(::UnityEngine::Behaviour*, ::UnityEngine::Behaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_SWITCHTOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _InitActors_g__ChangePosition|24_1(::Mx::Timeline::TimelineEntityIndex* arg, ::Mx::Timeline::TimelineEntityIndex* arg2, <>c__DisplayClass24_0&* arg3)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineEntityIndex*, ::Mx::Timeline::TimelineEntityIndex*, <>c__DisplayClass24_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT__INITACTORS_G__CHANGEPOSITION|24_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CopyLightColor(::UnityEngine::Light* arg, ::UnityEngine::Light* arg2)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_COPYLIGHTCOLOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void InitActors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_INITACTORS_OFFSET))(nullptr);
		}

		::System::Void _InitActors_g__SwapPosition|24_2(::Mx::Timeline::TimelineEntityIndex* arg, ::Mx::Timeline::TimelineEntityIndex* arg2, <>c__DisplayClass24_0&* arg3)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineEntityIndex*, ::Mx::Timeline::TimelineEntityIndex*, <>c__DisplayClass24_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT__INITACTORS_G__SWAPPOSITION|24_2_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnPlayed(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_ONPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void ReturnToScene(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_RETURNTOSCENE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::AudioListener* FindAudioListener()
		{
			return ((::UnityEngine::AudioListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_FINDAUDIOLISTENER_OFFSET))(nullptr);
		}

		::System::Void set_SkipEnvironmentSetting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_SET_SKIPENVIRONMENTSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Light* FindMainLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_FINDMAINLIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipEnvironmentSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEENVIRONMENT_GET_SKIPENVIRONMENTSETTING_OFFSET))(nullptr);
		}

	};
}

