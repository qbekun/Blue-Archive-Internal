#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPToyNexonLinkOption; }
namespace NPA::InfaceSDK::Component { class NexonLinkCommonEvent; }
namespace NPA::InfaceSDK::Component { class NexonLinkResolutionChangeEvent; }
namespace NPA::InfaceSDK::Component { class NexonLinkMouseEvent; }
namespace NPA::InfaceSDK::Component { class NexonLinkKeyboardEvent; }

#define NPA_EDITOR_OPERATE_NEXONLINK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C15330)
#define NPA_EDITOR_OPERATE_NEXONLINK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9C15FF0)
#define NPA_EDITOR_OPERATE_NEXONLINK_NEXONLINKISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9C162A0)
#define NPA_EDITOR_OPERATE_NEXONLINK_NEXONLINKISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9C15D50)
#define NPA_EDITOR_OPERATE_NEXONLINK_SETCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C16320)
#define NPA_EDITOR_OPERATE_NEXONLINK_SETDISCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C164D0)
#define NPA_EDITOR_OPERATE_NEXONLINK_SETRESOLUTIONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C16680)
#define NPA_EDITOR_OPERATE_NEXONLINK_SETMOUSEEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C16830)
#define NPA_EDITOR_OPERATE_NEXONLINK_SETKEYBOARDEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C16950)
#define NPA_EDITOR_OPERATE_NEXONLINK_SETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9C16A70)
#define NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKCONNECTED_OFFSET UNITYSDK_OFFSET(0x9C16B70)
#define NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9C16C70)
#define NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9C16D70)
#define NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9C16E80)
#define NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKKEYBOARDEVENT_OFFSET UNITYSDK_OFFSET(0x9C17050)
#define NPA_EDITOR_OPERATE_NEXONLINK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C173D0)

namespace NPA::Editor::Operate
{
	inline static constexpr unsigned int NexonLink_TypeDefinitionIndex = 26605;

	class NexonLink : public Il2CppObject
	{
	public:
		Il2CppObject* storedNexonLinkConnectedCallback; // 0x0
		Il2CppObject* storedNexonLinkDisconnectedCallback; // 0x8
		Il2CppObject* storedNexonLinkResolutionChangedCallback; // 0x10
		Il2CppObject* storedNexonLinkMouseEventCallback; // 0x18
		Il2CppObject* storedNexonLinkKeyboardEventCallback; // 0x20
		Il2CppObject* nexonLinkLogQueue; // 0x28

		::System::Void Initialize(::NPA::NXPToyNexonLinkOption* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPToyNexonLinkOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_FINALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean NexonLinkIsConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_NEXONLINKISCONNECTED_OFFSET))(nullptr);
		}

		::System::Boolean NexonLinkIsSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_NEXONLINKISSUPPORTED_OFFSET))(nullptr);
		}

		::System::Void SetConnectedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_SETCONNECTEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisconnectedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_SETDISCONNECTEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetResolutionChangedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_SETRESOLUTIONCHANGEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetMouseEventCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_SETMOUSEEVENTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeyboardEventCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_SETKEYBOARDEVENTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisplayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_SETDISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Void OnNexonLinkConnected(::NPA::InfaceSDK::Component::NexonLinkCommonEvent* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkCommonEvent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNexonLinkDisconnected(::NPA::InfaceSDK::Component::NexonLinkCommonEvent* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkCommonEvent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKDISCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNexonLinkResolutionChanged(::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKRESOLUTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNexonLinkMouseEvent(::NPA::InfaceSDK::Component::NexonLinkMouseEvent* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkMouseEvent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKMOUSEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnNexonLinkKeyboardEvent(::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_ONNEXONLINKKEYBOARDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NEXONLINK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

