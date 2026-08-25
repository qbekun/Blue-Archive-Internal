#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SRPLensFlareType; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SRPLensFlareType_TypeDefinitionIndex = 33998;

	class SRPLensFlareType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::SRPLensFlareType* Image; // 0x0
		::UnityEngine::Rendering::SRPLensFlareType* Circle; // 0x0
		::UnityEngine::Rendering::SRPLensFlareType* Polygon; // 0x0

	};
}

