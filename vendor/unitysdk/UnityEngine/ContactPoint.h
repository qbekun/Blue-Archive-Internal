#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }

namespace UnityEngine
{
	inline static constexpr unsigned int ContactPoint_TypeDefinitionIndex = 37340;

	class ContactPoint : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Point; // 0x10
		::UnityEngine::Vector3* m_Normal; // 0x1C
		::System::Int32 m_ThisColliderInstanceID; // 0x28
		::System::Int32 m_OtherColliderInstanceID; // 0x2C
		::System::Single m_Separation; // 0x30

	};
}

