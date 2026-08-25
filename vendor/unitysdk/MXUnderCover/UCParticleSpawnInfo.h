#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

namespace MXUnderCover
{
	inline static constexpr unsigned int UCParticleSpawnInfo_TypeDefinitionIndex = 9961;

	class UCParticleSpawnInfo : public Il2CppObject
	{
	public:
		::System::Boolean IsEntityEffect; // 0x10
		::System::String* Filename; // 0x18
		::System::String* Bone; // 0x20
		::System::Single SpawnTime; // 0x28
		::System::Single Duration; // 0x2C
		::UnityEngine::Vector3* LocalPosition; // 0x30
		::UnityEngine::Quaternion* LocalRotation; // 0x3C

	};
}

