#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class TonemappingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TonemappingMode_TypeDefinitionIndex = 32705;

	class TonemappingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::TonemappingMode* None; // 0x0
		::UnityEngine::Rendering::Universal::TonemappingMode* Neutral; // 0x0
		::UnityEngine::Rendering::Universal::TonemappingMode* ACES; // 0x0

	};
}

