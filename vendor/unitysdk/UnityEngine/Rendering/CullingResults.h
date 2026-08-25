#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Bounds&; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::Rendering { class ShadowSplitData&; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine { class Vector3; }
namespace Unity::Collections { class Allocator; }
namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETLIGHTINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA25CCB0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETREFLECTIONPROBEINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA25CCF0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_FILLLIGHTANDREFLECTIONPROBEINDICES_OFFSET UNITYSDK_OFFSET(0xA25CD30)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETLIGHTINDEXMAPSIZE_OFFSET UNITYSDK_OFFSET(0xA25CD70)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_FILLLIGHTINDEXMAP_OFFSET UNITYSDK_OFFSET(0xA25CDB0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_SETLIGHTINDEXMAP_OFFSET UNITYSDK_OFFSET(0xA25CE00)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_OFFSET UNITYSDK_OFFSET(0xA25CE50)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0xA25CEA0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0xA25CEF0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEDIRECTIONALSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0xA25CF50)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GET_VISIBLELIGHTS_OFFSET UNITYSDK_OFFSET(0xA25CFF0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LIGHTANDREFLECTIONPROBEINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA25D050)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_FILLLIGHTANDREFLECTIONPROBEINDICES_OFFSET UNITYSDK_OFFSET(0xA25D0C0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETLIGHTINDEXMAP_OFFSET UNITYSDK_OFFSET(0xA25D100)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_SETLIGHTINDEXMAP_OFFSET UNITYSDK_OFFSET(0xA25D200)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_OFFSET UNITYSDK_OFFSET(0xA25D290)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0xA25D2D0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0xA25D320)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEDIRECTIONALSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET UNITYSDK_OFFSET(0xA25D370)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25D440)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25D4B0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25D570)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEDIRECTIONALSHADOWMATRICESANDCULLINGPRIMITIVES_INJECTED_OFFSET UNITYSDK_OFFSET(0xA25CFA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingResults_TypeDefinitionIndex = 31548;

	class CullingResults : public Il2CppObject
	{
	public:
		::System::Int32 ptr; // 0x10
		::System::Object** m_AllocationInfo; // 0x18

		::System::Int32 GetLightIndexCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETLIGHTINDEXCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetReflectionProbeIndexCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETREFLECTIONPROBEINDEXCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void FillLightAndReflectionProbeIndices(::System::Int32 arg, ::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_FILLLIGHTANDREFLECTIONPROBEINDICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLightIndexMapSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETLIGHTINDEXMAPSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void FillLightIndexMap(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_FILLLIGHTINDEXMAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetLightIndexMap(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_SETLIGHTINDEXMAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetShadowCasterBounds(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Bounds&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ComputeSpotShadowMatricesAndCullingPrimitives(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ComputePointShadowMatricesAndCullingPrimitives(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Single, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ComputeDirectionalShadowMatricesAndCullingPrimitives(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Vector3* arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3*, ::System::Int32, ::System::Single, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEDIRECTIONALSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_visibleLights()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GET_VISIBLELIGHTS_OFFSET))(nullptr);
		}

		Il2CppObject* GetNativeArray(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETNATIVEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_lightAndReflectionProbeIndexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GET_LIGHTANDREFLECTIONPROBEINDEXCOUNT_OFFSET))(nullptr);
		}

		::System::Void FillLightAndReflectionProbeIndices(::UnityEngine::ComputeBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_FILLLIGHTANDREFLECTIONPROBEINDICES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetLightIndexMap(::Unity::Collections::Allocator* arg)
		{
			return (return (Il2CppObject*(*)(::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETLIGHTINDEXMAP_OFFSET))(arg, nullptr);
		}

		::System::Void SetLightIndexMap(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_SETLIGHTINDEXMAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetShadowCasterBounds(::System::Int32 arg, ::UnityEngine::Bounds&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETSHADOWCASTERBOUNDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ComputeSpotShadowMatricesAndCullingPrimitives(::System::Int32 arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTESPOTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ComputePointShadowMatricesAndCullingPrimitives(::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::CubemapFace*, ::System::Single, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEPOINTSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ComputeDirectionalShadowMatricesAndCullingPrimitives(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Vector3* arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3*, ::System::Int32, ::System::Single, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEDIRECTIONALSHADOWMATRICESANDCULLINGPRIMITIVES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::CullingResults* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CullingResults*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Vector3&* arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Rendering::ShadowSplitData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&*, ::System::Int32, ::System::Single, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Rendering::ShadowSplitData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_COMPUTEDIRECTIONALSHADOWMATRICESANDCULLINGPRIMITIVES_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

