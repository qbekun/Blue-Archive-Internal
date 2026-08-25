#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class EnabledOrientation; }

namespace UnityEngine
{
	inline static constexpr unsigned int EnabledOrientation_TypeDefinitionIndex = 30991;

	class EnabledOrientation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::EnabledOrientation* kAutorotateToPortrait; // 0x0
		::UnityEngine::EnabledOrientation* kAutorotateToPortraitUpsideDown; // 0x0
		::UnityEngine::EnabledOrientation* kAutorotateToLandscapeLeft; // 0x0
		::UnityEngine::EnabledOrientation* kAutorotateToLandscapeRight; // 0x0

	};
}

