#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Rendering { class SortingCriteria; }
namespace UnityEngine::Rendering { class DistanceMetric; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class SortingSettings; }

#define UNITYENGINE_RENDERING_SORTINGSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2645D0)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CUSTOMAXIS_OFFSET UNITYSDK_OFFSET(0xA264640)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_GET_CRITERIA_OFFSET UNITYSDK_OFFSET(0xA264630)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CRITERIA_OFFSET UNITYSDK_OFFSET(0xA264650)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_DISTANCEMETRIC_OFFSET UNITYSDK_OFFSET(0xA264660)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA264670)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA264C00)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA264C90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingSettings_TypeDefinitionIndex = 31576;

	class SortingSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* m_WorldToCameraMatrix; // 0x10
		::UnityEngine::Vector3* m_CameraPosition; // 0x50
		::UnityEngine::Vector3* m_CustomAxis; // 0x5C
		::UnityEngine::Rendering::SortingCriteria* m_Criteria; // 0x68
		::UnityEngine::Rendering::DistanceMetric* m_DistanceMetric; // 0x6C
		::UnityEngine::Matrix4x4* m_PreviousVPMatrix; // 0x70
		::UnityEngine::Matrix4x4* m_NonJitteredVPMatrix; // 0xB0

		::System::Void .ctor(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_customAxis(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CUSTOMAXIS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::SortingCriteria* get_criteria()
		{
			return (return (::UnityEngine::Rendering::SortingCriteria*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_GET_CRITERIA_OFFSET))(nullptr);
		}

		::System::Void set_criteria(::UnityEngine::Rendering::SortingCriteria* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SortingCriteria*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CRITERIA_OFFSET))(arg, nullptr);
		}

		::System::Void set_distanceMetric(::UnityEngine::Rendering::DistanceMetric* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::DistanceMetric*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_DISTANCEMETRIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::SortingSettings* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::SortingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

