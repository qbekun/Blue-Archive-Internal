#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal { class LightFlag; }

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LightFlag_TypeDefinitionIndex = 32845;

	class LightFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::Internal::LightFlag* SubtractiveMixedLighting; // 0x0

	};
}

