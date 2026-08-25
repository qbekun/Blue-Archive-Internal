#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ZBin_TypeDefinitionIndex = 32766;

	class ZBin : public Il2CppObject
	{
	public:
		::System::UInt16 minIndex; // 0x10
		::System::UInt16 maxIndex; // 0x12

	};
}

