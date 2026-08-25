#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

	inline static constexpr unsigned int TransformInfo_TypeDefinitionIndex = 3546;

	class TransformInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* LocalPosition; // 0x10
		::UnityEngine::Quaternion* LocalRotation; // 0x1C

	};

