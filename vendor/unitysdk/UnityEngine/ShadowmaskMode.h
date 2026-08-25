#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ShadowmaskMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int ShadowmaskMode_TypeDefinitionIndex = 31035;

	class ShadowmaskMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ShadowmaskMode* Shadowmask; // 0x0
		::UnityEngine::ShadowmaskMode* DistanceShadowmask; // 0x0

	};
}

