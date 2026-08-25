#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class XRNode; }
namespace UnityEngine::XR { class AvailableTrackingData; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define UNITYENGINE_XR_XRNODESTATE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA4AB670)
#define UNITYENGINE_XR_XRNODESTATE_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xA4AB680)
#define UNITYENGINE_XR_XRNODESTATE_SET_TRACKED_OFFSET UNITYSDK_OFFSET(0xA4AB690)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRNodeState_TypeDefinitionIndex = 37589;

	class XRNodeState : public Il2CppObject
	{
	public:
		::UnityEngine::XR::XRNode* m_Type; // 0x10
		::UnityEngine::XR::AvailableTrackingData* m_AvailableFields; // 0x14
		::UnityEngine::Vector3* m_Position; // 0x18
		::UnityEngine::Quaternion* m_Rotation; // 0x24
		::UnityEngine::Vector3* m_Velocity; // 0x34
		::UnityEngine::Vector3* m_AngularVelocity; // 0x40
		::UnityEngine::Vector3* m_Acceleration; // 0x4C
		::UnityEngine::Vector3* m_AngularAcceleration; // 0x58
		::System::Int32 m_Tracked; // 0x64
		::System::UInt64 m_UniqueID; // 0x68

		::System::Void set_uniqueID(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRNODESTATE_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_nodeType(::UnityEngine::XR::XRNode* arg)
		{
			((::System::Void(*)(::UnityEngine::XR::XRNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRNODESTATE_SET_NODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_tracked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRNODESTATE_SET_TRACKED_OFFSET))(arg, nullptr);
		}

	};
}

