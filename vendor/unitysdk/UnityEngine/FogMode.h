#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FogMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int FogMode_TypeDefinitionIndex = 31032;

	class FogMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::FogMode* Linear; // 0x0
		::UnityEngine::FogMode* Exponential; // 0x0
		::UnityEngine::FogMode* ExponentialSquared; // 0x0

	};
}

