#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class LaunchArgsData; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C43D90)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETTICKET_OFFSET UNITYSDK_OFFSET(0x9C44250)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETNPP_OFFSET UNITYSDK_OFFSET(0x9C44270)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_ISNPPLOGIN_OFFSET UNITYSDK_OFFSET(0x9C444F0)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_ISTICKETLOGIN_OFFSET UNITYSDK_OFFSET(0x9C444C0)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETREGION_OFFSET UNITYSDK_OFFSET(0x9C44290)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETNXLOGSESSIONID_OFFSET UNITYSDK_OFFSET(0x9C44330)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9C43E40)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETPLOG_OFFSET UNITYSDK_OFFSET(0x9C44410)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETCEFDEBUGPORT_OFFSET UNITYSDK_OFFSET(0x9C44430)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADFROMENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9C46EA0)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_APPLYENVFIELD_OFFSET UNITYSDK_OFFSET(0x9C473B0)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADFROMCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x9C47240)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADCOMMANDLINEARGSFORWINDOW_OFFSET UNITYSDK_OFFSET(0x9C47490)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADCOMMANDLINEARGSFORMACOS_OFFSET UNITYSDK_OFFSET(0x9C47500)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_PARSETARGETARGS_OFFSET UNITYSDK_OFFSET(0x9C47BF0)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_APPENDCOMMANDLINEARG_OFFSET UNITYSDK_OFFSET(0x9C485E0)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9C43E60)
#define NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C48A30)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPToyLaunchArgs_TypeDefinitionIndex = 26851;

	class NXPToyLaunchArgs : public Il2CppObject
	{
	public:
		::System::String* ENV_KEY; // 0x0
		::System::String* ENV_JSON_TICKET; // 0x0
		::System::String* ENV_JSON_PASSPORT; // 0x0
		::System::String* ENV_JSON_SID; // 0x0
		::System::String* CMD_TICKET; // 0x0
		::System::String* CMD_PASSPORT; // 0x0
		::System::String* CMD_SID; // 0x0
		::System::String* CMD_NX_LOG_SESSION_ID; // 0x0
		::System::String* CMD_LOCALE; // 0x0
		::System::String* CMD_EXECUTION_INFO; // 0x0
		::System::String* CMD_PRIVATE_LOG; // 0x0
		::System::String* CMD_CEF_DEBUG_PORT; // 0x0
		Il2CppObject* CmdArgKeys; // 0x0
		::NPA::Editor::Common::LaunchArgsData* data; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetTicket()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETTICKET_OFFSET))(nullptr);
		}

		::System::String* GetNPP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETNPP_OFFSET))(nullptr);
		}

		::System::Boolean IsNppLogin()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_ISNPPLOGIN_OFFSET))(nullptr);
		}

		::System::Boolean IsTicketLogin()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_ISTICKETLOGIN_OFFSET))(nullptr);
		}

		::System::String* GetRegion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETREGION_OFFSET))(nullptr);
		}

		::System::String* GetNXLogSessionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETNXLOGSESSIONID_OFFSET))(nullptr);
		}

		::System::String* GetExecutionInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETEXECUTIONINFO_OFFSET))(nullptr);
		}

		::System::String* GetPLog()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETPLOG_OFFSET))(nullptr);
		}

		::System::String* GetCefDebugPort()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_GETCEFDEBUGPORT_OFFSET))(nullptr);
		}

		::System::Void LoadFromEnvironment(::NPA::Editor::Common::LaunchArgsData* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::LaunchArgsData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADFROMENVIRONMENT_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyEnvField(::NPA::SimpleJSON::JSONNode* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_APPLYENVFIELD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void LoadFromCommandLine(::NPA::Editor::Common::LaunchArgsData* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::LaunchArgsData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADFROMCOMMANDLINE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadCommandLineArgsForWindow(::NPA::Editor::Common::LaunchArgsData* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::LaunchArgsData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADCOMMANDLINEARGSFORWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Void LoadCommandLineArgsForMacOS(::NPA::Editor::Common::LaunchArgsData* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::LaunchArgsData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADCOMMANDLINEARGSFORMACOS_OFFSET))(arg, nullptr);
		}

		::System::Void ParseTargetArgs(::NPA::Editor::Common::LaunchArgsData* arg, Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::LaunchArgsData*, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_PARSETARGETARGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AppendCommandLineArg(::NPA::Editor::Common::LaunchArgsData* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Editor::Common::LaunchArgsData*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_APPENDCOMMANDLINEARG_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void LoadExecutionInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_LOADEXECUTIONINFO_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYLAUNCHARGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

