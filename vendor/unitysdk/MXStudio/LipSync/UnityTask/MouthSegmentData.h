#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class MouthShape; }
namespace MXStudio::LipSync::UnityTask { class MouthSegmentData; }

#define MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHSEGMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9437F50)
#define MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHSEGMENTDATA_TOTIMEDMOUTH_OFFSET UNITYSDK_OFFSET(0x9437ED0)
#define MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHSEGMENTDATA_FROMTIMEDMOUTH_OFFSET UNITYSDK_OFFSET(0x9437DA0)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int MouthSegmentData_TypeDefinitionIndex = 36845;

	class MouthSegmentData : public Il2CppObject
	{
	public:
		::System::Int32 begin; // 0x10
		::System::Int32 end; // 0x14
		::MXStudio::LipSync::Commons::MouthShape* shape; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHSEGMENTDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ToTimedMouth()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHSEGMENTDATA_TOTIMEDMOUTH_OFFSET))(nullptr);
		}

		::MXStudio::LipSync::UnityTask::MouthSegmentData* FromTimedMouth(Il2CppObject* arg)
		{
			return (return (::MXStudio::LipSync::UnityTask::MouthSegmentData*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHSEGMENTDATA_FROMTIMEDMOUTH_OFFSET))(arg, nullptr);
		}

	};
}

