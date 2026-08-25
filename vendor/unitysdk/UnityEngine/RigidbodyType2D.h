#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RigidbodyType2D; }

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodyType2D_TypeDefinitionIndex = 37705;

	class RigidbodyType2D : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RigidbodyType2D* Dynamic; // 0x0
		::UnityEngine::RigidbodyType2D* Kinematic; // 0x0
		::UnityEngine::RigidbodyType2D* Static; // 0x0

	};
}

