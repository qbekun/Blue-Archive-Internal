#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightShadows; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightShadows_TypeDefinitionIndex = 31031;

	class LightShadows : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightShadows* None; // 0x0
		::UnityEngine::LightShadows* Hard; // 0x0
		::UnityEngine::LightShadows* Soft; // 0x0

	};
}

