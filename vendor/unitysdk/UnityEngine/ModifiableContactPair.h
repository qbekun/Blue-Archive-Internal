#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }

namespace UnityEngine
{
	inline static constexpr unsigned int ModifiableContactPair_TypeDefinitionIndex = 37331;

	class ModifiableContactPair : public Il2CppObject
	{
	public:
		::System::Int32 actor; // 0x10
		::System::Int32 otherActor; // 0x18
		::System::Int32 shape; // 0x20
		::System::Int32 otherShape; // 0x28
		::UnityEngine::Quaternion* rotation; // 0x30
		::UnityEngine::Vector3* position; // 0x40
		::UnityEngine::Quaternion* otherRotation; // 0x4C
		::UnityEngine::Vector3* otherPosition; // 0x5C
		::System::Int32 numContacts; // 0x68
		::System::Int32 contacts; // 0x70

	};
}

