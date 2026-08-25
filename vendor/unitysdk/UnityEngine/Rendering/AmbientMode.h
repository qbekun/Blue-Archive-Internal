#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class AmbientMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AmbientMode_TypeDefinitionIndex = 31495;

	class AmbientMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::AmbientMode* Skybox; // 0x0
		::UnityEngine::Rendering::AmbientMode* Trilight; // 0x0
		::UnityEngine::Rendering::AmbientMode* Flat; // 0x0
		::UnityEngine::Rendering::AmbientMode* Custom; // 0x0

	};
}

