#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FilterMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int FilterMode_TypeDefinitionIndex = 31043;

	class FilterMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::FilterMode* Point; // 0x0
		::UnityEngine::FilterMode* Bilinear; // 0x0
		::UnityEngine::FilterMode* Trilinear; // 0x0

	};
}

