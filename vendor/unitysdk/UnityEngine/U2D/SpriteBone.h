#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Color32; }

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteBone_TypeDefinitionIndex = 31228;

	class SpriteBone : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::System::String* m_Guid; // 0x18
		::UnityEngine::Vector3* m_Position; // 0x20
		::UnityEngine::Quaternion* m_Rotation; // 0x2C
		::System::Single m_Length; // 0x3C
		::System::Int32 m_ParentId; // 0x40
		::UnityEngine::Color32* m_Color; // 0x44

	};
}

