#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

namespace UnityEngine
{
	inline static constexpr unsigned int SkeletonBone_TypeDefinitionIndex = 36473;

	class SkeletonBone : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* parentName; // 0x18
		::UnityEngine::Vector3* position; // 0x20
		::UnityEngine::Quaternion* rotation; // 0x2C
		::UnityEngine::Vector3* scale; // 0x3C

	};
}

