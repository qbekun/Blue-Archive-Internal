#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_DELINKACCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETACCOUNTLINKINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_VALIDATEACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETPLATFORMFRIENDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETPLATFORMLASTLOGININFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETPLATFORMBLOCKUSERINFOS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int INXPAuthAccountLink_TypeDefinitionIndex = 27003;

	class INXPAuthAccountLink : public Il2CppObject
	{
	public:
		::System::Void DelinkAccount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_DELINKACCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void GetAccountLinkInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETACCOUNTLINKINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateAccountLink(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_VALIDATEACCOUNTLINK_OFFSET))(arg, nullptr);
		}

		::System::Void GetPlatformFriends(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETPLATFORMFRIENDS_OFFSET))(arg, nullptr);
		}

		::System::Void GetPlatformLastLoginInfo(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETPLATFORMLASTLOGININFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPlatformBlockUserInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHACCOUNTLINK_GETPLATFORMBLOCKUSERINFOS_OFFSET))(arg, nullptr);
		}

	};
}

