#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher; }

	inline static constexpr unsigned int LayoutMatcher_TypeDefinitionIndex = 28858;

	class LayoutMatcher : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::InternedString* layoutName; // 0x10
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* deviceMatcher; // 0x20

	};

