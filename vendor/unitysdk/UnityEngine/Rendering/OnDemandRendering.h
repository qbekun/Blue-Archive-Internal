#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_ONDEMANDRENDERING_GET_RENDERFRAMEINTERVAL_OFFSET UNITYSDK_OFFSET(0xA251AC0)
#define UNITYENGINE_RENDERING_ONDEMANDRENDERING_GETRENDERFRAMEINTERVAL_OFFSET UNITYSDK_OFFSET(0xA251B10)
#define UNITYENGINE_RENDERING_ONDEMANDRENDERING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA251BC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OnDemandRendering_TypeDefinitionIndex = 31528;

	class OnDemandRendering : public Il2CppObject
	{
	public:
		::System::Int32 m_RenderFrameInterval; // 0x0

		::System::Int32 get_renderFrameInterval()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING_GET_RENDERFRAMEINTERVAL_OFFSET))(nullptr);
		}

		::System::Void GetRenderFrameInterval(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING_GETRENDERFRAMEINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ONDEMANDRENDERING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

