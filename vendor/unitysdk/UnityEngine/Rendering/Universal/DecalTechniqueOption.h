#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalTechniqueOption; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalTechniqueOption_TypeDefinitionIndex = 32723;

	class DecalTechniqueOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DecalTechniqueOption* Automatic; // 0x0
		::UnityEngine::Rendering::Universal::DecalTechniqueOption* DBuffer; // 0x0
		::UnityEngine::Rendering::Universal::DecalTechniqueOption* ScreenSpace; // 0x0

	};
}

