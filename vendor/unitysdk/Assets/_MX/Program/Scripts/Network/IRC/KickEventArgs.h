#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class Reply; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_KICKEVENTARGS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xE5D140)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_KICKEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5D150)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_KICKEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5D170)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int KickEventArgs_TypeDefinitionIndex = 10463;

	class KickEventArgs : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_KICKEVENTARGS_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_KICKEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Assets::_MX::Program::Scripts::Network::IRC::Reply* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::Reply*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_KICKEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

