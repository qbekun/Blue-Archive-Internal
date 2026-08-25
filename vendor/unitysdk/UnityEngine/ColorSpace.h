#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ColorSpace; }

namespace UnityEngine
{
	inline static constexpr unsigned int ColorSpace_TypeDefinitionIndex = 31041;

	class ColorSpace : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ColorSpace* Uninitialized; // 0x0
		::UnityEngine::ColorSpace* Gamma; // 0x0
		::UnityEngine::ColorSpace* Linear; // 0x0

	};
}

