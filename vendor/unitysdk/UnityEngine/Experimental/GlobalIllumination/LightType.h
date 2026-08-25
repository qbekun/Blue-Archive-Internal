#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class LightType; }

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightType_TypeDefinitionIndex = 31627;

	class LightType : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::Experimental::GlobalIllumination::LightType* Directional; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightType* Point; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightType* Spot; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightType* Rectangle; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightType* Disc; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightType* SpotPyramidShape; // 0x0
		::UnityEngine::Experimental::GlobalIllumination::LightType* SpotBoxShape; // 0x0

	};
}

