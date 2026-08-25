#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class AnalyticsClientConfig; }
namespace NPA { class NXPFieldFilterType; }

#define NPA_INFACESDK_COMPONENT_ANALYTICS_LOADMODULE_OFFSET UNITYSDK_OFFSET(0x9CFB630)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9CFB7A0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9CFB8B0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETCLIENTCONFIG_OFFSET UNITYSDK_OFFSET(0x9CFB9C0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_PRESETCOMMONFIELDFILTER_OFFSET UNITYSDK_OFFSET(0x9CFBB00)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETUSEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9CFBCC0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETUSEREXTRAINFOJSON_OFFSET UNITYSDK_OFFSET(0x9CFBE90)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETASSIGNINFOUSER_OFFSET UNITYSDK_OFFSET(0x9CFC0A0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETDEVLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9CFC240)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETCURRENTGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9CFC360)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETEXTRACOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9CFC4F0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_GETCOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9CFC710)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETINPUTLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9CFC910)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_SETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9CFCA30)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_GETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9CFCB50)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_REGISTERKEYMAPINFO_OFFSET UNITYSDK_OFFSET(0x9CFCC50)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEFUNNELLOG_OFFSET UNITYSDK_OFFSET(0x9CFCE90)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUENEXONLOG_OFFSET UNITYSDK_OFFSET(0x9CFD0C0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUELOG_OFFSET UNITYSDK_OFFSET(0x9CFD320)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUESTAGELOG_OFFSET UNITYSDK_OFFSET(0x9CFD580)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEERRORLOG_OFFSET UNITYSDK_OFFSET(0x9CFD790)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUESYSTEMINFOLOG_OFFSET UNITYSDK_OFFSET(0x9CFD9A0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEDEVLOG_OFFSET UNITYSDK_OFFSET(0x9CFDB90)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9CFDDA0)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_ONDELIVERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CFE000)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFE190)
#define NPA_INFACESDK_COMPONENT_ANALYTICS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CFE2E0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Analytics_TypeDefinitionIndex = 25839;

	class Analytics : public Il2CppObject
	{
	public:
		::System::Void LoadModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_LOADMODULE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_INITIALIZE_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Boolean SetClientConfig(::NPA::InfaceSDK::Component::AnalyticsClientConfig* arg)
		{
			return (return (::System::Boolean(*)(::NPA::InfaceSDK::Component::AnalyticsClientConfig*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETCLIENTCONFIG_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetCommonFieldFilter(::System::String* str, ::NPA::NXPFieldFilterType* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::NPA::NXPFieldFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_PRESETCOMMONFIELDFILTER_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean SetUserExtraInfo(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETUSEREXTRAINFO_OFFSET))(str, str, str, nullptr);
		}

		::System::Boolean SetUserExtraInfoJson(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETUSEREXTRAINFOJSON_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetAssignInfoUser(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETASSIGNINFOUSER_OFFSET))(str, nullptr);
		}

		::System::Boolean SetDevLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETDEVLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetCurrentGameState(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETCURRENTGAMESTATE_OFFSET))(str, nullptr);
		}

		::System::Boolean SetExtraCommonField(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETEXTRACOMMONFIELD_OFFSET))(str, str, nullptr);
		}

		::System::String* GetCommonField(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_GETCOMMONFIELD_OFFSET))(str, nullptr);
		}

		::System::Boolean SetInputLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETINPUTLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetInputLogOption(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_SETINPUTLOGOPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputLogOption(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_GETINPUTLOGOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterKeymapInfo(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_REGISTERKEYMAPINFO_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Boolean EnqueueFunnelLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEFUNNELLOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean EnqueueNexonLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUENEXONLOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean EnqueueLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUELOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean EnqueueStageLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUESTAGELOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean EnqueueErrorLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEERRORLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean EnqueueSystemInfoLog(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUESYSTEMINFOLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean EnqueueDevLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEDEVLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean EnqueueInputAction(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ENQUEUEINPUTACTION_OFFSET))(str, str, nullptr);
		}

		::System::Void OnDeliveryCallback(DeliveryCallbackDelegate* arg)
		{
			((::System::Void(*)(DeliveryCallbackDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_ONDELIVERYCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_ANALYTICS_DISPOSE_OFFSET))(nullptr);
		}

	};
}

