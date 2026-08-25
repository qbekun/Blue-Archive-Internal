#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ScriptableRenderPassInput; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderPassInput_TypeDefinitionIndex = 32714;

	class ScriptableRenderPassInput : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* None; // 0x0
		::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* Depth; // 0x0
		::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* Normal; // 0x0
		::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* Color; // 0x0
		::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* Motion; // 0x0

	};
}

