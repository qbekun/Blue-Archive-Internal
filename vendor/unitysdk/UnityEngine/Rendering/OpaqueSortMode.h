#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class OpaqueSortMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OpaqueSortMode_TypeDefinitionIndex = 31485;

	class OpaqueSortMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::OpaqueSortMode* Default; // 0x0
		::UnityEngine::Rendering::OpaqueSortMode* FrontToBack; // 0x0
		::UnityEngine::Rendering::OpaqueSortMode* NoDistanceSort; // 0x0

	};
}

