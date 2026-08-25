#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }

	inline static constexpr unsigned int ColorFilter_TypeDefinitionIndex = 4991;

	class ColorFilter : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* R; // 0x10
		::UnityEngine::Vector4* G; // 0x20
		::UnityEngine::Vector4* B; // 0x30
		::System::Single ColorIntensity; // 0x40
		::UnityEngine::Vector4* ThresholdParams; // 0x44

	};

