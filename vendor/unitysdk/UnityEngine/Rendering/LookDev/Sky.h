#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Cubemap; }

namespace UnityEngine::Rendering::LookDev
{
	inline static constexpr unsigned int Sky_TypeDefinitionIndex = 34138;

	class Sky : public Il2CppObject
	{
	public:
		::UnityEngine::Cubemap* cubemap; // 0x10
		::System::Single longitudeOffset; // 0x18
		::System::Single exposure; // 0x1C

	};
}

