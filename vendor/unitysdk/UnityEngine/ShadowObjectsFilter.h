#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ShadowObjectsFilter; }

namespace UnityEngine
{
	inline static constexpr unsigned int ShadowObjectsFilter_TypeDefinitionIndex = 31036;

	class ShadowObjectsFilter : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ShadowObjectsFilter* AllObjects; // 0x0
		::UnityEngine::ShadowObjectsFilter* DynamicOnly; // 0x0
		::UnityEngine::ShadowObjectsFilter* StaticOnly; // 0x0

	};
}

