#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ScreenOrientation; }

namespace UnityEngine
{
	inline static constexpr unsigned int ScreenOrientation_TypeDefinitionIndex = 31042;

	class ScreenOrientation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ScreenOrientation* Unknown; // 0x0
		::UnityEngine::ScreenOrientation* Landscape; // 0x0
		::UnityEngine::ScreenOrientation* Portrait; // 0x0
		::UnityEngine::ScreenOrientation* PortraitUpsideDown; // 0x0
		::UnityEngine::ScreenOrientation* LandscapeLeft; // 0x0
		::UnityEngine::ScreenOrientation* LandscapeRight; // 0x0
		::UnityEngine::ScreenOrientation* AutoRotation; // 0x0

	};
}

