#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Chat { class IrcMessageType; }
namespace MX::GameLogic::Chat { class IrcJsonMessage; }
namespace MX::GameLogic::Chat { class IrcNoticeType; }
namespace FlatData { class ClanSocialGrade; }

#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x10150A0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x10150B0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_STICKERID_OFFSET UNITYSDK_OFFSET(0x10150C0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_STICKERID_OFFSET UNITYSDK_OFFSET(0x10150D0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x10150E0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x10150F0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0x1015100)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0x1015110)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1015120)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1015130)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_SENDTICKS_OFFSET UNITYSDK_OFFSET(0x1015140)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_SENDTICKS_OFFSET UNITYSDK_OFFSET(0x1015150)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x1015160)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x1015170)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1015180)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10149A0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1015190)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_CREATENOTICEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1015220)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_CREATENOTICEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1015300)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_PARSENOTICE_OFFSET UNITYSDK_OFFSET(0x1015420)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1015650)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x10156C0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1014BF0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1015740)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1015820)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1015830)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1015860)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1015890)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x10158B0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x10158D0)
#define MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1014F70)

namespace MX::GameLogic::Chat
{
	inline static constexpr unsigned int IrcJsonMessage_TypeDefinitionIndex = 12763;

	class IrcJsonMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::Chat::IrcMessageType* _MessageType_k__BackingField; // 0x10
		::System::Int64 _StickerId_k__BackingField; // 0x18
		::System::Int64 _CharacterId_k__BackingField; // 0x20
		::System::String* _AccountNickname_k__BackingField; // 0x28
		::System::String* _Text_k__BackingField; // 0x30
		::System::Int64 _SendTicks_k__BackingField; // 0x38
		::System::Int64 _EmblemId_k__BackingField; // 0x40

		::MX::GameLogic::Chat::IrcMessageType* get_MessageType()
		{
			return ((::MX::GameLogic::Chat::IrcMessageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::Void set_MessageType(::MX::GameLogic::Chat::IrcMessageType* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Chat::IrcMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_MESSAGETYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StickerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_STICKERID_OFFSET))(nullptr);
		}

		::System::Void set_StickerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_STICKERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::String* get_AccountNickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_ACCOUNTNICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_AccountNickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_ACCOUNTNICKNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Int64 get_SendTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_SENDTICKS_OFFSET))(nullptr);
		}

		::System::Void set_SendTicks(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_SENDTICKS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GET_EMBLEMID_OFFSET))(nullptr);
		}

		::System::Void set_EmblemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_SET_EMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::MX::GameLogic::Chat::IrcJsonMessage* CreateNoticeMessage(::MX::GameLogic::Chat::IrcNoticeType* arg, ::System::String* str, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::Chat::IrcJsonMessage*(*)(::MX::GameLogic::Chat::IrcNoticeType*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_CREATENOTICEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::GameLogic::Chat::IrcJsonMessage* CreateNoticeMessage(::MX::GameLogic::Chat::IrcNoticeType* arg, ::System::String* str, ::FlatData::ClanSocialGrade* arg2, ::System::Int64 arg3)
		{
			return ((::MX::GameLogic::Chat::IrcJsonMessage*(*)(::MX::GameLogic::Chat::IrcNoticeType*, ::System::String*, ::FlatData::ClanSocialGrade*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_CREATENOTICEMESSAGE_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		Il2CppObject* ParseNotice(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_PARSENOTICE_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::Chat::IrcJsonMessage* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::Chat::IrcJsonMessage* arg, ::MX::GameLogic::Chat::IrcJsonMessage* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::Chat::IrcJsonMessage* arg, ::MX::GameLogic::Chat::IrcJsonMessage* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThan(::MX::GameLogic::Chat::IrcJsonMessage* arg, ::MX::GameLogic::Chat::IrcJsonMessage* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::GameLogic::Chat::IrcJsonMessage* arg, ::MX::GameLogic::Chat::IrcJsonMessage* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::GameLogic::Chat::IrcJsonMessage* arg, ::MX::GameLogic::Chat::IrcJsonMessage* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::GameLogic::Chat::IrcJsonMessage* arg, ::MX::GameLogic::Chat::IrcJsonMessage* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::MX::GameLogic::Chat::IrcJsonMessage* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::Chat::IrcJsonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_IRCJSONMESSAGE_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

