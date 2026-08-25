#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUser; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xE62B40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_GET_USER_OFFSET UNITYSDK_OFFSET(0xE62B50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5A830)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5A5C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xE62B60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE62BE0)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int Topic_TypeDefinitionIndex = 10480;

	class Topic : public Il2CppObject
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* _User_k__BackingField; // 0x18

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_GET_TEXT_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* get_User()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_GET_USER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			((::System::Void(*)(::System::String*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_TOPIC_TOSTRING_OFFSET))(nullptr);
		}

	};
}

