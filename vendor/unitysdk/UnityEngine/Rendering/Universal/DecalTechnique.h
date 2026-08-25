#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalTechnique; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalTechnique_TypeDefinitionIndex = 32722;

	class DecalTechnique : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DecalTechnique* Invalid; // 0x0
		::UnityEngine::Rendering::Universal::DecalTechnique* DBuffer; // 0x0
		::UnityEngine::Rendering::Universal::DecalTechnique* ScreenSpace; // 0x0
		::UnityEngine::Rendering::Universal::DecalTechnique* GBuffer; // 0x0

	};
}

