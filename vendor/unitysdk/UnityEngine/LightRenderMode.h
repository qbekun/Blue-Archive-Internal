#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightRenderMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightRenderMode_TypeDefinitionIndex = 31030;

	class LightRenderMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightRenderMode* Auto; // 0x0
		::UnityEngine::LightRenderMode* ForcePixel; // 0x0
		::UnityEngine::LightRenderMode* ForceVertex; // 0x0

	};
}

