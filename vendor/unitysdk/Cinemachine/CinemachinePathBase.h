#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINEPATHBASE_GET_MAXPOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEPATHBASE_FINDCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x285B150)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATIONATUNIT_OFFSET UNITYSDK_OFFSET(0x285B670)
#define CINEMACHINE_CINEMACHINEPATHBASE_RESAMPLEPATH_OFFSET UNITYSDK_OFFSET(0x285B9A0)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEUNIT_OFFSET UNITYSDK_OFFSET(0x285BE70)
#define CINEMACHINE_CINEMACHINEPATHBASE_FROMPATHNATIVEUNITS_OFFSET UNITYSDK_OFFSET(0x285C1D0)
#define CINEMACHINE_CINEMACHINEPATHBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285C410)
#define CINEMACHINE_CINEMACHINEPATHBASE_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x285C110)
#define CINEMACHINE_CINEMACHINEPATHBASE_DISTANCECACHEISVALID_OFFSET UNITYSDK_OFFSET(0x285C4D0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEPATHBASE_INVALIDATEDISTANCECACHE_OFFSET UNITYSDK_OFFSET(0x285C550)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITIONATUNIT_OFFSET UNITYSDK_OFFSET(0x285C590)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPOS_OFFSET UNITYSDK_OFFSET(0x285C5D0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEPATHBASE_GET_MINPOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEPATHBASE_GET_LOOPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPATHDISTANCE_OFFSET UNITYSDK_OFFSET(0x285BFD0)
#define CINEMACHINE_CINEMACHINEPATHBASE_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_CINEMACHINEPATHBASE_MINUNIT_OFFSET UNITYSDK_OFFSET(0x285C6A0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENTATUNIT_OFFSET UNITYSDK_OFFSET(0x285C6C0)
#define CINEMACHINE_CINEMACHINEPATHBASE_MAXUNIT_OFFSET UNITYSDK_OFFSET(0x285C700)
#define CINEMACHINE_CINEMACHINEPATHBASE_TONATIVEPATHUNITS_OFFSET UNITYSDK_OFFSET(0x285B6B0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePathBase_TypeDefinitionIndex = 34301;

	class CinemachinePathBase : public Il2CppObject
	{
	public:
		::System::Int32 m_Resolution; // 0x18
		Appearance* m_Appearance; // 0x20
		::Il2CppArray<::System::Object*>* m_DistanceToPos; // 0x28
		::Il2CppArray<::System::Object*>* m_PosToDistance; // 0x30
		::System::Int32 m_CachedSampleSteps; // 0x38
		::System::Single m_PathLength; // 0x3C
		::System::Single m_cachedPosStepSize; // 0x40
		::System::Single m_cachedDistanceStepSize; // 0x44

		::System::Single get_MaxPos()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_GET_MAXPOS_OFFSET))(nullptr);
		}

		::System::Single FindClosestPoint(::UnityEngine::Vector3* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_FINDCLOSESTPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* EvaluateOrientationAtUnit(::System::Single arg, PositionUnits* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Single, PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATIONATUNIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResamplePath(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_RESAMPLEPATH_OFFSET))(arg, nullptr);
		}

		::System::Single StandardizeUnit(::System::Single arg, PositionUnits* arg)
		{
			return (return (::System::Single(*)(::System::Single, PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEUNIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single FromPathNativeUnits(::System::Single arg, PositionUnits* arg)
		{
			return (return (::System::Single(*)(::System::Single, PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_FROMPATHNATIVEUNITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_PathLength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_GET_PATHLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean DistanceCacheIsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_DISTANCECACHEISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* EvaluateOrientation(::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void InvalidateDistanceCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_INVALIDATEDISTANCECACHE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* EvaluatePositionAtUnit(::System::Single arg, PositionUnits* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITIONATUNIT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* EvaluateTangent(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENT_OFFSET))(arg, nullptr);
		}

		::System::Single StandardizePos(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPOS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* EvaluatePosition(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinPos()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_GET_MINPOS_OFFSET))(nullptr);
		}

		::System::Boolean get_Looped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_GET_LOOPED_OFFSET))(nullptr);
		}

		::System::Single StandardizePathDistance(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPATHDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DistanceCacheSampleStepsPerSegment()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET))(nullptr);
		}

		::System::Single MinUnit(PositionUnits* arg)
		{
			return (return (::System::Single(*)(PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_MINUNIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* EvaluateTangentAtUnit(::System::Single arg, PositionUnits* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENTATUNIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single MaxUnit(PositionUnits* arg)
		{
			return (return (::System::Single(*)(PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_MAXUNIT_OFFSET))(arg, nullptr);
		}

		::System::Single ToNativePathUnits(::System::Single arg, PositionUnits* arg)
		{
			return (return (::System::Single(*)(::System::Single, PositionUnits*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_TONATIVEPATHUNITS_OFFSET))(arg, arg, nullptr);
		}

	};
}

