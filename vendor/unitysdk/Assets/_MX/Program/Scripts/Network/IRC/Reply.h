#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class Reply; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0xE623E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_.CTOR_OFFSET UNITYSDK_OFFSET(0xE623F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0xE62490)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0xE624A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_TRAILING_OFFSET UNITYSDK_OFFSET(0xE624B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_DECODE_OFFSET UNITYSDK_OFFSET(0xE5DFB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE624C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0xE62630)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0xE62640)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_COMMAND_OFFSET UNITYSDK_OFFSET(0xE62650)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_TRAILING_OFFSET UNITYSDK_OFFSET(0xE62660)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int Reply_TypeDefinitionIndex = 10476;

	class Reply : public Il2CppObject
	{
	public:
		::System::String* _Prefix_k__BackingField; // 0x10
		::System::String* _Command_k__BackingField; // 0x18
		Il2CppObject* _Params_k__BackingField; // 0x20
		::System::String* _Trailing_k__BackingField; // 0x28

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Prefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_PREFIX_OFFSET))(str, nullptr);
		}

		::System::Void set_Params(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_PARAMS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Trailing(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_TRAILING_OFFSET))(str, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::Reply* Decode(::System::String* str)
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::Reply*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_DECODE_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_Command()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_COMMAND_OFFSET))(nullptr);
		}

		Il2CppObject* get_Params()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_PARAMS_OFFSET))(nullptr);
		}

		::System::Void set_Command(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_SET_COMMAND_OFFSET))(str, nullptr);
		}

		::System::String* get_Trailing()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_REPLY_GET_TRAILING_OFFSET))(nullptr);
		}

	};
}

