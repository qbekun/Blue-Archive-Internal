#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class GraphicsFenceType; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsFenceType_TypeDefinitionIndex = 31525;

	class GraphicsFenceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::GraphicsFenceType* AsyncQueueSynchronisation; // 0x0
		::UnityEngine::Rendering::GraphicsFenceType* CPUSynchronisation; // 0x0

	};
}

