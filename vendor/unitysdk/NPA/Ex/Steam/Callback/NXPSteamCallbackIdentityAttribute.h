#pragma once
#include "../../../../unitysdk.h"

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITYATTRIBUTE_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x9D3BA60)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITYATTRIBUTE_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x9D3BA70)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3BA80)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamCallbackIdentityAttribute_TypeDefinitionIndex = 26091;

	class NXPSteamCallbackIdentityAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _Identity_k__BackingField; // 0x10

		::System::Int32 get_Identity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITYATTRIBUTE_GET_IDENTITY_OFFSET))(nullptr);
		}

		::System::Void set_Identity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITYATTRIBUTE_SET_IDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACKIDENTITYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

