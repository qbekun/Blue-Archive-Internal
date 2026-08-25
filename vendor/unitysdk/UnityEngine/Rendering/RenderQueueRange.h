#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderQueueRange; }

#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0xA25DF80)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0xA2606B0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_TRANSPARENT_OFFSET UNITYSDK_OFFSET(0xA2606C0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA25E140)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2606D0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA25E2C0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA260760)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderQueueRange_TypeDefinitionIndex = 31564;

	class RenderQueueRange : public Il2CppObject
	{
	public:
		::System::Int32 m_LowerBound; // 0x10
		::System::Int32 m_UpperBound; // 0x14
		::System::Int32 k_MinimumBound; // 0x0
		::System::Int32 minimumBound; // 0x0
		::System::Int32 k_MaximumBound; // 0x0
		::System::Int32 maximumBound; // 0x4

		::UnityEngine::Rendering::RenderQueueRange* get_all()
		{
			return (return (::UnityEngine::Rendering::RenderQueueRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_ALL_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderQueueRange* get_opaque()
		{
			return (return (::UnityEngine::Rendering::RenderQueueRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_OPAQUE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderQueueRange* get_transparent()
		{
			return (return (::UnityEngine::Rendering::RenderQueueRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_TRANSPARENT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderQueueRange* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::RenderQueueRange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

