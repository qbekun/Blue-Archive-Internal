#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector2; }

#define CINEMACHINE_UTILITY_UNITYRECTEXTENSIONS_INFLATED_OFFSET UNITYSDK_OFFSET(0x2889120)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityRectExtensions_TypeDefinitionIndex = 34417;

	class UnityRectExtensions : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* Inflated(::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYRECTEXTENSIONS_INFLATED_OFFSET))(arg, arg, nullptr);
		}

	};
}

