#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class AntialiasingQuality; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AntialiasingQuality_TypeDefinitionIndex = 32772;

	class AntialiasingQuality : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::AntialiasingQuality* Low; // 0x0
		::UnityEngine::Rendering::Universal::AntialiasingQuality* Medium; // 0x0
		::UnityEngine::Rendering::Universal::AntialiasingQuality* High; // 0x0

	};
}

