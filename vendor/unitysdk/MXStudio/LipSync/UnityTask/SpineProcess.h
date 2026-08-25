#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::UnityTask { class SpineMouthInfo; }
namespace Spine { class SkeletonData; }
namespace MXStudio::LipSync::Commons { class MouthShape; }

#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_EXTRACTSCALEKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x9438E10)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_CONVERTTOSPINETIMELINES_OFFSET UNITYSDK_OFFSET(0x9439920)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_ADDMOUTHANIMATION_OFFSET UNITYSDK_OFFSET(0x9437B40)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_GETSHAPESCALE_OFFSET UNITYSDK_OFFSET(0x9439730)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int SpineProcess_TypeDefinitionIndex = 36862;

	class SpineProcess : public Il2CppObject
	{
	public:
		::System::Int32 transitionDuration; // 0x0

		Il2CppObject* ExtractScaleKeyframes(Il2CppObject* arg, ::MXStudio::LipSync::UnityTask::SpineMouthInfo* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::MXStudio::LipSync::UnityTask::SpineMouthInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_EXTRACTSCALEKEYFRAMES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ConvertToSpineTimelines(Il2CppObject* arg, ::MXStudio::LipSync::UnityTask::SpineMouthInfo* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::MXStudio::LipSync::UnityTask::SpineMouthInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_CONVERTTOSPINETIMELINES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMouthAnimation(::Spine::SkeletonData* arg, Il2CppObject* arg, ::System::String* str, ::MXStudio::LipSync::UnityTask::SpineMouthInfo* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, Il2CppObject*, ::System::String*, ::MXStudio::LipSync::UnityTask::SpineMouthInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_ADDMOUTHANIMATION_OFFSET))(arg, arg, str, arg, nullptr);
		}

		Il2CppObject* GetShapeScale(::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (Il2CppObject*(*)(::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINEPROCESS_GETSHAPESCALE_OFFSET))(arg, nullptr);
		}

	};
}

