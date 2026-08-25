#pragma once
#include "unitysdk.h"

namespace UnityEngine::Events { class UnityAction; }

	inline static constexpr unsigned int OrderBlock_TypeDefinitionIndex = 30986;

	class OrderBlock : public Il2CppObject
	{
	public:
		::System::Int32 order; // 0x10
		::UnityEngine::Events::UnityAction* callback; // 0x18

	};

