#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class MouthShape; }

#define MXSTUDIO_LIPSYNC_ANIMATES_ROUGHANIMATOR_ANIMATEROUGH_OFFSET UNITYSDK_OFFSET(0x943B9B0)
#define MXSTUDIO_LIPSYNC_ANIMATES_ROUGHANIMATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x943DAC0)
#define MXSTUDIO_LIPSYNC_ANIMATES_ROUGHANIMATOR_GETCLOSESTMOUTHSHAPE_OFFSET UNITYSDK_OFFSET(0x943D920)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int RoughAnimator_TypeDefinitionIndex = 36874;

	class RoughAnimator : public Il2CppObject
	{
	public:
		Il2CppObject* closeOrderDictionary; // 0x0
		::System::Int32 maxAnticipationDuration; // 0x0

		Il2CppObject* AnimateRough(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ROUGHANIMATOR_ANIMATEROUGH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ROUGHANIMATOR_.CCTOR_OFFSET))(nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* GetClosestMouthShape(::MXStudio::LipSync::Commons::MouthShape* arg, Il2CppObject* arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(::MXStudio::LipSync::Commons::MouthShape*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_ROUGHANIMATOR_GETCLOSESTMOUTHSHAPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

