#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class SortingCriteria; }
namespace UnityEngine::Rendering { class PerObjectData; }
namespace UnityEngine::Rendering { class RenderQueueRange; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class ShaderTagId; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CULLINGRESULT_OFFSET UNITYSDK_OFFSET(0x9F8FD00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CULLINGRESULT_OFFSET UNITYSDK_OFFSET(0x9F8FD10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x9F8FD20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x9F8FD30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAME_OFFSET UNITYSDK_OFFSET(0x9F8FD50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAME_OFFSET UNITYSDK_OFFSET(0x9F8FD60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAMES_OFFSET UNITYSDK_OFFSET(0x9F8FD70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAMES_OFFSET UNITYSDK_OFFSET(0x9F8FD80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8FDA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8FE40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_ISVALID_OFFSET UNITYSDK_OFFSET(0x9F8FC50)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RendererListDesc_TypeDefinitionIndex = 33828;

	class RendererListDesc : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::SortingCriteria* sortingCriteria; // 0x10
		::UnityEngine::Rendering::PerObjectData* rendererConfiguration; // 0x14
		::UnityEngine::Rendering::RenderQueueRange* renderQueueRange; // 0x18
		Il2CppObject* stateBlock; // 0x20
		::UnityEngine::Material* overrideMaterial; // 0x90
		::System::Boolean excludeObjectMotionVectors; // 0x98
		::System::Int32 layerMask; // 0x9C
		::System::Int32 overrideMaterialPassIndex; // 0xA0
		::UnityEngine::Rendering::CullingResults* _cullingResult_k__BackingField; // 0xA8
		::UnityEngine::Camera* _camera_k__BackingField; // 0xB8
		::UnityEngine::Rendering::ShaderTagId* _passName_k__BackingField; // 0xC0
		::Il2CppArray<::System::Object*>* _passNames_k__BackingField; // 0xC8

		::UnityEngine::Rendering::CullingResults* get_cullingResult()
		{
			return (return (::UnityEngine::Rendering::CullingResults*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CULLINGRESULT_OFFSET))(nullptr);
		}

		::System::Void set_cullingResult(::UnityEngine::Rendering::CullingResults* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CullingResults*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CULLINGRESULT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_camera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_CAMERA_OFFSET))(nullptr);
		}

		::System::Void set_camera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_CAMERA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderTagId* get_passName()
		{
			return (return (::UnityEngine::Rendering::ShaderTagId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAME_OFFSET))(nullptr);
		}

		::System::Void set_passName(::UnityEngine::Rendering::ShaderTagId* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAME_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_passNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_GET_PASSNAMES_OFFSET))(nullptr);
		}

		::System::Void set_passNames(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_SET_PASSNAMES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::ShaderTagId* arg, ::UnityEngine::Rendering::CullingResults* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShaderTagId*, ::UnityEngine::Rendering::CullingResults*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::CullingResults* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::CullingResults*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLISTDESC_ISVALID_OFFSET))(nullptr);
		}

	};
}

