#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETSERVICEID_OFFSET UNITYSDK_OFFSET(0x9D426C0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETCLIENTID_OFFSET UNITYSDK_OFFSET(0x9D427C0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETSERVICEKEY_OFFSET UNITYSDK_OFFSET(0x9D428C0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETPACKAGENAME_OFFSET UNITYSDK_OFFSET(0x9D42950)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x9D429E0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETTICKET_OFFSET UNITYSDK_OFFSET(0x9D429F0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_SETTICKET_OFFSET UNITYSDK_OFFSET(0x9D42A40)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_CONSUMETICKET_OFFSET UNITYSDK_OFFSET(0x9D42AB0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_CLEARTICKET_OFFSET UNITYSDK_OFFSET(0x9D42BA0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETNPP_OFFSET UNITYSDK_OFFSET(0x9D42C90)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_CONSUMENPP_OFFSET UNITYSDK_OFFSET(0x9D42CE0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_SETNPP_OFFSET UNITYSDK_OFFSET(0x9D42DD0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_CLEARNPP_OFFSET UNITYSDK_OFFSET(0x9D42E40)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETNXLOGSESSIONID_OFFSET UNITYSDK_OFFSET(0x9D42F30)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_SETNXLOGSESSIONID_OFFSET UNITYSDK_OFFSET(0x9D42F80)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETREGION_OFFSET UNITYSDK_OFFSET(0x9D42FF0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_SETREGION_OFFSET UNITYSDK_OFFSET(0x9D43040)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETPLOG_OFFSET UNITYSDK_OFFSET(0x9D430B0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_SETPLOG_OFFSET UNITYSDK_OFFSET(0x9D43100)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_HASNEXONAUTHINFOBYCOMMANDLINEARGS_OFFSET UNITYSDK_OFFSET(0x9D43170)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_SETHASNEXONAUTHINFOBYCOMMANDLINEARGS_OFFSET UNITYSDK_OFFSET(0x9D431C0)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_GETCEFDEBUGPORT_OFFSET UNITYSDK_OFFSET(0x9D43210)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_SETCEFDEBUGPORT_OFFSET UNITYSDK_OFFSET(0x9D43260)
#define NPA_EDITOR_NXPTOYSETTINGSINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D432D0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToySettingsInfo_TypeDefinitionIndex = 26136;

	class NXPToySettingsInfo : public Il2CppObject
	{
	public:
		::System::String* serviceKey; // 0x0
		::System::String* packageName; // 0x8
		::System::String* ticket; // 0x10
		::System::String* npp; // 0x18
		::System::String* sid; // 0x20
		::System::String* region; // 0x28
		::System::String* plog; // 0x30
		::System::Boolean hasNexonAuthInfoByCommandlineArgs; // 0x38
		::System::String* cefDebugPort; // 0x40

		::System::String* GetServiceId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETSERVICEID_OFFSET))(nullptr);
		}

		::System::String* GetClientId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETCLIENTID_OFFSET))(nullptr);
		}

		::System::String* GetServiceKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETSERVICEKEY_OFFSET))(nullptr);
		}

		::System::String* GetPackageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETPACKAGENAME_OFFSET))(nullptr);
		}

		::System::Int32 GetVersionCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETVERSIONCODE_OFFSET))(nullptr);
		}

		::System::String* GetTicket()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETTICKET_OFFSET))(nullptr);
		}

		::System::Void SetTicket(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_SETTICKET_OFFSET))(str, nullptr);
		}

		::System::Void ConsumeTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_CONSUMETICKET_OFFSET))(nullptr);
		}

		::System::Void ClearTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_CLEARTICKET_OFFSET))(nullptr);
		}

		::System::String* GetNPP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETNPP_OFFSET))(nullptr);
		}

		::System::Void ConsumeNPP()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_CONSUMENPP_OFFSET))(nullptr);
		}

		::System::Void SetNPP(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_SETNPP_OFFSET))(str, nullptr);
		}

		::System::Void ClearNPP()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_CLEARNPP_OFFSET))(nullptr);
		}

		::System::String* GetNXLogSessionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETNXLOGSESSIONID_OFFSET))(nullptr);
		}

		::System::Void SetNXLogSessionId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_SETNXLOGSESSIONID_OFFSET))(str, nullptr);
		}

		::System::String* GetRegion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETREGION_OFFSET))(nullptr);
		}

		::System::Void SetRegion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_SETREGION_OFFSET))(str, nullptr);
		}

		::System::String* GetPLog()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETPLOG_OFFSET))(nullptr);
		}

		::System::Void SetPLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_SETPLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean HasNexonAuthInfoByCommandlineArgs()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_HASNEXONAUTHINFOBYCOMMANDLINEARGS_OFFSET))(nullptr);
		}

		::System::Void SetHasNexonAuthInfoByCommandlineArgs(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_SETHASNEXONAUTHINFOBYCOMMANDLINEARGS_OFFSET))(arg, nullptr);
		}

		::System::String* GetCefDebugPort()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_GETCEFDEBUGPORT_OFFSET))(nullptr);
		}

		::System::Void SetCefDebugPort(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_SETCEFDEBUGPORT_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSETTINGSINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

