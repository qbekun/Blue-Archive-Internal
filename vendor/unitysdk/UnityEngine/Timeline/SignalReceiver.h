#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class SignalAsset; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class INotification; }

#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGESIGNALATINDEX_OFFSET UNITYSDK_OFFSET(0xA1A7360)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1A75C0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVE_OFFSET UNITYSDK_OFFSET(0xA1A75D0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVEATINDEX_OFFSET UNITYSDK_OFFSET(0xA1A7730)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGEREACTIONATINDEX_OFFSET UNITYSDK_OFFSET(0xA1A78A0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0xA1A7960)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A7B20)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTION_OFFSET UNITYSDK_OFFSET(0xA1A7C60)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDREACTION_OFFSET UNITYSDK_OFFSET(0xA1A7CA0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_COUNT_OFFSET UNITYSDK_OFFSET(0xA1A7EF0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREGISTEREDSIGNALS_OFFSET UNITYSDK_OFFSET(0xA1A7F40)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETSIGNALASSETATINDEX_OFFSET UNITYSDK_OFFSET(0xA1A7F60)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDEMPTYREACTION_OFFSET UNITYSDK_OFFSET(0xA1A8010)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTIONATINDEX_OFFSET UNITYSDK_OFFSET(0xA1A8070)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalReceiver_TypeDefinitionIndex = 36299;

	class SignalReceiver : public Il2CppObject
	{
	public:
		EventKeyValue* m_Events; // 0x18

		::System::Void ChangeSignalAtIndex(::System::Int32 arg, ::UnityEngine::Timeline::SignalAsset* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Timeline::SignalAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGESIGNALATINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Remove(::UnityEngine::Timeline::SignalAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::SignalAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAtIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVEATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeReactionAtIndex(::System::Int32 arg, ::UnityEngine::Events::UnityEvent* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Events::UnityEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGEREACTIONATINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnNotify(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::INotification* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::INotification*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONNOTIFY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Events::UnityEvent* GetReaction(::UnityEngine::Timeline::SignalAsset* arg)
		{
			return (return (::UnityEngine::Events::UnityEvent*(*)(::UnityEngine::Timeline::SignalAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddReaction(::UnityEngine::Timeline::SignalAsset* arg, ::UnityEngine::Events::UnityEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDREACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetRegisteredSignals()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREGISTEREDSIGNALS_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::SignalAsset* GetSignalAssetAtIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::Timeline::SignalAsset*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETSIGNALASSETATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddEmptyReaction(::UnityEngine::Events::UnityEvent* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Events::UnityEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDEMPTYREACTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Events::UnityEvent* GetReactionAtIndex(::System::Int32 arg)
		{
			return (return (::UnityEngine::Events::UnityEvent*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTIONATINDEX_OFFSET))(arg, nullptr);
		}

	};
}

