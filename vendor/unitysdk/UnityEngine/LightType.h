#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightType; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightType_TypeDefinitionIndex = 31028;

	class LightType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightType* Spot; // 0x0
		::UnityEngine::LightType* Directional; // 0x0
		::UnityEngine::LightType* Point; // 0x0
		::UnityEngine::LightType* Area; // 0x0
		::UnityEngine::LightType* Rectangle; // 0x0
		::UnityEngine::LightType* Disc; // 0x0

	};
}

