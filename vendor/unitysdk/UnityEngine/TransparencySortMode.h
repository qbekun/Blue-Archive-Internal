#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TransparencySortMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int TransparencySortMode_TypeDefinitionIndex = 31024;

	class TransparencySortMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TransparencySortMode* Default; // 0x0
		::UnityEngine::TransparencySortMode* Perspective; // 0x0
		::UnityEngine::TransparencySortMode* Orthographic; // 0x0
		::UnityEngine::TransparencySortMode* CustomAxis; // 0x0

	};
}

