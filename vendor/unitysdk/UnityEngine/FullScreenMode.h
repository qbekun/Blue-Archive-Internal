#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FullScreenMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int FullScreenMode_TypeDefinitionIndex = 30992;

	class FullScreenMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::FullScreenMode* ExclusiveFullScreen; // 0x0
		::UnityEngine::FullScreenMode* FullScreenWindow; // 0x0
		::UnityEngine::FullScreenMode* MaximizedWindow; // 0x0
		::UnityEngine::FullScreenMode* Windowed; // 0x0

	};
}

