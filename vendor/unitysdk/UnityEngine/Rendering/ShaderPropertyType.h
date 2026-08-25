#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderPropertyType; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderPropertyType_TypeDefinitionIndex = 31588;

	class ShaderPropertyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ShaderPropertyType* Color; // 0x0
		::UnityEngine::Rendering::ShaderPropertyType* Vector; // 0x0
		::UnityEngine::Rendering::ShaderPropertyType* Float; // 0x0
		::UnityEngine::Rendering::ShaderPropertyType* Range; // 0x0
		::UnityEngine::Rendering::ShaderPropertyType* Texture; // 0x0
		::UnityEngine::Rendering::ShaderPropertyType* Int; // 0x0

	};
}

