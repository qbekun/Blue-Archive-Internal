#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MINPOS_OFFSET UNITYSDK_OFFSET(0x2835D50)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_UPDATECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x2835D60)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_RESET_OFFSET UNITYSDK_OFFSET(0x2836030)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_LOOPED_OFFSET UNITYSDK_OFFSET(0x2836110)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MAXPOS_OFFSET UNITYSDK_OFFSET(0x2836120)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x2836160)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_ROLLAROUNDFORWARD_OFFSET UNITYSDK_OFFSET(0x2836170)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x28361D0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_INVALIDATEDISTANCECACHE_OFFSET UNITYSDK_OFFSET(0x28361F0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEORIENTATION_OFFSET UNITYSDK_OFFSET(0x2836230)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATETANGENT_OFFSET UNITYSDK_OFFSET(0x28366B0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x2836990)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2836C10)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GETBOUNDINGINDICES_OFFSET UNITYSDK_OFFSET(0x28365B0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSmoothPath_TypeDefinitionIndex = 34228;

	class CinemachineSmoothPath : public Il2CppObject
	{
	public:
		::System::Boolean m_Looped; // 0x48
		::Il2CppArray<::System::Object*>* m_Waypoints; // 0x50
		::Il2CppArray<::System::Object*>* m_ControlPoints1; // 0x58
		::Il2CppArray<::System::Object*>* m_ControlPoints2; // 0x60
		::System::Boolean m_IsLoopedCache; // 0x68

		::System::Single get_MinPos()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MINPOS_OFFSET))(nullptr);
		}

		::System::Void UpdateControlPoints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_UPDATECONTROLPOINTS_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_Looped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_LOOPED_OFFSET))(nullptr);
		}

		::System::Single get_MaxPos()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MAXPOS_OFFSET))(nullptr);
		}

		::System::Int32 get_DistanceCacheSampleStepsPerSegment()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* RollAroundForward(::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_ROLLAROUNDFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void InvalidateDistanceCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_INVALIDATEDISTANCECACHE_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* EvaluateOrientation(::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEORIENTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* EvaluateTangent(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATETANGENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* EvaluatePosition(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetBoundingIndices(::System::Single arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Single(*)(::System::Single, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GETBOUNDINGINDICES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

