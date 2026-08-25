#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPFieldFilterType; }

#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_UPDATEUSERINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDNXLOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETNEXONANALYTICSUSERINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDSTAGELOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDERRORLOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDLOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDDEVLOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDASSIGNINFOUSER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETCOMMONFIELDFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETBACKUPFILELIMIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETLOGQUEUEMAXSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETMESSAGEBULKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETMESSAGEBULKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETCURRENTGAMESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_GETCOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETEXTRACOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDSYSTEMINFOLOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETINPUTLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_GETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_REGISTERKEYMAPINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDINPUTACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_REGISTERDELIVERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_ANALYTICS_INXPANALYTICS_UNREGISTERDELIVERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Analytics
{
	inline static constexpr unsigned int INXPAnalytics_TypeDefinitionIndex = 27210;

	class INXPAnalytics : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void UpdateUserInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_UPDATEUSERINFO_OFFSET))(nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDFUNNEL_OFFSET))(str, nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDFUNNEL_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendNXLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDNXLOG_OFFSET))(str, str, nullptr);
		}

		::System::Void SetNexonAnalyticsUserInfo(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETNEXONANALYTICSUSERINFO_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetNexonAnalyticsUserExtraInfo(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendStageLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDSTAGELOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendErrorLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDERRORLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDLOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetNexonAnalyticsDevLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendDevLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDDEVLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendAssignInfoUser(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDASSIGNINFOUSER_OFFSET))(str, str, nullptr);
		}

		::System::Boolean PresetCommonFieldFilter(::System::String* str, ::NPA::NXPFieldFilterType* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::NPA::NXPFieldFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETCOMMONFIELDFILTER_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean PresetBackupFileLimit(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETBACKUPFILELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetLogQueueMaxSize(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETLOGQUEUEMAXSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetMessageBulkCount(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETMESSAGEBULKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetMessageBulkTimeout(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_PRESETMESSAGEBULKTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetCurrentGameState(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETCURRENTGAMESTATE_OFFSET))(str, nullptr);
		}

		::System::String* GetCommonField(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_GETCOMMONFIELD_OFFSET))(str, nullptr);
		}

		::System::Boolean SetExtraCommonField(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETEXTRACOMMONFIELD_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendSystemInfoLog(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDSYSTEMINFOLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean SetInputLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETINPUTLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetInputLogOption(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SETINPUTLOGOPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputLogOption(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_GETINPUTLOGOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterKeymapInfo(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_REGISTERKEYMAPINFO_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Boolean SendInputAction(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_SENDINPUTACTION_OFFSET))(str, str, nullptr);
		}

		::System::Void RegisterDeliveryCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_REGISTERDELIVERYCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterDeliveryCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_INXPANALYTICS_UNREGISTERDELIVERYCALLBACK_OFFSET))(nullptr);
		}

	};
}

