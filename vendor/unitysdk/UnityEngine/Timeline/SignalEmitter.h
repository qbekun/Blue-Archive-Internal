#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class SignalAsset; }
namespace UnityEngine { class PropertyName; }
namespace UnityEngine::Timeline { class NotificationFlags; }

#define UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_EMITONCE_OFFSET UNITYSDK_OFFSET(0xA1A7220)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_EMITONCE_OFFSET UNITYSDK_OFFSET(0xA1A7230)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_ASSET_OFFSET UNITYSDK_OFFSET(0xA1A7240)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE.PLAYABLES.INOTIFICATION.GET_ID_OFFSET UNITYSDK_OFFSET(0xA1A7250)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE.TIMELINE.INOTIFICATIONOPTIONPROVIDER.GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA1A7300)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_ASSET_OFFSET UNITYSDK_OFFSET(0xA1A7320)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_RETROACTIVE_OFFSET UNITYSDK_OFFSET(0xA1A7330)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A7340)
#define UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_RETROACTIVE_OFFSET UNITYSDK_OFFSET(0xA1A7350)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalEmitter_TypeDefinitionIndex = 36297;

	class SignalEmitter : public Il2CppObject
	{
	public:
		::System::Boolean m_Retroactive; // 0x28
		::System::Boolean m_EmitOnce; // 0x29
		::UnityEngine::Timeline::SignalAsset* m_Asset; // 0x30

		::System::Boolean get_emitOnce()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_EMITONCE_OFFSET))(nullptr);
		}

		::System::Void set_emitOnce(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_EMITONCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_asset(::UnityEngine::Timeline::SignalAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::SignalAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_ASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::PropertyName* UnityEngine.Playables.INotification.get_id()
		{
			return (return (::UnityEngine::PropertyName*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE.PLAYABLES.INOTIFICATION.GET_ID_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::NotificationFlags* UnityEngine.Timeline.INotificationOptionProvider.get_flags()
		{
			return (return (::UnityEngine::Timeline::NotificationFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_UNITYENGINE.TIMELINE.INOTIFICATIONOPTIONPROVIDER.GET_FLAGS_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::SignalAsset* get_asset()
		{
			return (return (::UnityEngine::Timeline::SignalAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_ASSET_OFFSET))(nullptr);
		}

		::System::Void set_retroactive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_SET_RETROACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_retroactive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALEMITTER_GET_RETROACTIVE_OFFSET))(nullptr);
		}

	};
}

