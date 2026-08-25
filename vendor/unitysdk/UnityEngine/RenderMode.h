#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RenderMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int RenderMode_TypeDefinitionIndex = 37680;

	class RenderMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RenderMode* ScreenSpaceOverlay; // 0x0
		::UnityEngine::RenderMode* ScreenSpaceCamera; // 0x0
		::UnityEngine::RenderMode* WorldSpace; // 0x0

	};
}

