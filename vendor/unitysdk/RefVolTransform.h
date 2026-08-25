#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

	inline static constexpr unsigned int RefVolTransform_TypeDefinitionIndex = 33799;

	class RefVolTransform : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* refSpaceToWS; // 0x10
		::UnityEngine::Vector3* posWS; // 0x50
		::UnityEngine::Quaternion* rot; // 0x5C
		::System::Single scale; // 0x6C

	};

