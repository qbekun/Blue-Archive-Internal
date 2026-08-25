#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Animates { class TweenTiming; }
namespace MXStudio::LipSync::Commons { class MouthShape; }

#define MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9443E20)
#define MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_INSERTTWEENS_OFFSET UNITYSDK_OFFSET(0x943D430)
#define MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_GETTRANSITIONTIMINGCALCULATOR_OFFSET UNITYSDK_OFFSET(0x94442A0)
#define MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_GETTWEEN_OFFSET UNITYSDK_OFFSET(0x94445B0)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int TweeningOptimizer_TypeDefinitionIndex = 36893;

	class TweeningOptimizer : public Il2CppObject
	{
	public:
		Il2CppObject* tweenInfoByTransition; // 0x0
		::System::Int32 tweeningThreshold; // 0x0
		::System::Int32 maxTweenDuration; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* InsertTweens(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_INSERTTWEENS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTransitionTimingCalculator(::MXStudio::LipSync::Animates::TweenTiming* arg)
		{
			return (return (Il2CppObject*(*)(::MXStudio::LipSync::Animates::TweenTiming*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_GETTRANSITIONTIMINGCALCULATOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTween(::MXStudio::LipSync::Commons::MouthShape* arg, ::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (Il2CppObject*(*)(::MXStudio::LipSync::Commons::MouthShape*, ::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TWEENINGOPTIMIZER_GETTWEEN_OFFSET))(arg, arg, nullptr);
		}

	};
}

