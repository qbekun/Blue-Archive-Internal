#pragma once
#include "../../../../unitysdk.h"

#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_GETCALLBACKTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_ONRUNCALLRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_SETUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3BA40)

namespace NPA::Ex::Steam::Callback
{
	inline static constexpr unsigned int NXPSteamCallResult_TypeDefinitionIndex = 26087;

	class NXPSteamCallResult : public Il2CppObject
	{
	public:
		::System::Type* GetCallbackType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_GETCALLBACKTYPE_OFFSET))(nullptr);
		}

		::System::Void OnRunCallResult(::System::Int32 arg, ::System::Boolean arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_ONRUNCALLRESULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetUnregistered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_SETUNREGISTERED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_CALLBACK_NXPSTEAMCALLRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

