#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LODParameters; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Rendering { class CullingOptions; }
namespace UnityEngine::Rendering { class ReflectionProbeSortingCriteria; }
namespace UnityEngine::Rendering { class CameraProperties; }
namespace UnityEngine { class Plane; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters; }

#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_MAXIMUMVISIBLELIGHTS_OFFSET UNITYSDK_OFFSET(0xA25B250)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CONSERVATIVEENCLOSINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA25B260)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_NUMITERATIONSENCLOSINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA25B270)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGPLANECOUNT_OFFSET UNITYSDK_OFFSET(0xA25B280)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGPLANECOUNT_OFFSET UNITYSDK_OFFSET(0xA25B290)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_ISORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0xA25B380)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0xA25B3D0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xA25B3E0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_SHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA25B400)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGOPTIONS_OFFSET UNITYSDK_OFFSET(0xA25B410)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGOPTIONS_OFFSET UNITYSDK_OFFSET(0xA25B420)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_STEREOPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xA25B430)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETLAYERCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0xA25B460)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SETLAYERCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0xA25B560)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0xA25B660)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SETCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0xA25B7A0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25B8E0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25C2F0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25C3A0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA25CC60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableCullingParameters_TypeDefinitionIndex = 31547;

	class ScriptableCullingParameters : public Il2CppObject
	{
	public:
		::System::Int32 m_IsOrthographic; // 0x10
		::UnityEngine::Rendering::LODParameters* m_LODParameters; // 0x14
		::System::Int32 maximumCullingPlaneCount; // 0x0
		<m_CullingPlanes>e__FixedBuffer* m_CullingPlanes; // 0x30
		::System::Int32 m_CullingPlaneCount; // 0xD0
		::System::UInt32 m_CullingMask; // 0xD4
		::System::UInt64 m_SceneMask; // 0xD8
		::System::Int32 layerCount; // 0x4
		<m_LayerFarCullDistances>e__FixedBuffer* m_LayerFarCullDistances; // 0xE0
		::System::Int32 m_LayerCull; // 0x160
		::UnityEngine::Matrix4x4* m_CullingMatrix; // 0x164
		::UnityEngine::Vector3* m_Origin; // 0x1A4
		::System::Single m_ShadowDistance; // 0x1B0
		::System::Single m_ShadowNearPlaneOffset; // 0x1B4
		::UnityEngine::Rendering::CullingOptions* m_CullingOptions; // 0x1B8
		::UnityEngine::Rendering::ReflectionProbeSortingCriteria* m_ReflectionProbeSortingCriteria; // 0x1BC
		::UnityEngine::Rendering::CameraProperties* m_CameraProperties; // 0x1C0
		::System::Single m_AccurateOcclusionThreshold; // 0x5A0
		::System::Int32 m_MaximumPortalCullingJobs; // 0x5A4
		::UnityEngine::Matrix4x4* m_StereoViewMatrix; // 0x5A8
		::UnityEngine::Matrix4x4* m_StereoProjectionMatrix; // 0x5E8
		::System::Single m_StereoSeparationDistance; // 0x628
		::System::Int32 m_maximumVisibleLights; // 0x62C
		::System::Boolean m_ConservativeEnclosingSphere; // 0x630
		::System::Int32 m_NumIterationsEnclosingSphere; // 0x634

		::System::Void set_maximumVisibleLights(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_MAXIMUMVISIBLELIGHTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_conservativeEnclosingSphere(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CONSERVATIVEENCLOSINGSPHERE_OFFSET))(arg, nullptr);
		}

		::System::Void set_numIterationsEnclosingSphere(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_NUMITERATIONSENCLOSINGSPHERE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_cullingPlaneCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGPLANECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_cullingPlaneCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGPLANECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_isOrthographic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_ISORTHOGRAPHIC_OFFSET))(arg, nullptr);
		}

		::System::Void set_cullingMask(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_origin(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_ORIGIN_OFFSET))(arg, nullptr);
		}

		::System::Void set_shadowDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_SHADOWDISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::CullingOptions* get_cullingOptions()
		{
			return (return (::UnityEngine::Rendering::CullingOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGOPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_cullingOptions(::UnityEngine::Rendering::CullingOptions* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CullingOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SET_CULLINGOPTIONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* get_stereoProjectionMatrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_STEREOPROJECTIONMATRIX_OFFSET))(nullptr);
		}

		::System::Single GetLayerCullingDistance(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETLAYERCULLINGDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayerCullingDistance(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SETLAYERCULLINGDISTANCE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Plane* GetCullingPlane(::System::Int32 arg)
		{
			return (return (::UnityEngine::Plane*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETCULLINGPLANE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCullingPlane(::System::Int32 arg, ::UnityEngine::Plane* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Plane*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_SETCULLINGPLANE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableCullingParameters* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ScriptableCullingParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

