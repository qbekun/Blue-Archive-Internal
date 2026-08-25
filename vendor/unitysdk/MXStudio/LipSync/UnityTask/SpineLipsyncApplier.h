#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::UnityTask { class SpineNameSetting; }
namespace Spine { class SkeletonData; }

#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINELIPSYNCAPPLIER_APPLY_OFFSET UNITYSDK_OFFSET(0x9438440)
#define MXSTUDIO_LIPSYNC_UNITYTASK_SPINELIPSYNCAPPLIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9438450)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int SpineLipsyncApplier_TypeDefinitionIndex = 36859;

	class SpineLipsyncApplier : public Il2CppObject
	{
	public:
		::MXStudio::LipSync::UnityTask::SpineNameSetting* nameSetting; // 0x18

		::System::Void Apply(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINELIPSYNCAPPLIER_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_SPINELIPSYNCAPPLIER_.CTOR_OFFSET))(nullptr);
		}

	};
}

