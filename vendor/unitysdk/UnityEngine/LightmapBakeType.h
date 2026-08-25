#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightmapBakeType; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapBakeType_TypeDefinitionIndex = 31033;

	class LightmapBakeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightmapBakeType* Realtime; // 0x0
		::UnityEngine::LightmapBakeType* Baked; // 0x0
		::UnityEngine::LightmapBakeType* Mixed; // 0x0

	};
}

