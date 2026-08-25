#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Vector3; }

namespace UnityEngine
{
	inline static constexpr unsigned int ControllerColliderHit_TypeDefinitionIndex = 37325;

	class ControllerColliderHit : public Il2CppObject
	{
	public:
		::UnityEngine::CharacterController* m_Controller; // 0x10
		::UnityEngine::Collider* m_Collider; // 0x18
		::UnityEngine::Vector3* m_Point; // 0x20
		::UnityEngine::Vector3* m_Normal; // 0x2C
		::UnityEngine::Vector3* m_MoveDirection; // 0x38
		::System::Single m_MoveLength; // 0x44
		::System::Int32 m_Push; // 0x48

	};
}

