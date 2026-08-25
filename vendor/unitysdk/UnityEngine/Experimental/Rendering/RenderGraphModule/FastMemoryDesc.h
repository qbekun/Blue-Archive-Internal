#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class FastMemoryFlags; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int FastMemoryDesc_TypeDefinitionIndex = 33877;

	class FastMemoryDesc : public Il2CppObject
	{
	public:
		::System::Boolean inFastMemory; // 0x10
		::UnityEngine::Rendering::FastMemoryFlags* flags; // 0x14
		::System::Single residencyFraction; // 0x18

	};
}

