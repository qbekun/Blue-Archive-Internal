#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class INXPApp; }
namespace NPA::Editor { class NXPToySession; }
namespace NPA::Editor::Games { class GameIdentifiers; }
namespace NPA { class NXPFieldFilterType; }

#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GET_ACCOUNTNO_OFFSET UNITYSDK_OFFSET(0x9CBF920)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SET_ACCOUNTNO_OFFSET UNITYSDK_OFFSET(0x9CBF930)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GET_CANACCEPTPRESET_OFFSET UNITYSDK_OFFSET(0x9CBF940)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CBF950)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_ONCHANGESESSION_OFFSET UNITYSDK_OFFSET(0x9CBFC70)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_ONCHANGEGAMEIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0x9CC0340)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDNXCOMMANDINFO_OFFSET UNITYSDK_OFFSET(0x9CBFD00)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9CC03D0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_UPDATEUSERINFO_OFFSET UNITYSDK_OFFSET(0x9CC09A0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9CC0E00)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDFUNNEL_OFFSET UNITYSDK_OFFSET(0x9CC0E90)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDNXLOG_OFFSET UNITYSDK_OFFSET(0x9CC0F20)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETNEXONANALYTICSUSERINFO_OFFSET UNITYSDK_OFFSET(0x9CC0FB0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9CC1250)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDSTAGELOG_OFFSET UNITYSDK_OFFSET(0x9CC1310)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDERRORLOG_OFFSET UNITYSDK_OFFSET(0x9CC1390)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDLOG_OFFSET UNITYSDK_OFFSET(0x9CC1410)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9CC14A0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDDEVLOG_OFFSET UNITYSDK_OFFSET(0x9CC1520)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDASSIGNINFOUSER_OFFSET UNITYSDK_OFFSET(0x9CC15A0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETCOMMONFIELDFILTER_OFFSET UNITYSDK_OFFSET(0x9CC1780)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETBACKUPFILELIMIT_OFFSET UNITYSDK_OFFSET(0x9CC1820)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETLOGQUEUEMAXSIZE_OFFSET UNITYSDK_OFFSET(0x9CC18A0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETMESSAGEBULKCOUNT_OFFSET UNITYSDK_OFFSET(0x9CC1910)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETMESSAGEBULKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9CC1980)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETCURRENTGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9CC19F0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GETCOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9CC1A70)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETEXTRACOMMONFIELD_OFFSET UNITYSDK_OFFSET(0x9CC1AF0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_APPLYPENDINGPRESETS_OFFSET UNITYSDK_OFFSET(0x9CC0500)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_REGISTERDELIVERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CC1B90)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_UNREGISTERDELIVERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CC1C70)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDSYSTEMINFOLOG_OFFSET UNITYSDK_OFFSET(0x9CC1CF0)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETINPUTLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x9CC1D00)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9CC1D10)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GETINPUTLOGOPTION_OFFSET UNITYSDK_OFFSET(0x9CC1D20)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_REGISTERKEYMAPINFO_OFFSET UNITYSDK_OFFSET(0x9CC1D30)
#define NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9CC1D40)

namespace NPA::Editor::Analytics
{
	inline static constexpr unsigned int NXPAnalyticsBase_TypeDefinitionIndex = 27211;

	class NXPAnalyticsBase : public Il2CppObject
	{
	public:
		::System::String* KEY_REASON; // 0x0
		::System::String* KEY_GAME_ID; // 0x0
		::System::String* KEY_GAME_SERVER_ID; // 0x0
		::System::String* KEY_GAME_USER_ID; // 0x0
		::System::String* KEY_GAME_CHARACTER_ID; // 0x0
		::System::String* KEY_WORLD_ID; // 0x0
		::System::String* KEY_CHANNEL_ID; // 0x0
		::System::String* _AccountNo_k__BackingField; // 0x10
		::System::Boolean isAnalyticsIntialized; // 0x18
		Il2CppObject* cachedCommonFieldFilters; // 0x20
		Il2CppObject* cachedExtraCommonFields; // 0x28
		::System::UInt64 cachedBackupFileLimitSize; // 0x30
		::System::Int32 cachedQueueSize; // 0x38
		::System::UInt32 cachedMessageBulkCount; // 0x3C
		::System::UInt32 cachedMessageBulkTimeout; // 0x40

		::System::String* get_AccountNo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GET_ACCOUNTNO_OFFSET))(nullptr);
		}

		::System::Void set_AccountNo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SET_ACCOUNTNO_OFFSET))(str, nullptr);
		}

		::System::Boolean get_CanAcceptPreset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GET_CANACCEPTPRESET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeSession(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_ONCHANGESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameIdentifiers(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_ONCHANGEGAMEIDENTIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Void SendNXCommandInfo(::System::String* str, ::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDNXCOMMANDINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void UpdateUserInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_UPDATEUSERINFO_OFFSET))(nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDFUNNEL_OFFSET))(str, nullptr);
		}

		::System::Boolean SendFunnel(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDFUNNEL_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendNXLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDNXLOG_OFFSET))(str, str, nullptr);
		}

		::System::Void SetNexonAnalyticsUserInfo(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETNEXONANALYTICSUSERINFO_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetNexonAnalyticsUserExtraInfo(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETNEXONANALYTICSUSEREXTRAINFO_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SendStageLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDSTAGELOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendErrorLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDERRORLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendLog(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDLOG_OFFSET))(str, str, nullptr);
		}

		::System::Boolean SetNexonAnalyticsDevLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETNEXONANALYTICSDEVLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SendDevLog(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDDEVLOG_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SendAssignInfoUser(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDASSIGNINFOUSER_OFFSET))(str, str, nullptr);
		}

		::System::Boolean PresetCommonFieldFilter(::System::String* str, ::NPA::NXPFieldFilterType* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::NPA::NXPFieldFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETCOMMONFIELDFILTER_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean PresetBackupFileLimit(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETBACKUPFILELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetLogQueueMaxSize(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETLOGQUEUEMAXSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetMessageBulkCount(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETMESSAGEBULKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PresetMessageBulkTimeout(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_PRESETMESSAGEBULKTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetCurrentGameState(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETCURRENTGAMESTATE_OFFSET))(str, nullptr);
		}

		::System::String* GetCommonField(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GETCOMMONFIELD_OFFSET))(str, nullptr);
		}

		::System::Boolean SetExtraCommonField(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETEXTRACOMMONFIELD_OFFSET))(str, str, nullptr);
		}

		::System::Void ApplyPendingPresets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_APPLYPENDINGPRESETS_OFFSET))(nullptr);
		}

		::System::Void RegisterDeliveryCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_REGISTERDELIVERYCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterDeliveryCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_UNREGISTERDELIVERYCALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean SendSystemInfoLog(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDSYSTEMINFOLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean SetInputLogLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETINPUTLOGLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetInputLogOption(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SETINPUTLOGOPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputLogOption(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_GETINPUTLOGOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterKeymapInfo(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_REGISTERKEYMAPINFO_OFFSET))(str, arg, arg, str, nullptr);
		}

		::System::Boolean SendInputAction(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSBASE_SENDINPUTACTION_OFFSET))(str, str, nullptr);
		}

	};
}

