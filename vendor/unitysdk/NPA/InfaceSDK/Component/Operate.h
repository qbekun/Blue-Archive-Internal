#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class Operate_NexonLinkCommonEventCallback; }
namespace NPA::InfaceSDK::Component { class Operate_NexonLinkResolutionChangeEventCallback; }
namespace NPA::InfaceSDK::Component { class Operate_NexonLinkMouseEventCallback; }
namespace NPA::InfaceSDK::Component { class Operate_NexonLinkKeyboardEventCallback; }
namespace NPA::InfaceSDK::Component { class NexonLinkInitializeArgs; }
namespace NPA::InfaceSDK::Component { class NexonLinkCommonEvent&; }
namespace NPA::InfaceSDK::Component { class NexonLinkResolutionChangeEvent&; }
namespace NPA::InfaceSDK::Component { class NexonLinkMouseEvent&; }
namespace NPA::InfaceSDK::Component { class NexonLinkKeyboardEvent&; }

#define NPA_INFACESDK_COMPONENT_OPERATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D13E90)
#define NPA_INFACESDK_COMPONENT_OPERATE_ONDISPOSING_OFFSET UNITYSDK_OFFSET(0x9D13FD0)
#define NPA_INFACESDK_COMPONENT_OPERATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D14030)
#define NPA_INFACESDK_COMPONENT_OPERATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D141A0)
#define NPA_INFACESDK_COMPONENT_OPERATE_GETCONTEXTPTR_OFFSET UNITYSDK_OFFSET(0x9D14700)
#define NPA_INFACESDK_COMPONENT_OPERATE_FREECONTEXT_OFFSET UNITYSDK_OFFSET(0x9D14000)
#define NPA_INFACESDK_COMPONENT_OPERATE_INITIALIZENEXONLINK_OFFSET UNITYSDK_OFFSET(0x9D14740)
#define NPA_INFACESDK_COMPONENT_OPERATE_FINALIZENEXONLINK_OFFSET UNITYSDK_OFFSET(0x9D148E0)
#define NPA_INFACESDK_COMPONENT_OPERATE_ISNEXONLINKCONNECTED_OFFSET UNITYSDK_OFFSET(0x9D14A00)
#define NPA_INFACESDK_COMPONENT_OPERATE_ISNEXONLINKSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9D14B00)
#define NPA_INFACESDK_COMPONENT_OPERATE_SETNEXONLINKDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9D14C00)
#define NPA_INFACESDK_COMPONENT_OPERATE_SETONCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D14D20)
#define NPA_INFACESDK_COMPONENT_OPERATE_SETONDISCONNECTEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D14EF0)
#define NPA_INFACESDK_COMPONENT_OPERATE_SETONRESOLUTIONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D150D0)
#define NPA_INFACESDK_COMPONENT_OPERATE_SETONMOUSEEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D152B0)
#define NPA_INFACESDK_COMPONENT_OPERATE_SETONKEYBOARDEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D15490)
#define NPA_INFACESDK_COMPONENT_OPERATE_ONCONNECTEDNATIVE_OFFSET UNITYSDK_OFFSET(0x9D134A0)
#define NPA_INFACESDK_COMPONENT_OPERATE_ONDISCONNECTEDNATIVE_OFFSET UNITYSDK_OFFSET(0x9D13680)
#define NPA_INFACESDK_COMPONENT_OPERATE_ONRESOLUTIONCHANGEDNATIVE_OFFSET UNITYSDK_OFFSET(0x9D13860)
#define NPA_INFACESDK_COMPONENT_OPERATE_ONMOUSEEVENTNATIVE_OFFSET UNITYSDK_OFFSET(0x9D13A50)
#define NPA_INFACESDK_COMPONENT_OPERATE_ONKEYBOARDEVENTNATIVE_OFFSET UNITYSDK_OFFSET(0x9D13C70)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Operate_TypeDefinitionIndex = 25901;

	class Operate : public Il2CppObject
	{
	public:
		::NPA::InfaceSDK::Component::Operate_NexonLinkCommonEventCallback* _onConnectedDelegate; // 0x0
		::NPA::InfaceSDK::Component::Operate_NexonLinkCommonEventCallback* _onDisconnectedDelegate; // 0x8
		::NPA::InfaceSDK::Component::Operate_NexonLinkResolutionChangeEventCallback* _onResolutionChangedDelegate; // 0x10
		::NPA::InfaceSDK::Component::Operate_NexonLinkMouseEventCallback* _onMouseEventDelegate; // 0x18
		::NPA::InfaceSDK::Component::Operate_NexonLinkKeyboardEventCallback* _onKeyboardEventDelegate; // 0x20
		Il2CppObject* _connectedAction; // 0x18
		Il2CppObject* _disconnectedAction; // 0x20
		Il2CppObject* _resolutionChangedAction; // 0x28
		Il2CppObject* _mouseEventAction; // 0x30
		Il2CppObject* _keyboardEventAction; // 0x38
		::System::Runtime::InteropServices::GCHandle* _contextHandle; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisposing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ONDISPOSING_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetContextPtr()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_GETCONTEXTPTR_OFFSET))(nullptr);
		}

		::System::Void FreeContext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_FREECONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean InitializeNexonLink(::NPA::InfaceSDK::Component::NexonLinkInitializeArgs* arg)
		{
			return (return (::System::Boolean(*)(::NPA::InfaceSDK::Component::NexonLinkInitializeArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_INITIALIZENEXONLINK_OFFSET))(arg, nullptr);
		}

		::System::Boolean FinalizeNexonLink()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_FINALIZENEXONLINK_OFFSET))(nullptr);
		}

		::System::Boolean IsNexonLinkConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ISNEXONLINKCONNECTED_OFFSET))(nullptr);
		}

		::System::Boolean IsNexonLinkSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ISNEXONLINKSUPPORTED_OFFSET))(nullptr);
		}

		::System::Boolean SetNexonLinkDisplayName(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_SETNEXONLINKDISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetOnConnectedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_SETONCONNECTEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnDisconnectedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_SETONDISCONNECTEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnResolutionChangedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_SETONRESOLUTIONCHANGEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnMouseEventCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_SETONMOUSEEVENTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnKeyboardEventCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_SETONKEYBOARDEVENTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnConnectedNative(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ONCONNECTEDNATIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDisconnectedNative(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkCommonEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ONDISCONNECTEDNATIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnResolutionChangedNative(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkResolutionChangeEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ONRESOLUTIONCHANGEDNATIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnMouseEventNative(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkMouseEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkMouseEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ONMOUSEEVENTNATIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnKeyboardEventNative(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_ONKEYBOARDEVENTNATIVE_OFFSET))(arg, arg, nullptr);
		}

	};
}

