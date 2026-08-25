#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class SortingCriteria; }
namespace UnityEngine::Rendering { class PerObjectData; }
namespace UnityEngine::Rendering { class RenderQueueRange; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class ShaderTagId; }

#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_CULLINGRESULT_OFFSET UNITYSDK_OFFSET(0xA267CC0)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0xA267CD0)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_PASSNAME_OFFSET UNITYSDK_OFFSET(0xA267CE0)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_PASSNAMES_OFFSET UNITYSDK_OFFSET(0xA267CF0)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_ISVALID_OFFSET UNITYSDK_OFFSET(0xA267D00)

namespace UnityEngine::Rendering::RendererUtils
{
	inline static constexpr unsigned int RendererListDesc_TypeDefinitionIndex = 31593;

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
			return (return (::UnityEngine::Rendering::CullingResults*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_CULLINGRESULT_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_camera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_CAMERA_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::ShaderTagId* get_passName()
		{
			return (return (::UnityEngine::Rendering::ShaderTagId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_PASSNAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_passNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_GET_PASSNAMES_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTDESC_ISVALID_OFFSET))(nullptr);
		}

	};
}

