#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Bounds&; }
namespace UnityEngine { class Matrix4x4&; }

#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET UNITYSDK_OFFSET(0xA1EDFC0)
#define UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET UNITYSDK_OFFSET(0xA1EE180)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET UNITYSDK_OFFSET(0xA1EE2D0)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET UNITYSDK_OFFSET(0xA1EE290)
#define UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1EE310)
#define UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1EE350)

namespace UnityEngine
{
	inline static constexpr unsigned int GeometryUtility_TypeDefinitionIndex = 30978;

	class GeometryUtility : public Il2CppObject
	{
	public:
		::System::Void CalculateFrustumPlanes(::UnityEngine::Camera* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CalculateFrustumPlanes(::UnityEngine::Matrix4x4* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_CALCULATEFRUSTUMPLANES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TestPlanesAABB(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_ExtractPlanes(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TestPlanesAABB_Injected(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Bounds&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_TESTPLANESAABB_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_ExtractPlanes_Injected(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GEOMETRYUTILITY_INTERNAL_EXTRACTPLANES_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

