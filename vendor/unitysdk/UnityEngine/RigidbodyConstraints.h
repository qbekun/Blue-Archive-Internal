#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RigidbodyConstraints; }

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodyConstraints_TypeDefinitionIndex = 37321;

	class RigidbodyConstraints : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RigidbodyConstraints* None; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezePositionX; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezePositionY; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezePositionZ; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezeRotationX; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezeRotationY; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezeRotationZ; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezePosition; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezeRotation; // 0x0
		::UnityEngine::RigidbodyConstraints* FreezeAll; // 0x0

	};
}

