#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }

	inline static constexpr unsigned int DrawInfo_TypeDefinitionIndex = 768;

	class DrawInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* LT; // 0x10
		::UnityEngine::Vector3* LB; // 0x1C
		::UnityEngine::Vector3* RT; // 0x28
		::UnityEngine::Vector3* RB; // 0x34
		::UnityEngine::Color* Color; // 0x40

	};

