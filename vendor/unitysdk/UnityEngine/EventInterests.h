#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class EventType; }

#define UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEMOVE_OFFSET UNITYSDK_OFFSET(0xA277600)
#define UNITYENGINE_EVENTINTERESTS_SET_WANTSMOUSEMOVE_OFFSET UNITYSDK_OFFSET(0xA277610)
#define UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEENTERLEAVEWINDOW_OFFSET UNITYSDK_OFFSET(0xA277620)
#define UNITYENGINE_EVENTINTERESTS_SET_WANTSMOUSEENTERLEAVEWINDOW_OFFSET UNITYSDK_OFFSET(0xA277630)
#define UNITYENGINE_EVENTINTERESTS_GET_WANTSLESSLAYOUTEVENTS_OFFSET UNITYSDK_OFFSET(0xA277640)
#define UNITYENGINE_EVENTINTERESTS_WANTSEVENT_OFFSET UNITYSDK_OFFSET(0xA277650)
#define UNITYENGINE_EVENTINTERESTS_WANTSLAYOUTPASS_OFFSET UNITYSDK_OFFSET(0xA277670)

namespace UnityEngine
{
	inline static constexpr unsigned int EventInterests_TypeDefinitionIndex = 36530;

	class EventInterests : public Il2CppObject
	{
	public:
		::System::Boolean _wantsMouseMove_k__BackingField; // 0x10
		::System::Boolean _wantsMouseEnterLeaveWindow_k__BackingField; // 0x11
		::System::Boolean _wantsLessLayoutEvents_k__BackingField; // 0x12

		::System::Boolean get_wantsMouseMove()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEMOVE_OFFSET))(nullptr);
		}

		::System::Void set_wantsMouseMove(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_SET_WANTSMOUSEMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_wantsMouseEnterLeaveWindow()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_GET_WANTSMOUSEENTERLEAVEWINDOW_OFFSET))(nullptr);
		}

		::System::Void set_wantsMouseEnterLeaveWindow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_SET_WANTSMOUSEENTERLEAVEWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_wantsLessLayoutEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_GET_WANTSLESSLAYOUTEVENTS_OFFSET))(nullptr);
		}

		::System::Boolean WantsEvent(::UnityEngine::EventType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_WANTSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean WantsLayoutPass(::UnityEngine::EventType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTINTERESTS_WANTSLAYOUTPASS_OFFSET))(arg, nullptr);
		}

	};
}

