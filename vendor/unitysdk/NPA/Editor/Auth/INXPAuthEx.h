#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_AUTH_INXPAUTHEX_SHOWACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_AUTH_INXPAUTHEX_CLEARAUTHINFO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int INXPAuthEx_TypeDefinitionIndex = 27004;

	class INXPAuthEx : public Il2CppObject
	{
	public:
		::System::Void ShowAccountSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHEX_SHOWACCOUNTSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAuthInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_INXPAUTHEX_CLEARAUTHINFO_OFFSET))(nullptr);
		}

	};
}

