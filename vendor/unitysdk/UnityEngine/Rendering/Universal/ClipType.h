#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ClipType; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ClipType_TypeDefinitionIndex = 32436;

	class ClipType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ClipType* ctIntersection; // 0x0
		::UnityEngine::Rendering::Universal::ClipType* ctUnion; // 0x0
		::UnityEngine::Rendering::Universal::ClipType* ctDifference; // 0x0
		::UnityEngine::Rendering::Universal::ClipType* ctXor; // 0x0

	};
}

