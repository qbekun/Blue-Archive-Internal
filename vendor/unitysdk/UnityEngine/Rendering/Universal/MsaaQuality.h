#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MsaaQuality; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MsaaQuality_TypeDefinitionIndex = 32512;

	class MsaaQuality : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::MsaaQuality* Disabled; // 0x0
		::UnityEngine::Rendering::Universal::MsaaQuality* _2x; // 0x0
		::UnityEngine::Rendering::Universal::MsaaQuality* _4x; // 0x0
		::UnityEngine::Rendering::Universal::MsaaQuality* _8x; // 0x0

	};
}

