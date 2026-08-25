#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Chat { class IrcJsonMessage; }
namespace MX::GameLogic::Chat { class ClanChatLog; }

#define MX_GAMELOGIC_CHAT_CLANCHATLOG_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1014970)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1014980)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_GET_NICK_OFFSET UNITYSDK_OFFSET(0x1014990)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x10143C0)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1014A30)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1014AB0)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1014B30)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1014D50)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1014E00)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1014E10)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1014E40)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1014F00)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1014F20)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1014F40)
#define MX_GAMELOGIC_CHAT_CLANCHATLOG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1014E70)

namespace MX::GameLogic::Chat
{
	inline static constexpr unsigned int ClanChatLog_TypeDefinitionIndex = 12762;

	class ClanChatLog : public Il2CppObject
	{
	public:
		::System::DateTime* _Timestamp_k__BackingField; // 0x10
		::MX::GameLogic::Chat::IrcJsonMessage* _Message_k__BackingField; // 0x18
		::System::String* _Nick_k__BackingField; // 0x20

		::System::DateTime* get_Timestamp()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_GET_TIMESTAMP_OFFSET))(nullptr);
		}

		::MX::GameLogic::Chat::IrcJsonMessage* get_Message()
		{
			return ((::MX::GameLogic::Chat::IrcJsonMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_Nick()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_GET_NICK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::Chat::ClanChatLog* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::Chat::ClanChatLog* arg, ::MX::GameLogic::Chat::ClanChatLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::ClanChatLog*, ::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::Chat::ClanChatLog* arg, ::MX::GameLogic::Chat::ClanChatLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::ClanChatLog*, ::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThan(::MX::GameLogic::Chat::ClanChatLog* arg, ::MX::GameLogic::Chat::ClanChatLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::ClanChatLog*, ::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::GameLogic::Chat::ClanChatLog* arg, ::MX::GameLogic::Chat::ClanChatLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::ClanChatLog*, ::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::GameLogic::Chat::ClanChatLog* arg, ::MX::GameLogic::Chat::ClanChatLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::ClanChatLog*, ::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::GameLogic::Chat::ClanChatLog* arg, ::MX::GameLogic::Chat::ClanChatLog* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::ClanChatLog*, ::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::MX::GameLogic::Chat::ClanChatLog* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::Chat::ClanChatLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CLANCHATLOG_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

