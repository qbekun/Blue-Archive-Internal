#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace Spine { class TranslateTimeline; }
namespace Spine { class SkeletonData; }
namespace Spine { class TranslateXTimeline; }
namespace Spine { class TranslateYTimeline; }
namespace Spine { class RotateTimeline; }
namespace Spine { class TransformConstraintTimeline; }
namespace Spine { class Animation; }

#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9620A70)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9620B80)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9620C90)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATETRANSLATEXYMIX_OFFSET UNITYSDK_OFFSET(0x9620D20)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATEROTATEMIX_OFFSET UNITYSDK_OFFSET(0x9620E30)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSLATETIMELINEFORBONE_OFFSET UNITYSDK_OFFSET(0x9620EF0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTIMELINEFORBONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSFORMCONSTRAINTTIMELINE_OFFSET UNITYSDK_OFFSET(0x9621150)

namespace Spine::Unity::AnimationTools
{
	inline static constexpr unsigned int TimelineExtensions_TypeDefinitionIndex = 35385;

	class TimelineExtensions : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Evaluate(::Spine::TranslateTimeline* arg, ::System::Single arg, ::Spine::SkeletonData* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::TranslateTimeline*, ::System::Single, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Evaluate(::Spine::TranslateXTimeline* arg, ::Spine::TranslateYTimeline* arg, ::System::Single arg, ::Spine::SkeletonData* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::TranslateXTimeline*, ::Spine::TranslateYTimeline*, ::System::Single, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single Evaluate(::Spine::RotateTimeline* arg, ::System::Single arg, ::Spine::SkeletonData* arg)
		{
			return (return (::System::Single(*)(::Spine::RotateTimeline*, ::System::Single, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* EvaluateTranslateXYMix(::Spine::TransformConstraintTimeline* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::TransformConstraintTimeline*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATETRANSLATEXYMIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Single EvaluateRotateMix(::Spine::TransformConstraintTimeline* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::Spine::TransformConstraintTimeline*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATEROTATEMIX_OFFSET))(arg, arg, nullptr);
		}

		::Spine::TranslateTimeline* FindTranslateTimelineForBone(::Spine::Animation* arg, ::System::Int32 arg)
		{
			return (return (::Spine::TranslateTimeline*(*)(::Spine::Animation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSLATETIMELINEFORBONE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FindTimelineForBone(::Spine::Animation* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Spine::Animation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTIMELINEFORBONE_OFFSET))(arg, arg, nullptr);
		}

		::Spine::TransformConstraintTimeline* FindTransformConstraintTimeline(::Spine::Animation* arg, ::System::Int32 arg)
		{
			return (return (::Spine::TransformConstraintTimeline*(*)(::Spine::Animation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSFORMCONSTRAINTTIMELINE_OFFSET))(arg, arg, nullptr);
		}

	};
}

