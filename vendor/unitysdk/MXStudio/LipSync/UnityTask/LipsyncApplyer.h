#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::UnityTask { class SpineNameSetting; }
namespace MXStudio::LipSync::UnityTask { class MouthAnimationDict; }
namespace MXStudio::LipSync::UnityTask { class MouthAnimationData; }
namespace Spine { class SkeletonData; }

#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_GET_ANIMATEDCLIPNAMES_OFFSET UNITYSDK_OFFSET(0x9436BD0)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_CLEARANIMATION_OFFSET UNITYSDK_OFFSET(0x9436C30)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x9436C80)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x9436CF0)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_DUPLICATEANIMATIONWITHDIFFRENTSHAPENAME_OFFSET UNITYSDK_OFFSET(0x9436F80)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_APPLY_OFFSET UNITYSDK_OFFSET(0x9437460)
#define MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9437C30)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int LipsyncApplyer_TypeDefinitionIndex = 36842;

	class LipsyncApplyer : public Il2CppObject
	{
	public:
		::MXStudio::LipSync::UnityTask::SpineNameSetting* defaultNameSetting; // 0x18
		::MXStudio::LipSync::UnityTask::MouthAnimationDict* animations; // 0x38

		Il2CppObject* get_AnimatedClipNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_GET_ANIMATEDCLIPNAMES_OFFSET))(nullptr);
		}

		::System::Void ClearAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_CLEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void AddAnimation(::System::String* str, ::MXStudio::LipSync::UnityTask::MouthAnimationData* arg)
		{
			((::System::Void(*)(::System::String*, ::MXStudio::LipSync::UnityTask::MouthAnimationData*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_ADDANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddAnimation(::System::String* str, Il2CppObject* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_ADDANIMATION_OFFSET))(str, arg, str, str, nullptr);
		}

		::System::Void DuplicateAnimationWithDiffrentShapeName(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_DUPLICATEANIMATIONWITHDIFFRENTSHAPENAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void Apply(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_LIPSYNCAPPLYER_.CTOR_OFFSET))(nullptr);
		}

	};
}

