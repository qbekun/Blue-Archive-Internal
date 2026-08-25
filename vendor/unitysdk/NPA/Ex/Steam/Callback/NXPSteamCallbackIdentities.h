#pragma once
#include "../../../../unitysdk.h"

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITIES_GETCALLBACKIDENTITY_OFFSET UNITYSDK_OFFSET(0x9D3AF80)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3BA50)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamCallbackIdentities_TypeDefinitionIndex = 26090;

	class NXPSteamCallbackIdentities : public Il2CppObject
	{
	public:
		::System::Int32 GetCallbackIdentity(::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITIES_GETCALLBACKIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

