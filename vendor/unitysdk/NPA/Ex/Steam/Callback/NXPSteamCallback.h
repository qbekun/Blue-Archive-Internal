#pragma once
#include "../../../../unitysdk.h"

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_GET_ISGAMESERVER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_GETCALLBACKTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_ONRUNCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_SETUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3BA30)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamCallback_TypeDefinitionIndex = 26084;

	class NXPSteamCallback : public Il2CppObject
	{
	public:
		::System::Boolean get_IsGameServer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_GET_ISGAMESERVER_OFFSET))(nullptr);
		}

		::System::Type* GetCallbackType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_GETCALLBACKTYPE_OFFSET))(nullptr);
		}

		::System::Void OnRunCallback(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_ONRUNCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetUnregistered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_SETUNREGISTERED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLBACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

