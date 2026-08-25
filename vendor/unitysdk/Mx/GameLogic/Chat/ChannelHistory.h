#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class Language; }

#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_GET_LOGS_OFFSET UNITYSDK_OFFSET(0x1013CC0)
#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_GET_RECENTMESSAGETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1013CD0)
#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013D80)
#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013E30)
#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x10140B0)
#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_PARSE_OFFSET UNITYSDK_OFFSET(0x1013EF0)
#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_PARSE_OFFSET UNITYSDK_OFFSET(0x10141A0)
#define MX_GAMELOGIC_CHAT_CHANNELHISTORY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1014630)

namespace MX::GameLogic::Chat
{
	inline static constexpr unsigned int ChannelHistory_TypeDefinitionIndex = 12761;

	class ChannelHistory : public Il2CppObject
	{
	public:
		Il2CppObject* chatLogs; // 0x10
		::System::TimeSpan* UpdateInterval; // 0x18

		Il2CppObject* get_Logs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_GET_LOGS_OFFSET))(nullptr);
		}

		::System::DateTime* get_RecentMessageTimestamp()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_GET_RECENTMESSAGETIMESTAMP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::Text::RegularExpressions::Regex* arg2, ::FlatData::Language* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_.CTOR_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void Parse(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_PARSE_OFFSET))(str, nullptr);
		}

		::System::Void Parse(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::Text::RegularExpressions::Regex* arg2, ::FlatData::Language* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::Text::RegularExpressions::Regex*, ::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_PARSE_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_CHAT_CHANNELHISTORY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

