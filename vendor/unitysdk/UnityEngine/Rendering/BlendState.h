#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetBlendState; }
namespace UnityEngine::Rendering { class BlendState; }

#define UNITYENGINE_RENDERING_BLENDSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0xA2572C0)
#define UNITYENGINE_RENDERING_BLENDSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA257370)
#define UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE0_OFFSET UNITYSDK_OFFSET(0xA257430)
#define UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA257440)
#define UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2578A0)
#define UNITYENGINE_RENDERING_BLENDSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA257940)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendState_TypeDefinitionIndex = 31538;

	class BlendState : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState0; // 0x10
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState1; // 0x18
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState2; // 0x20
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState3; // 0x28
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState4; // 0x30
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState5; // 0x38
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState6; // 0x40
		::UnityEngine::Rendering::RenderTargetBlendState* m_BlendState7; // 0x48
		::System::Byte m_SeparateMRTBlendStates; // 0x50
		::System::Byte m_AlphaToMask; // 0x51
		::System::Int16 m_Padding; // 0x52

		::UnityEngine::Rendering::BlendState* get_defaultValue()
		{
			return (return (::UnityEngine::Rendering::BlendState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_blendState0(::UnityEngine::Rendering::RenderTargetBlendState* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetBlendState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_SET_BLENDSTATE0_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::BlendState* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BlendState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BLENDSTATE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

