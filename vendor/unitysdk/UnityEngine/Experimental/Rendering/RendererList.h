#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Experimental::Rendering { class RendererList; }
namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine::Rendering { class DrawingSettings; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Experimental::Rendering { class RendererListDesc&; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9F8F5E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F8F5F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9F8F680)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CREATE_OFFSET UNITYSDK_OFFSET(0x9F8F690)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RendererList_TypeDefinitionIndex = 33827;

	class RendererList : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ShaderTagId* s_EmptyName; // 0x0
		::UnityEngine::Experimental::Rendering::RendererList* nullRendererList; // 0x8
		::System::Boolean _isValid_k__BackingField; // 0x10
		::UnityEngine::Rendering::CullingResults* cullingResult; // 0x18
		::UnityEngine::Rendering::DrawingSettings* drawSettings; // 0x28
		::UnityEngine::Rendering::FilteringSettings* filteringSettings; // 0x164
		Il2CppObject* stateBlock; // 0x17C

		::System::Void set_isValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_SET_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_GET_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RendererList* Create(::UnityEngine::Experimental::Rendering::RendererListDesc&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RendererList*(*)(::UnityEngine::Experimental::Rendering::RendererListDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

