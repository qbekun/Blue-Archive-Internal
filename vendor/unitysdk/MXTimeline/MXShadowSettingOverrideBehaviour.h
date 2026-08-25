#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class FloatTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE02320)
#define MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE024F0)
#define MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xE026F0)
#define MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE027E0)

namespace MXTimeline
{
	inline static constexpr unsigned int MXShadowSettingOverrideBehaviour_TypeDefinitionIndex = 10219;

	class MXShadowSettingOverrideBehaviour : public Il2CppObject
	{
	public:
		::MXTimeline::FloatTimelineParameter* ShadowDistance; // 0x28
		Il2CppObject* CachedShadowDistanceDic; // 0x0
		::System::Single CachedSystemDistance; // 0x8
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* pipelineAsset; // 0x40

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

