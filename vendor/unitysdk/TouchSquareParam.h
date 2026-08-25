#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector2Int; }

	inline static constexpr unsigned int TouchSquareParam_TypeDefinitionIndex = 8533;

	class TouchSquareParam : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Position; // 0x10
		::UnityEngine::Vector2Int* Size; // 0x18

	};

