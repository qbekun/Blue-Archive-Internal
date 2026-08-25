#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class MouthShape; }

#define MXSTUDIO_LIPSYNC_ANIMATES_PAUSEOPTIMIZER_ANIMATEPAUSES_OFFSET UNITYSDK_OFFSET(0x943D170)
#define MXSTUDIO_LIPSYNC_ANIMATES_PAUSEOPTIMIZER_FINDRELAXEDPAUSESHAPE_OFFSET UNITYSDK_OFFSET(0x943D700)
#define MXSTUDIO_LIPSYNC_ANIMATES_PAUSEOPTIMIZER_GETPAUSESHAPE_OFFSET UNITYSDK_OFFSET(0x943D740)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int PauseOptimizer_TypeDefinitionIndex = 36872;

	class PauseOptimizer : public Il2CppObject
	{
	public:
		::System::Int32 blinkPauseDuration; // 0x0
		::System::Int32 shortPauseDuration; // 0x0

		Il2CppObject* AnimatePauses(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_PAUSEOPTIMIZER_ANIMATEPAUSES_OFFSET))(arg, nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* FindRelaxedPauseShape(::MXStudio::LipSync::Commons::MouthShape* arg, ::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(::MXStudio::LipSync::Commons::MouthShape*, ::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_PAUSEOPTIMIZER_FINDRELAXEDPAUSESHAPE_OFFSET))(arg, arg, nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* GetPauseShape(::MXStudio::LipSync::Commons::MouthShape* arg, ::MXStudio::LipSync::Commons::MouthShape* arg, ::System::Int32 arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(::MXStudio::LipSync::Commons::MouthShape*, ::MXStudio::LipSync::Commons::MouthShape*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_PAUSEOPTIMIZER_GETPAUSESHAPE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

