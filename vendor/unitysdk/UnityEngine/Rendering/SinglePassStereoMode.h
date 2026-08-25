#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SinglePassStereoMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SinglePassStereoMode_TypeDefinitionIndex = 31518;

	class SinglePassStereoMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::SinglePassStereoMode* None; // 0x0
		::UnityEngine::Rendering::SinglePassStereoMode* SideBySide; // 0x0
		::UnityEngine::Rendering::SinglePassStereoMode* Instancing; // 0x0
		::UnityEngine::Rendering::SinglePassStereoMode* Multiview; // 0x0

	};
}

