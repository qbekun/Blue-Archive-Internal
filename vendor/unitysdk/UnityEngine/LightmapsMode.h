#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightmapsMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapsMode_TypeDefinitionIndex = 31054;

	class LightmapsMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LightmapsMode* NonDirectional; // 0x0
		::UnityEngine::LightmapsMode* CombinedDirectional; // 0x0

	};
}

