#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class TimerState; }

#define TIMERSTATESCHEDULEDITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA339860)
#define TIMERSTATESCHEDULEDITEM_PERFORMTIMERUPDATE_OFFSET UNITYSDK_OFFSET(0xA33C370)

	inline static constexpr unsigned int TimerStateScheduledItem_TypeDefinitionIndex = 30176;

	class TimerStateScheduledItem : public <ScopeId>e__FixedBuffer
	{
	public:
		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERSTATESCHEDULEDITEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PerformTimerUpdate(::UnityEngine::UIElements::TimerState* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TimerState*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERSTATESCHEDULEDITEM_PERFORMTIMERUPDATE_OFFSET))(arg, nullptr);
		}

	};

