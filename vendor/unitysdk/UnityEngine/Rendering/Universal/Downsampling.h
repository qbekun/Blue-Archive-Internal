#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Downsampling; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Downsampling_TypeDefinitionIndex = 32513;

	class Downsampling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::Downsampling* None; // 0x0
		::UnityEngine::Rendering::Universal::Downsampling* _2xBilinear; // 0x0
		::UnityEngine::Rendering::Universal::Downsampling* _4xBox; // 0x0
		::UnityEngine::Rendering::Universal::Downsampling* _4xBilinear; // 0x0

	};
}

