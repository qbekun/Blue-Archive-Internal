#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class TimerState; }

#define SIMPLESCHEDULEDITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3399C0)
#define SIMPLESCHEDULEDITEM_PERFORMTIMERUPDATE_OFFSET UNITYSDK_OFFSET(0xA33C3B0)

	inline static constexpr unsigned int SimpleScheduledItem_TypeDefinitionIndex = 30177;

	class SimpleScheduledItem : public ::System::Net::NetworkInformation::Win32_FIXED_INFO_Marshal
	{
	public:
		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLESCHEDULEDITEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PerformTimerUpdate(::UnityEngine::UIElements::TimerState* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TimerState*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLESCHEDULEDITEM_PERFORMTIMERUPDATE_OFFSET))(arg, nullptr);
		}

	};

