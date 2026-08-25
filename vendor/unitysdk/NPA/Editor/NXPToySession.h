#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor::Network { class NXPNJUserInfo; }
namespace NPA::Auth { class NXPToyNexonUserInfo; }
namespace NPA::Auth { class NXPToyArenaUserInfo; }
namespace NPA::Editor { class NXPToyLocalSessionType; }
namespace NPA::Editor { class NXPToySession; }
namespace NPA::Editor::Common { class NXPUpdatedUser; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_NXPTOYSESSION_GET_NPSN_OFFSET UNITYSDK_OFFSET(0x9D8BFB0)
#define NPA_EDITOR_NXPTOYSESSION_GET_GUID_OFFSET UNITYSDK_OFFSET(0x9D8BFE0)
#define NPA_EDITOR_NXPTOYSESSION_GET_NPTOKEN_OFFSET UNITYSDK_OFFSET(0x9D8BFF0)
#define NPA_EDITOR_NXPTOYSESSION_GET_MEMID_OFFSET UNITYSDK_OFFSET(0x9D8C000)
#define NPA_EDITOR_NXPTOYSESSION_GET_GAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9D8C010)
#define NPA_EDITOR_NXPTOYSESSION_GET_SERVICEID_OFFSET UNITYSDK_OFFSET(0x9D8C040)
#define NPA_EDITOR_NXPTOYSESSION_GET_UMKEY_OFFSET UNITYSDK_OFFSET(0x9D8C050)
#define NPA_EDITOR_NXPTOYSESSION_GET_EMAILACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9D8C060)
#define NPA_EDITOR_NXPTOYSESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9D8C070)
#define NPA_EDITOR_NXPTOYSESSION_GET_SERVERMEMTYPE_OFFSET UNITYSDK_OFFSET(0x9D8C080)
#define NPA_EDITOR_NXPTOYSESSION_GET_EXTERNALAUTHID_OFFSET UNITYSDK_OFFSET(0x9D8C090)
#define NPA_EDITOR_NXPTOYSESSION_GET_EXTERNALAUTHTOKEN_OFFSET UNITYSDK_OFFSET(0x9D8C0A0)
#define NPA_EDITOR_NXPTOYSESSION_GET_EXTERNALDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9D8C0B0)
#define NPA_EDITOR_NXPTOYSESSION_GET_NPACODE_OFFSET UNITYSDK_OFFSET(0x9D8C0C0)
#define NPA_EDITOR_NXPTOYSESSION_GET_GCID_OFFSET UNITYSDK_OFFSET(0x9D8C0D0)
#define NPA_EDITOR_NXPTOYSESSION_GET_GPGID_OFFSET UNITYSDK_OFFSET(0x9D8C0E0)
#define NPA_EDITOR_NXPTOYSESSION_GET_AGCID_OFFSET UNITYSDK_OFFSET(0x9D8C0F0)
#define NPA_EDITOR_NXPTOYSESSION_GET_EMAILID_OFFSET UNITYSDK_OFFSET(0x9D8C100)
#define NPA_EDITOR_NXPTOYSESSION_GET_LOGINTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9D8C110)
#define NPA_EDITOR_NXPTOYSESSION_GET_NJUSERINFO_OFFSET UNITYSDK_OFFSET(0x9D8C120)
#define NPA_EDITOR_NXPTOYSESSION_GET_NEXONUSERINFO_OFFSET UNITYSDK_OFFSET(0x9D8C130)
#define NPA_EDITOR_NXPTOYSESSION_GET_ARENAUSERINFO_OFFSET UNITYSDK_OFFSET(0x9D8C140)
#define NPA_EDITOR_NXPTOYSESSION_GETNEXONSNSTRINGFROMUSERINFO_OFFSET UNITYSDK_OFFSET(0x9D8C150)
#define NPA_EDITOR_NXPTOYSESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9D8C1C0)
#define NPA_EDITOR_NXPTOYSESSION_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9D8C1D0)
#define NPA_EDITOR_NXPTOYSESSION_GET_MASKEDEMAIL_OFFSET UNITYSDK_OFFSET(0x9D8C1E0)
#define NPA_EDITOR_NXPTOYSESSION_GET_NEXONSN_OFFSET UNITYSDK_OFFSET(0x9D8C1F0)
#define NPA_EDITOR_NXPTOYSESSION_GET_NEXONAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x9D8C200)
#define NPA_EDITOR_NXPTOYSESSION_GET_NEXONNICKNAME_OFFSET UNITYSDK_OFFSET(0x9D8C210)
#define NPA_EDITOR_NXPTOYSESSION_GET_SESSIONTOKEN_OFFSET UNITYSDK_OFFSET(0x9D8C220)
#define NPA_EDITOR_NXPTOYSESSION_GET_LOCALSESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x9D8C230)
#define NPA_EDITOR_NXPTOYSESSION_GET_SIGNUPCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9D8C240)
#define NPA_EDITOR_NXPTOYSESSION_GET_ISLOADEDFROMGAMEAUTHDATA_OFFSET UNITYSDK_OFFSET(0x9D8C250)
#define NPA_EDITOR_NXPTOYSESSION_SET_ISLOADEDFROMGAMEAUTHDATA_OFFSET UNITYSDK_OFFSET(0x9D8C260)
#define NPA_EDITOR_NXPTOYSESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D8C270)
#define NPA_EDITOR_NXPTOYSESSION_UPDATESESSION_OFFSET UNITYSDK_OFFSET(0x9D8C4B0)
#define NPA_EDITOR_NXPTOYSESSION_UPDATESESSION_OFFSET UNITYSDK_OFFSET(0x9D8C870)
#define NPA_EDITOR_NXPTOYSESSION_CLONE_OFFSET UNITYSDK_OFFSET(0x9D8DE30)
#define NPA_EDITOR_NXPTOYSESSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D8E720)
#define NPA_EDITOR_NXPTOYSESSION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9D8EBA0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToySession_TypeDefinitionIndex = 26296;

	class NXPToySession : public Il2CppObject
	{
	public:
		::System::String* guid; // 0x10
		::System::String* npToken; // 0x18
		::System::String* gameToken; // 0x20
		::System::String* serviceId; // 0x28
		::System::String* umKey; // 0x30
		::System::String* emailAccountId; // 0x38
		::System::Int32 type; // 0x40
		::System::Int32 serverMemType; // 0x44
		::System::String* externalAuthId; // 0x48
		::System::String* externalAuthToken; // 0x50
		::System::String* externalDisplayName; // 0x58
		::System::String* npaCode; // 0x60
		::System::String* gcId; // 0x68
		::System::String* gpgId; // 0x70
		::System::String* agcId; // 0x78
		::System::String* emailId; // 0x80
		Il2CppObject* loginTermsList; // 0x88
		::NPA::Editor::Network::NXPNJUserInfo* njUserInfo; // 0x90
		::NPA::Auth::NXPToyNexonUserInfo* nexonUserInfo; // 0x98
		::NPA::Auth::NXPToyArenaUserInfo* arenaUserInfo; // 0xA0
		::System::String* name; // 0xA8
		::System::String* displayName; // 0xB0
		::System::String* maskedEmail; // 0xB8
		::System::Int64 nexonSn; // 0xC0
		::System::Int32 nexonAuthLevel; // 0xC8
		::System::String* nexonNickName; // 0xD0
		::System::String* sessionToken; // 0xD8
		::System::String* memID; // 0xE0
		::NPA::Editor::NXPToyLocalSessionType* localSessionType; // 0xE8
		::System::String* signupCountryCode; // 0xF0
		::System::Boolean _IsLoadedFromGameAuthData_k__BackingField; // 0xF8

		::System::Int64 get_Npsn()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NPSN_OFFSET))(nullptr);
		}

		::System::String* get_Guid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_GUID_OFFSET))(nullptr);
		}

		::System::String* get_NPToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NPTOKEN_OFFSET))(nullptr);
		}

		::System::String* get_MemID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_MEMID_OFFSET))(nullptr);
		}

		::System::String* get_GameToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_GAMETOKEN_OFFSET))(nullptr);
		}

		::System::String* get_ServiceId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_SERVICEID_OFFSET))(nullptr);
		}

		::System::String* get_UMKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_UMKEY_OFFSET))(nullptr);
		}

		::System::String* get_EmailAccountId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_EMAILACCOUNTID_OFFSET))(nullptr);
		}

		::System::Int32 get_Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_ServerMemType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_SERVERMEMTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ExternalAuthId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_EXTERNALAUTHID_OFFSET))(nullptr);
		}

		::System::String* get_ExternalAuthToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_EXTERNALAUTHTOKEN_OFFSET))(nullptr);
		}

		::System::String* get_ExternalDisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_EXTERNALDISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_NPACode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NPACODE_OFFSET))(nullptr);
		}

		::System::String* get_GCID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_GCID_OFFSET))(nullptr);
		}

		::System::String* get_GPGID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_GPGID_OFFSET))(nullptr);
		}

		::System::String* get_AGCID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_AGCID_OFFSET))(nullptr);
		}

		::System::String* get_EmailId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_EMAILID_OFFSET))(nullptr);
		}

		Il2CppObject* get_LoginTermsList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_LOGINTERMSLIST_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPNJUserInfo* get_NJUserInfo()
		{
			return (return (::NPA::Editor::Network::NXPNJUserInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NJUSERINFO_OFFSET))(nullptr);
		}

		::NPA::Auth::NXPToyNexonUserInfo* get_NexonUserInfo()
		{
			return (return (::NPA::Auth::NXPToyNexonUserInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NEXONUSERINFO_OFFSET))(nullptr);
		}

		::NPA::Auth::NXPToyArenaUserInfo* get_ArenaUserInfo()
		{
			return (return (::NPA::Auth::NXPToyArenaUserInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_ARENAUSERINFO_OFFSET))(nullptr);
		}

		::System::String* GetNexonSNStringFromUserInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GETNEXONSNSTRINGFROMUSERINFO_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_MaskedEmail()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_MASKEDEMAIL_OFFSET))(nullptr);
		}

		::System::Int64 get_NexonSN()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NEXONSN_OFFSET))(nullptr);
		}

		::System::Int32 get_NexonAuthLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NEXONAUTHLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_NexonNickName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_NEXONNICKNAME_OFFSET))(nullptr);
		}

		::System::String* get_SessionToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_SESSIONTOKEN_OFFSET))(nullptr);
		}

		::NPA::Editor::NXPToyLocalSessionType* get_LocalSessionType()
		{
			return (return (::NPA::Editor::NXPToyLocalSessionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_LOCALSESSIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_SignupCountryCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_SIGNUPCOUNTRYCODE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoadedFromGameAuthData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_GET_ISLOADEDFROMGAMEAUTHDATA_OFFSET))(nullptr);
		}

		::System::Void set_IsLoadedFromGameAuthData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_SET_ISLOADEDFROMGAMEAUTHDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateSession(::NPA::Editor::NXPToySession* arg, ::NPA::Editor::Common::NXPUpdatedUser* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::NPA::Editor::Common::NXPUpdatedUser*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_UPDATESESSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateSession(::NPA::Editor::NXPToySession* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_UPDATESESSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_CLONE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Implicit(::NPA::Editor::NXPToySession* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYSESSION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

