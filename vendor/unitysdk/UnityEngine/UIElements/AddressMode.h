#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class AddressMode; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int AddressMode_TypeDefinitionIndex = 30240;

	class AddressMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::AddressMode* Wrap; // 0x0
		::UnityEngine::UIElements::AddressMode* Clamp; // 0x0
		::UnityEngine::UIElements::AddressMode* Mirror; // 0x0

	};
}

