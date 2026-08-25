#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Rect; }

#define BAKEDSOLUTION_DOESINTERSECTORIGINAL_OFFSET UNITYSDK_OFFSET(0x2860900)
#define BAKEDSOLUTION_INTPOINTDIFFSQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x2860E30)
#define BAKEDSOLUTION_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x2860E70)
#define BAKEDSOLUTION_ISINSIDEORIGINAL_OFFSET UNITYSDK_OFFSET(0x2860F50)
#define BAKEDSOLUTION_ISVALID_OFFSET UNITYSDK_OFFSET(0x2861010)
#define BAKEDSOLUTION_GET_FRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x2861040)
#define BAKEDSOLUTION_CONFINEPOINT_OFFSET UNITYSDK_OFFSET(0x2861050)
#define BAKEDSOLUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x285FE70)
#define BAKEDSOLUTION_INTPOINTLERP_OFFSET UNITYSDK_OFFSET(0x2861560)
#define BAKEDSOLUTION_FINDINTERSECTION_OFFSET UNITYSDK_OFFSET(0x2860B60)
#define BAKEDSOLUTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x28617F0)

	inline static constexpr unsigned int BakedSolution_TypeDefinitionIndex = 34319;

	class BakedSolution : public Il2CppObject
	{
	public:
		::System::Single _FrustumHeight_k__BackingField; // 0x10
		::System::Single m_frustumSizeIntSpace; // 0x14
		AspectStretcher* m_AspectStretcher; // 0x18
		::System::Boolean m_HasBones; // 0x24
		::System::Double m_SqrPolygonDiagonal; // 0x28
		Il2CppObject* m_OriginalPolygon; // 0x30
		Il2CppObject* m_Solution; // 0x38
		::System::Double k_ClipperEpsilon; // 0x0

		::System::Boolean DoesIntersectOriginal(IntPoint* arg, IntPoint* arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_DOESINTERSECTORIGINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Double IntPointDiffSqrMagnitude(IntPoint* arg, IntPoint* arg)
		{
			return (return (::System::Double(*)(IntPoint*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_INTPOINTDIFFSQRMAGNITUDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ClosestPointOnSegment(IntPoint* arg, IntPoint* arg, IntPoint* arg)
		{
			return (return (::System::Single(*)(IntPoint*, IntPoint*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_CLOSESTPOINTONSEGMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsInsideOriginal(IntPoint* arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_ISINSIDEORIGINAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Single get_FrustumHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_GET_FRUSTUMHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* ConfinePoint(::UnityEngine::Vector2&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_CONFINEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::UnityEngine::Rect* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Rect*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		IntPoint* IntPointLerp(IntPoint* arg, IntPoint* arg, ::System::Single arg)
		{
			return (return (IntPoint*(*)(IntPoint*, IntPoint*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_INTPOINTLERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindIntersection(IntPoint&* arg, IntPoint&* arg, IntPoint&* arg, IntPoint&* arg)
		{
			return (return (::System::Int32(*)(IntPoint&*, IntPoint&*, IntPoint&*, IntPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_FINDINTERSECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKEDSOLUTION_CLEAR_OFFSET))(nullptr);
		}

	};

