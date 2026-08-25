#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class TimeRange; }

#define MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_GETNEXTMINIMALCANDIDATERANGE_OFFSET UNITYSDK_OFFSET(0x9442E50)
#define MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_GETNEXTSHAPEREDUCTION_OFFSET UNITYSDK_OFFSET(0x94430C0)
#define MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_RETIME_OFFSET UNITYSDK_OFFSET(0x94433E0)
#define MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_RETIME_OFFSET UNITYSDK_OFFSET(0x94436D0)
#define MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_OPTIMIZETIMING_OFFSET UNITYSDK_OFFSET(0x943BF40)
#define MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9443760)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int TimingOptimizer_TypeDefinitionIndex = 36889;

	class TimingOptimizer : public Il2CppObject
	{
	public:
		::System::Int32 minShapeDuration; // 0x0
		::System::Int32 minSegmentDuration; // 0x4
		::System::Int32 maxExtensionDuration; // 0x8

		::MXStudio::LipSync::Commons::TimeRange* GetNextMinimalCandidateRange(Il2CppObject* arg, ::MXStudio::LipSync::Commons::TimeRange* arg, ::System::Int32 arg)
		{
			return (return (::MXStudio::LipSync::Commons::TimeRange*(*)(Il2CppObject*, ::MXStudio::LipSync::Commons::TimeRange*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_GETNEXTMINIMALCANDIDATERANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		ShapeReduction* GetNextShapeReduction(Il2CppObject* arg, ::MXStudio::LipSync::Commons::TimeRange* arg, ::System::Int32 arg)
		{
			return (return (ShapeReduction*(*)(Il2CppObject*, ::MXStudio::LipSync::Commons::TimeRange*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_GETNEXTSHAPEREDUCTION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Retime(Il2CppObject* arg, ::MXStudio::LipSync::Commons::TimeRange* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::MXStudio::LipSync::Commons::TimeRange*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_RETIME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Retime(Il2CppObject* arg, ::MXStudio::LipSync::Commons::TimeRange* arg, ::MXStudio::LipSync::Commons::TimeRange* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::MXStudio::LipSync::Commons::TimeRange*, ::MXStudio::LipSync::Commons::TimeRange*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_RETIME_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* OptimizeTiming(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_OPTIMIZETIMING_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_TIMINGOPTIMIZER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

