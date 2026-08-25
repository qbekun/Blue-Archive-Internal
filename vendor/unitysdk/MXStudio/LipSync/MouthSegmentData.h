#pragma once
#include "../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class MouthShape; }
namespace MXStudio::LipSync { class MouthSegmentData; }

#define MXSTUDIO_LIPSYNC_MOUTHSEGMENTDATA_TOTIMEDMOUTH_OFFSET UNITYSDK_OFFSET(0xE04150)
#define MXSTUDIO_LIPSYNC_MOUTHSEGMENTDATA_FROMTIMEDMOUTH_OFFSET UNITYSDK_OFFSET(0xE041D0)
#define MXSTUDIO_LIPSYNC_MOUTHSEGMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE04270)

namespace MXStudio::LipSync
{
	inline static constexpr unsigned int MouthSegmentData_TypeDefinitionIndex = 10247;

	class MouthSegmentData : public Il2CppObject
	{
	public:
		::System::Int32 begin; // 0x10
		::System::Int32 end; // 0x14
		::MXStudio::LipSync::Commons::MouthShape* shape; // 0x18

		Il2CppObject* ToTimedMouth()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_MOUTHSEGMENTDATA_TOTIMEDMOUTH_OFFSET))(nullptr);
		}

		::MXStudio::LipSync::MouthSegmentData* FromTimedMouth(Il2CppObject* arg)
		{
			return ((::MXStudio::LipSync::MouthSegmentData*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_MOUTHSEGMENTDATA_FROMTIMEDMOUTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_MOUTHSEGMENTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

