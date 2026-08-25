#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class TimeRange; }
namespace MXStudio::LipSync::Animates { class ShapeInfo; }

#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETPOSSIBLERULECHANGES_OFFSET UNITYSDK_OFFSET(0x9440E00)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETSYLLABLECOUNT_OFFSET UNITYSDK_OFFSET(0x9441010)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER__EXTENDTOFIXEDRULES_G__ISFLEXIBLE|11_0_OFFSET UNITYSDK_OFFSET(0x9441390)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_FIXSTATICSEGMENTRULES_OFFSET UNITYSDK_OFFSET(0x94413D0)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER__GENERATECOMBINATIONSOFGIVENSIZE_G__GENERATECOMBINATIONSOFGIVENSIZERECURSIVE|9_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_EXTENDTOFIXEDRULES_OFFSET UNITYSDK_OFFSET(0x9441CA0)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GENERATECOMBINATIONSOFGIVENSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETCHANGEDSHAPERULE_OFFSET UNITYSDK_OFFSET(0x9441F40)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_AVOIDSTATICSEGMENTS_OFFSET UNITYSDK_OFFSET(0x943B400)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_APPLYCHANGES_OFFSET UNITYSDK_OFFSET(0x9442630)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_CANCHANGE_OFFSET UNITYSDK_OFFSET(0x9442220)
#define MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETSTATICSEGMENTS_OFFSET UNITYSDK_OFFSET(0x94422C0)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int StaticSegmentsRemover_TypeDefinitionIndex = 36885;

	class StaticSegmentsRemover : public Il2CppObject
	{
	public:
		::System::Int32 minSyllableCount; // 0x0
		::System::Int32 minDuration; // 0x0

		Il2CppObject* GetPossibleRuleChanges(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETPOSSIBLERULECHANGES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSyllableCount(Il2CppObject* arg, ::MXStudio::LipSync::Commons::TimeRange* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::MXStudio::LipSync::Commons::TimeRange*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETSYLLABLECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean _ExtendToFixedRules_g__isFlexible|11_0(::MXStudio::LipSync::Animates::ShapeInfo* arg)
		{
			return (return (::System::Boolean(*)(::MXStudio::LipSync::Animates::ShapeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER__EXTENDTOFIXEDRULES_G__ISFLEXIBLE|11_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FixStaticSegmentRules(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_FIXSTATICSEGMENTRULES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* _GenerateCombinationsOfGivenSize_g__generateCombinationsOfGivenSizeRecursive|9_0(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER__GENERATECOMBINATIONSOFGIVENSIZE_G__GENERATECOMBINATIONSOFGIVENSIZERECURSIVE|9_0_OFFSET))(arg, arg, nullptr);
		}

		::MXStudio::LipSync::Commons::TimeRange* ExtendToFixedRules(::MXStudio::LipSync::Commons::TimeRange* arg, Il2CppObject* arg)
		{
			return (return (::MXStudio::LipSync::Commons::TimeRange*(*)(::MXStudio::LipSync::Commons::TimeRange*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_EXTENDTOFIXEDRULES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GenerateCombinationsOfGivenSize(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GENERATECOMBINATIONSOFGIVENSIZE_OFFSET))(arg, arg, nullptr);
		}

		::MXStudio::LipSync::Animates::ShapeInfo* GetChangedShapeRule(::MXStudio::LipSync::Animates::ShapeInfo* arg)
		{
			return (return (::MXStudio::LipSync::Animates::ShapeInfo*(*)(::MXStudio::LipSync::Animates::ShapeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETCHANGEDSHAPERULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AvoidStaticSegments(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_AVOIDSTATICSEGMENTS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ApplyChanges(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_APPLYCHANGES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanChange(::MXStudio::LipSync::Animates::ShapeInfo* arg)
		{
			return (return (::System::Boolean(*)(::MXStudio::LipSync::Animates::ShapeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_CANCHANGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetStaticSegments(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_STATICSEGMENTSREMOVER_GETSTATICSEGMENTS_OFFSET))(arg, arg, nullptr);
		}

	};
}

