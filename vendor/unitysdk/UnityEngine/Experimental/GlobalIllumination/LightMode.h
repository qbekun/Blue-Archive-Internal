#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class LightMode; }

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightMode_TypeDefinitionIndex = 31628;

	class LightMode : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::Experimental::GlobalIllumination::LightMode* Realtime; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightMode* Mixed; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightMode* Baked; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightMode* Unknown; // 0x0

	};
}

