#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShadowCascadesOption; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowCascadesOption_TypeDefinitionIndex = 32630;

	class ShadowCascadesOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ShadowCascadesOption* NoCascades; // 0x0
		::UnityEngine::Rendering::Universal::ShadowCascadesOption* TwoCascades; // 0x0
		::UnityEngine::Rendering::Universal::ShadowCascadesOption* FourCascades; // 0x0

	};
}

