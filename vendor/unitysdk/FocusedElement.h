#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class Focusable; }

	inline static constexpr unsigned int FocusedElement_TypeDefinitionIndex = 30099;

	class FocusedElement : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_SubTreeRoot; // 0x10
		::UnityEngine::UIElements::Focusable* m_FocusedElement; // 0x18

	};

