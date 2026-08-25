#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchVisibility_TypeDefinitionIndex = 31532;

	class BatchVisibility : public Il2CppObject
	{
	public:
		::System::Int32 offset; // 0x10
		::System::Int32 instancesCount; // 0x14
		::System::Int32 visibleCount; // 0x18

	};
}

