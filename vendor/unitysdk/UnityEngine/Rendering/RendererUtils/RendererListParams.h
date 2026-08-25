#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering::RendererUtils { class RendererListParams; }
namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine::Rendering { class DrawingSettings; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering::RendererUtils { class RendererListDesc&; }

#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTPARAMS_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA267DB0)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTPARAMS_CREATE_OFFSET UNITYSDK_OFFSET(0xA267DC0)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTPARAMS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA268610)

namespace UnityEngine::Rendering::RendererUtils
{
	inline static constexpr unsigned int RendererListParams_TypeDefinitionIndex = 31594;

	class RendererListParams : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ShaderTagId* s_EmptyName; // 0x0
		::UnityEngine::Rendering::RendererUtils::RendererListParams* nullRendererList; // 0x8
		::System::Boolean _isValid_k__BackingField; // 0x10
		::UnityEngine::Rendering::CullingResults* cullingResult; // 0x18
		::UnityEngine::Rendering::DrawingSettings* drawSettings; // 0x28
		::UnityEngine::Rendering::FilteringSettings* filteringSettings; // 0x164
		Il2CppObject* stateBlock; // 0x17C

		::System::Void set_isValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTPARAMS_SET_ISVALID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererListParams* Create(::UnityEngine::Rendering::RendererUtils::RendererListDesc&* arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererListParams*(*)(::UnityEngine::Rendering::RendererUtils::RendererListDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTPARAMS_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLISTPARAMS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

