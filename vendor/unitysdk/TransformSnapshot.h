#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

	inline static constexpr unsigned int TransformSnapshot_TypeDefinitionIndex = 9179;

	class TransformSnapshot : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Position; // 0x10
		::UnityEngine::Quaternion* Rotation; // 0x1C
		::UnityEngine::Vector3* Scale; // 0x2C

	};

