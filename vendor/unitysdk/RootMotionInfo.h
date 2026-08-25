#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

	inline static constexpr unsigned int RootMotionInfo_TypeDefinitionIndex = 35299;

	class RootMotionInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* start; // 0x10
		::UnityEngine::Vector2* current; // 0x18
		::UnityEngine::Vector2* mid; // 0x20
		::UnityEngine::Vector2* end; // 0x28
		::System::Boolean timeIsPastMid; // 0x30

	};

