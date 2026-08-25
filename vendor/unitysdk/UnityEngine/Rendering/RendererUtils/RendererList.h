#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::RendererUtils { class RendererList; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList&; }

#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA267B60)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA267C30)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA267C40)
#define UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_GET_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0xA267BF0)

namespace UnityEngine::Rendering::RendererUtils
{
	inline static constexpr unsigned int RendererList_TypeDefinitionIndex = 31592;

	class RendererList : public Il2CppObject
	{
	public:
		::System::UInt32 context; // 0x10
		::System::UInt32 index; // 0x18
		::System::UInt32 frame; // 0x1C
		::UnityEngine::Rendering::RendererUtils::RendererList* nullRendererList; // 0x0

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid_Injected(::UnityEngine::Rendering::RendererUtils::RendererList&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RendererUtils::RendererList&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERUTILS_RENDERERLIST_GET_ISVALID_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

