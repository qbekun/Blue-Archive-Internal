#pragma once
#include "../../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUserMode; }
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcUser; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_IRCNICK_OFFSET UNITYSDK_OFFSET(0xE61BB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xE61BC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0xE61BD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0xE61BE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xE61BF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xE61C00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xE61C10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xE61C20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_LEAVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE61C30)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_LEAVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE61C40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0xE61C50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0xE61C60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_USERMODE_OFFSET UNITYSDK_OFFSET(0xE61C70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_USERMODE_OFFSET UNITYSDK_OFFSET(0xE61C80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5A300)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE5FA60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE61C90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE61CD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_EQUALS_OFFSET UNITYSDK_OFFSET(0xE61D90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_EQUALS_OFFSET UNITYSDK_OFFSET(0xE61E30)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE61E50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE61E70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE61EA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xE61ED0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xE61F00)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xE61F20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xE61F40)

namespace Assets::_MX::Program::Scripts::Network::IRC
{
	inline static constexpr unsigned int IrcUser_TypeDefinitionIndex = 10473;

	class IrcUser : public Il2CppObject
	{
	public:
		::System::String* _IrcNick_k__BackingField; // 0x10
		::System::Int64 _AccountId_k__BackingField; // 0x18
		::System::String* _AccountNickname_k__BackingField; // 0x20
		::System::Int64 _CharacterId_k__BackingField; // 0x28
		::System::Int64 _CostumeId_k__BackingField; // 0x30
		::System::String* _LeaveMessage_k__BackingField; // 0x38
		::System::Int64 _EmblemId_k__BackingField; // 0x40
		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* _UserMode_k__BackingField; // 0x48

		::System::String* get_IrcNick()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_IRCNICK_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::String* get_AccountNickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_ACCOUNTNICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_AccountNickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_ACCOUNTNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_LeaveMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_LEAVEMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_LeaveMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_LEAVEMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Int64 get_EmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_EMBLEMID_OFFSET))(nullptr);
		}

		::System::Void set_EmblemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_EMBLEMID_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* get_UserMode()
		{
			return ((::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GET_USERMODE_OFFSET))(nullptr);
		}

		::System::Void set_UserMode(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUserMode*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_SET_USERMODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int64 arg, ::System::Int64 arg2, ::System::String* str2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::Int64, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_.CTOR_OFFSET))(str, arg, arg2, str2, arg3, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThan(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::Assets::_MX::Program::Scripts::Network::IRC::IrcUser*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IRC_IRCUSER_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

	};
}

