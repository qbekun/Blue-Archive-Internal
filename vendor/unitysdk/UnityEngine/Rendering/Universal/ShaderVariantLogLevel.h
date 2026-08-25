#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShaderVariantLogLevel; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderVariantLogLevel_TypeDefinitionIndex = 32516;

	class ShaderVariantLogLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ShaderVariantLogLevel* Disabled; // 0x0
		::UnityEngine::Rendering::Universal::ShaderVariantLogLevel* OnlyUniversalRPShaders; // 0x0
		::UnityEngine::Rendering::Universal::ShaderVariantLogLevel* AllShaders; // 0x0

	};
}

