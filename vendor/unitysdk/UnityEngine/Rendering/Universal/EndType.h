#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class EndType; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EndType_TypeDefinitionIndex = 32440;

	class EndType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::EndType* etClosedPolygon; // 0x0
		::UnityEngine::Rendering::Universal::EndType* etClosedLine; // 0x0

	};
}

