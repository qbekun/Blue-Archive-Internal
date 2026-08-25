#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHANIMATIONDICT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9437CC0)

namespace MXStudio::LipSync::UnityTask
{
	inline static constexpr unsigned int MouthAnimationDict_TypeDefinitionIndex = 36843;

	class MouthAnimationDict : public FixupCallbackInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_UNITYTASK_MOUTHANIMATIONDICT_.CTOR_OFFSET))(nullptr);
		}

	};
}

