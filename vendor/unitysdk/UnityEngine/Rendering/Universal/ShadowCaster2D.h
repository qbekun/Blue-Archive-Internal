#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering::Universal { class ShadowCasterGroup2D; }
namespace UnityEngine { class BoundingSphere; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering::Universal { class Light2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0249D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA0249F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA024A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_CASTSSHADOWS_OFFSET UNITYSDK_OFFSET(0xA024A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ISLIT_OFFSET UNITYSDK_OFFSET(0xA024A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_USERENDERERSILHOUETTE_OFFSET UNITYSDK_OFFSET(0xA024AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_UPDATE_OFFSET UNITYSDK_OFFSET(0xA024AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_AWAKE_OFFSET UNITYSDK_OFFSET(0xA024C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA025290)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_SHAPEPATH_OFFSET UNITYSDK_OFFSET(0xA0252A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_CACHEVALUES_OFFSET UNITYSDK_OFFSET(0xA0252B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SETDEFAULTSORTINGLAYERS_OFFSET UNITYSDK_OFFSET(0xA0251C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA025500)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_SELFSHADOWS_OFFSET UNITYSDK_OFFSET(0xA025540)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_SHAPEPATHHASH_OFFSET UNITYSDK_OFFSET(0xA025550)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ISSHADOWEDLAYER_OFFSET UNITYSDK_OFFSET(0xA025560)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_SELFSHADOWS_OFFSET UNITYSDK_OFFSET(0xA0255C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0255D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_CASTSSHADOWS_OFFSET UNITYSDK_OFFSET(0xA0256C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_USERENDERERSILHOUETTE_OFFSET UNITYSDK_OFFSET(0xA0256D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_SHAPEPATHHASH_OFFSET UNITYSDK_OFFSET(0xA0256E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowCaster2D_TypeDefinitionIndex = 32496;

	class ShadowCaster2D : public Il2CppObject
	{
	public:
		ComponentVersions* k_CurrentComponentVersion; // 0x0
		ComponentVersions* m_ComponentVersion; // 0x28
		::System::Boolean m_HasRenderer; // 0x2C
		::System::Boolean m_UseRendererSilhouette; // 0x2D
		::System::Boolean m_CastsShadows; // 0x2E
		::System::Boolean m_SelfShadows; // 0x2F
		::Il2CppArray<::System::Object*>* m_ApplyToSortingLayers; // 0x30
		::Il2CppArray<::System::Object*>* m_ShapePath; // 0x38
		::System::Int32 m_ShapePathHash; // 0x40
		::UnityEngine::Mesh* m_Mesh; // 0x48
		::System::Int32 m_InstanceId; // 0x50
		::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* m_ShadowCasterGroup; // 0x58
		::UnityEngine::Rendering::Universal::ShadowCasterGroup2D* m_PreviousShadowCasterGroup; // 0x60
		::UnityEngine::BoundingSphere* m_ProjectedBoundingSphere; // 0x68
		::System::Int32 m_PreviousShadowGroup; // 0x78
		::System::Boolean m_PreviousCastsShadows; // 0x7C
		::System::Int32 m_PreviousPathHash; // 0x80
		::UnityEngine::Vector3* m_CachedPosition; // 0x84
		::UnityEngine::Vector3* m_CachedLossyScale; // 0x90
		::UnityEngine::Quaternion* m_CachedRotation; // 0x9C
		::UnityEngine::Matrix4x4* m_CachedShadowMatrix; // 0xAC
		::UnityEngine::Matrix4x4* m_CachedInverseShadowMatrix; // 0xEC
		::UnityEngine::Matrix4x4* m_CachedLocalToWorldMatrix; // 0x12C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_castsShadows(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_CASTSSHADOWS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLit(::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ISLIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useRendererSilhouette()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_USERENDERERSILHOUETTE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_MESH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_shapePath()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_SHAPEPATH_OFFSET))(nullptr);
		}

		::System::Void CacheValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_CACHEVALUES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* SetDefaultSortingLayers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SETDEFAULTSORTINGLAYERS_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_selfShadows()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_SELFSHADOWS_OFFSET))(nullptr);
		}

		::System::Void set_shapePathHash(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_SHAPEPATHHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsShadowedLayer(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ISSHADOWEDLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void set_selfShadows(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_SELFSHADOWS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_castsShadows()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_CASTSSHADOWS_OFFSET))(nullptr);
		}

		::System::Void set_useRendererSilhouette(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_SET_USERENDERERSILHOUETTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_shapePathHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWCASTER2D_GET_SHAPEPATHHASH_OFFSET))(nullptr);
		}

	};
}

