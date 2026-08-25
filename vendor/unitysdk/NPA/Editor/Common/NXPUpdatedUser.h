#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPToyLocalSessionType; }
namespace NPA::Editor::Network { class NXPNJUserInfo; }
namespace NPA::Auth { class NXPToyNexonUserInfo; }
namespace NPA::Auth { class NXPToyArenaUserInfo; }

#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_GUID_OFFSET UNITYSDK_OFFSET(0x9C4ACD0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_MEMID_OFFSET UNITYSDK_OFFSET(0x9C4ACE0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0x9C4ACF0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_GAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C4AD00)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NPACODE_OFFSET UNITYSDK_OFFSET(0x9C4AD10)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_USERMASTERKEY_OFFSET UNITYSDK_OFFSET(0x9C4AD20)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_LOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9C4AD30)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_SERVERMEMTYPE_OFFSET UNITYSDK_OFFSET(0x9C4AD40)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_LOGINTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C4AD50)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EMAIL_OFFSET UNITYSDK_OFFSET(0x9C4AD60)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EXTERNALAUTHID_OFFSET UNITYSDK_OFFSET(0x9C4AD70)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EXTERNALAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x9C4AD80)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_GCID_OFFSET UNITYSDK_OFFSET(0x9C4AD90)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_AGCID_OFFSET UNITYSDK_OFFSET(0x9C4ADA0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C4ADB0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9C4ADC0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EXTERNALDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9C4ADD0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_MASKEDEMAIL_OFFSET UNITYSDK_OFFSET(0x9C4ADE0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONSN_OFFSET UNITYSDK_OFFSET(0x9C4ADF0)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x9C4AE00)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONNICKNAME_OFFSET UNITYSDK_OFFSET(0x9C4AE10)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_SESSIONTOKEN_OFFSET UNITYSDK_OFFSET(0x9C4AE20)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_LOCALSESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x9C4AE30)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NJUSERINFO_OFFSET UNITYSDK_OFFSET(0x9C4AE40)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONUSERINFO_OFFSET UNITYSDK_OFFSET(0x9C4AE50)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_ARENAUSERINFO_OFFSET UNITYSDK_OFFSET(0x9C4AE60)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_SIGNUPCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9C4AE70)
#define NPA_EDITOR_COMMON_NXPUPDATEDUSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C4AE80)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPUpdatedUser_TypeDefinitionIndex = 26863;

	class NXPUpdatedUser : public Il2CppObject
	{
	public:
		::System::String* guid; // 0x10
		::System::String* memID; // 0x18
		::System::String* npToken; // 0x20
		::System::String* gameToken; // 0x28
		::System::String* npaCode; // 0x30
		::System::String* userMasterKey; // 0x38
		::System::Int32 loginType; // 0x40
		::System::Int32 serverMemType; // 0x44
		Il2CppObject* loginTermsList; // 0x48
		::System::String* email; // 0x50
		::System::String* externalAuthId; // 0x58
		::System::String* externalAuthToken; // 0x60
		::System::String* gcId; // 0x68
		::System::String* agcId; // 0x70
		::System::String* name; // 0x78
		::System::String* displayName; // 0x80
		::System::String* externalDisplayName; // 0x88
		::System::String* maskedEmail; // 0x90
		::System::Int64 nexonSN; // 0x98
		::System::Int32 nexonAuthLevel; // 0xA0
		::System::String* nexonNickName; // 0xA8
		::System::String* sessionToken; // 0xB0
		::NPA::Editor::NXPToyLocalSessionType* localSessionType; // 0xB8
		::NPA::Editor::Network::NXPNJUserInfo* njUserInfo; // 0xC0
		::NPA::Auth::NXPToyNexonUserInfo* nexonUserInfo; // 0xC8
		::NPA::Auth::NXPToyArenaUserInfo* arenaUserInfo; // 0xD0
		::System::String* signupCountryCode; // 0xD8

		::System::String* get_Guid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_GUID_OFFSET))(nullptr);
		}

		::System::String* get_MemID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_MEMID_OFFSET))(nullptr);
		}

		::System::String* get_NPToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NPTOKEN_OFFSET))(nullptr);
		}

		::System::String* get_GameToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_GAMETOKEN_OFFSET))(nullptr);
		}

		::System::String* get_NPACode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NPACODE_OFFSET))(nullptr);
		}

		::System::String* get_UserMasterKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_USERMASTERKEY_OFFSET))(nullptr);
		}

		::System::Int32 get_LoginType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_LOGINTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_ServerMemType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_SERVERMEMTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_LoginTermsList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_LOGINTERMSLIST_OFFSET))(nullptr);
		}

		::System::String* get_Email()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EMAIL_OFFSET))(nullptr);
		}

		::System::String* get_ExternalAuthId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EXTERNALAUTHID_OFFSET))(nullptr);
		}

		::System::String* get_ExternalAuthToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EXTERNALAUTHTOKEN_OFFSET))(nullptr);
		}

		::System::String* get_GCID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_GCID_OFFSET))(nullptr);
		}

		::System::String* get_AGCID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_AGCID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_ExternalDisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_EXTERNALDISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_MaskedEmail()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_MASKEDEMAIL_OFFSET))(nullptr);
		}

		::System::Int64 get_NexonSN()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONSN_OFFSET))(nullptr);
		}

		::System::Int32 get_NexonAuthLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONAUTHLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_NexonNickName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONNICKNAME_OFFSET))(nullptr);
		}

		::System::String* get_SessionToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_SESSIONTOKEN_OFFSET))(nullptr);
		}

		::NPA::Editor::NXPToyLocalSessionType* get_LocalSessionType()
		{
			return (return (::NPA::Editor::NXPToyLocalSessionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_LOCALSESSIONTYPE_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPNJUserInfo* get_NJUserInfo()
		{
			return (return (::NPA::Editor::Network::NXPNJUserInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NJUSERINFO_OFFSET))(nullptr);
		}

		::NPA::Auth::NXPToyNexonUserInfo* get_NexonUserInfo()
		{
			return (return (::NPA::Auth::NXPToyNexonUserInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_NEXONUSERINFO_OFFSET))(nullptr);
		}

		::NPA::Auth::NXPToyArenaUserInfo* get_ArenaUserInfo()
		{
			return (return (::NPA::Auth::NXPToyArenaUserInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_ARENAUSERINFO_OFFSET))(nullptr);
		}

		::System::String* get_SignupCountryCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_GET_SIGNUPCOUNTRYCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUPDATEDUSER_.CTOR_OFFSET))(nullptr);
		}

	};
}

