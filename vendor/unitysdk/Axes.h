#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

	inline static constexpr unsigned int Axes_TypeDefinitionIndex = 33776;

	class Axes : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* up; // 0x10
		::UnityEngine::Vector3* right; // 0x1C
		::UnityEngine::Vector3* forward; // 0x28

	};

