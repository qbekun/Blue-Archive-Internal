#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define VISUALELEMENTSCHEDULEDITEM`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int VisualElementScheduledItem`1_TypeDefinitionIndex = 30175;

	class VisualElementScheduledItem`1 : public Il2CppObject
	{
	public:
		Il2CppObject* updateEvent; // 0x0

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VISUALELEMENTSCHEDULEDITEM`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

