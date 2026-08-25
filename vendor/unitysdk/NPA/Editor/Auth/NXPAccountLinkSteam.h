#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class IExternalPlatform; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C6D1C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9C7E7A0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_CREATEACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x9C7E7B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_CREATEACCOUNTLINKFORSWAP_OFFSET UNITYSDK_OFFSET(0x9C7E900)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_VALIDATEACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x9C7EA50)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkSteam_TypeDefinitionIndex = 26999;

	class NXPAccountLinkSteam : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Editor::IExternalPlatform* arg)
		{
			((::System::Void(*)(::NPA::Editor::IExternalPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void CreateAccountLink(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_CREATEACCOUNTLINK_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CreateAccountLinkForSwap(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_CREATEACCOUNTLINKFORSWAP_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void ValidateAccountLink(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSTEAM_VALIDATEACCOUNTLINK_OFFSET))(arg, nullptr);
		}

	};
}

