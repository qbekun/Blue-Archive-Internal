#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
class FocusingType;
namespace MXTimeline { class FloatMinTimelineParameter; }
namespace MXTimeline { class FloatClampTimelineParameter; }
namespace MXTimeline { class BoolTimelineParameter; }
namespace MXTimeline { class FloatTimelineParameter; }
namespace MXTimeline { class IntClampTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFF9C0)
#define MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xDFFA10)
#define MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xDFFA90)
#define MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE004C0)
#define MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00680)

namespace MXTimeline
{
	inline static constexpr unsigned int DepthOfFieldBehaviour_TypeDefinitionIndex = 10210;

	class DepthOfFieldBehaviour : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x58
		FocusingType* focusingType; // 0x60
		Il2CppObject* mode; // 0x64
		::MXTimeline::FloatMinTimelineParameter* gaussianStart; // 0x70
		::MXTimeline::FloatMinTimelineParameter* gaussianEnd; // 0x88
		::MXTimeline::FloatClampTimelineParameter* gaussianMaxRadius; // 0xA0
		::MXTimeline::BoolTimelineParameter* highQualitySampling; // 0xC0
		::MXTimeline::FloatTimelineParameter* focusDistance; // 0xC8
		::MXTimeline::FloatClampTimelineParameter* focalLength; // 0xE0
		::MXTimeline::FloatClampTimelineParameter* aperture; // 0x100
		::MXTimeline::IntClampTimelineParameter* bladeCount; // 0x120
		::MXTimeline::FloatClampTimelineParameter* bladeCurvature; // 0x130
		::MXTimeline::FloatClampTimelineParameter* bladeRotation; // 0x150
		::MXTimeline::BoolTimelineParameter* debugView; // 0x170
		::UnityEngine::Rendering::Universal::DepthOfField* depthOfFieldStack; // 0x178
		::System::Single prevFocusDistance; // 0x180
		::System::Single prevFocalLength; // 0x184
		::System::Single prevAperture; // 0x188

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2, ::System::Object* arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_DEPTHOFFIELDBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

