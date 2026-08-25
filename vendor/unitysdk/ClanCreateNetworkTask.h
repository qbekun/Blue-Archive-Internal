#pragma once
#include "unitysdk.h"

namespace FlatData { class ClanJoinOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define CLANCREATENETWORKTASK_SET_CLANCREATENICKNAME_OFFSET UNITYSDK_OFFSET(0x1F26A20)
#define CLANCREATENETWORKTASK_GET_CLANCREATEJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1F26A30)
#define CLANCREATENETWORKTASK_GET_CLANCREATENICKNAME_OFFSET UNITYSDK_OFFSET(0x1F26A40)
#define CLANCREATENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F26A50)
#define CLANCREATENETWORKTASK_SET_CLANCREATEJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1F26C80)
#define CLANCREATENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F26C90)
#define CLANCREATENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F26CA0)
#define CLANCREATENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F26CB0)
#define CLANCREATENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F26D40)

	inline static constexpr unsigned int ClanCreateNetworkTask_TypeDefinitionIndex = 2175;

	class ClanCreateNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _ClanCreateNickName_k__BackingField; // 0x40
		::FlatData::ClanJoinOption* _ClanCreateJoinOption_k__BackingField; // 0x48

		::System::Void set_ClanCreateNickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_SET_CLANCREATENICKNAME_OFFSET))(str, nullptr);
		}

		::FlatData::ClanJoinOption* get_ClanCreateJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_GET_CLANCREATEJOINOPTION_OFFSET))(nullptr);
		}

		::System::String* get_ClanCreateNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_GET_CLANCREATENICKNAME_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ClanCreateJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_SET_CLANCREATEJOINOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCREATENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

