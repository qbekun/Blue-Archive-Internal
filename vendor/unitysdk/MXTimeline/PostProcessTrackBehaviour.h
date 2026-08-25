#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace UnityEngine { class GameObject; }
namespace MXTimeline { class FloatClampTimelineParameter; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE03D10)
#define MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE03DF0)
#define MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00F80)
#define MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_UNOVERRIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xE01490)
#define MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_VOLUMESETTING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXTimeline
{
	inline static constexpr unsigned int PostProcessTrackBehaviour_TypeDefinitionIndex = 10244;

	class PostProcessTrackBehaviour : public Il2CppObject
	{
	public:
		::System::String* PostProcessingLayerName; // 0x0
		::UnityEngine::Rendering::Volume* volume; // 0x10
		::UnityEngine::Rendering::VolumeProfile* volumeProfile; // 0x18
		::System::Single totalWeight; // 0x20
		::System::Single progress; // 0x24
		::UnityEngine::GameObject* owner; // 0x28
		::System::Boolean autoDeActivate; // 0x30
		::MXTimeline::FloatClampTimelineParameter* weight; // 0x38

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UnOverride(::UnityEngine::Rendering::VolumeComponent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeComponent*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_UNOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void VolumeSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKBEHAVIOUR_VOLUMESETTING_OFFSET))(nullptr);
		}

	};
}

