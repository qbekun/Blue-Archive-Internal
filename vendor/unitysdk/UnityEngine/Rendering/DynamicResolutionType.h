#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DynamicResolutionType; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResolutionType_TypeDefinitionIndex = 33907;

	class DynamicResolutionType : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::Rendering::DynamicResolutionType* Software; // 0x0
		::UnityEngine::Rendering::DynamicResolutionType* Hardware; // 0x0

	};
}

