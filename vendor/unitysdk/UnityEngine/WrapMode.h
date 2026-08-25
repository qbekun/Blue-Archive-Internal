#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class WrapMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int WrapMode_TypeDefinitionIndex = 30942;

	class WrapMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::WrapMode* Once; // 0x0
		::UnityEngine::WrapMode* Loop; // 0x0
		::UnityEngine::WrapMode* PingPong; // 0x0
		::UnityEngine::WrapMode* Default; // 0x0
		::UnityEngine::WrapMode* ClampForever; // 0x0
		::UnityEngine::WrapMode* Clamp; // 0x0

	};
}

