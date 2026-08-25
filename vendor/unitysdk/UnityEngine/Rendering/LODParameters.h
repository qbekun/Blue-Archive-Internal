#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::Rendering { class LODParameters; }

#define UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25C260)
#define UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25E2D0)
#define UNITYENGINE_RENDERING_LODPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25CBE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LODParameters_TypeDefinitionIndex = 31556;

	class LODParameters : public Il2CppObject
	{
	public:
		::System::Int32 m_IsOrthographic; // 0x10
		::UnityEngine::Vector3* m_CameraPosition; // 0x14
		::System::Single m_FieldOfView; // 0x20
		::System::Single m_OrthoSize; // 0x24
		::System::Int32 m_CameraPixelHeight; // 0x28

		::System::Boolean Equals(::UnityEngine::Rendering::LODParameters* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::LODParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

