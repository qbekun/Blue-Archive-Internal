#pragma once
#include "unitysdk.h"

namespace UnityEngine::Timeline { class SignalAsset; }
namespace UnityEngine::Events { class UnityEvent&; }
namespace UnityEngine::Events { class UnityEvent; }

#define EVENTKEYVALUE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xA1A7A80)
#define EVENTKEYVALUE_APPEND_OFFSET UNITYSDK_OFFSET(0xA1A7DD0)
#define EVENTKEYVALUE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA1A7820)
#define EVENTKEYVALUE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA1A7690)
#define EVENTKEYVALUE_GET_SIGNALS_OFFSET UNITYSDK_OFFSET(0xA1A8120)
#define EVENTKEYVALUE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0xA1A8130)
#define EVENTKEYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A7B90)

	inline static constexpr unsigned int EventKeyValue_TypeDefinitionIndex = 36298;

	class EventKeyValue : public Il2CppObject
	{
	public:
		Il2CppObject* m_Signals; // 0x10
		Il2CppObject* m_Events; // 0x18

		::System::Boolean TryGetValue(::UnityEngine::Timeline::SignalAsset* arg, ::UnityEngine::Events::UnityEvent&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTKEYVALUE_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Append(::UnityEngine::Timeline::SignalAsset* arg, ::UnityEngine::Events::UnityEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTKEYVALUE_APPEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTKEYVALUE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::UnityEngine::Timeline::SignalAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::SignalAsset*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTKEYVALUE_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_signals()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTKEYVALUE_GET_SIGNALS_OFFSET))(nullptr);
		}

		Il2CppObject* get_events()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTKEYVALUE_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTKEYVALUE_.CTOR_OFFSET))(nullptr);
		}

	};

