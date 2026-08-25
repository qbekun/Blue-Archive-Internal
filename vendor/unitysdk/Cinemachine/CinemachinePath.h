#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINEPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x2834E10)
#define CINEMACHINE_CINEMACHINEPATH_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x2834E20)
#define CINEMACHINE_CINEMACHINEPATH_GET_MINPOS_OFFSET UNITYSDK_OFFSET(0x28352D0)
#define CINEMACHINE_CINEMACHINEPATH_GET_LOOPED_OFFSET UNITYSDK_OFFSET(0x28352E0)
#define CINEMACHINE_CINEMACHINEPATH_EVALUATEORIENTATION_OFFSET UNITYSDK_OFFSET(0x28352F0)
#define CINEMACHINE_CINEMACHINEPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x28356F0)
#define CINEMACHINE_CINEMACHINEPATH_GET_MAXPOS_OFFSET UNITYSDK_OFFSET(0x2835750)
#define CINEMACHINE_CINEMACHINEPATH_EVALUATETANGENT_OFFSET UNITYSDK_OFFSET(0x2835790)
#define CINEMACHINE_CINEMACHINEPATH_RESET_OFFSET UNITYSDK_OFFSET(0x2835A40)
#define CINEMACHINE_CINEMACHINEPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2835B40)
#define CINEMACHINE_CINEMACHINEPATH_GETBOUNDINGINDICES_OFFSET UNITYSDK_OFFSET(0x2835060)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePath_TypeDefinitionIndex = 34224;

	class CinemachinePath : public Il2CppObject
	{
	public:
		::System::Boolean m_Looped; // 0x48
		::Il2CppArray<::System::Object*>* m_Waypoints; // 0x50

		::System::Int32 get_DistanceCacheSampleStepsPerSegment()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* EvaluatePosition(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_EVALUATEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinPos()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_MINPOS_OFFSET))(nullptr);
		}

		::System::Boolean get_Looped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_LOOPED_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* EvaluateOrientation(::System::Single arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_EVALUATEORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_MaxPos()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_MAXPOS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* EvaluateTangent(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_EVALUATETANGENT_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_RESET_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Single GetBoundingIndices(::System::Single arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Single(*)(::System::Single, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GETBOUNDINGINDICES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

