#pragma once
#include "unitysdk.h"

namespace FlatData { class ClanJoinOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define CLANSEARCHNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F29E10)
#define CLANSEARCHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F29E20)
#define CLANSEARCHNETWORKTASK_GET_CLANSEARCHNAME_OFFSET UNITYSDK_OFFSET(0x1F2A010)
#define CLANSEARCHNETWORKTASK_GET_CLANSEARCHUNIQUECODE_OFFSET UNITYSDK_OFFSET(0x1F2A020)
#define CLANSEARCHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2A030)
#define CLANSEARCHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2A040)
#define CLANSEARCHNETWORKTASK_SET_CLANSEARCHNAME_OFFSET UNITYSDK_OFFSET(0x1F2A0D0)
#define CLANSEARCHNETWORKTASK_SET_CLANSEARCHUNIQUECODE_OFFSET UNITYSDK_OFFSET(0x1F2A0E0)
#define CLANSEARCHNETWORKTASK_GET_CLANSEARCHJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1F2A0F0)
#define CLANSEARCHNETWORKTASK_SET_CLANSEARCHJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1F2A100)
#define CLANSEARCHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A110)

	inline static constexpr unsigned int ClanSearchNetworkTask_TypeDefinitionIndex = 2198;

	class ClanSearchNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _ClanSearchName_k__BackingField; // 0x40
		::System::String* _ClanSearchUniqueCode_k__BackingField; // 0x48
		::FlatData::ClanJoinOption* _ClanSearchJoinOption_k__BackingField; // 0x50

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* get_ClanSearchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_GET_CLANSEARCHNAME_OFFSET))(nullptr);
		}

		::System::String* get_ClanSearchUniqueCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_GET_CLANSEARCHUNIQUECODE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ClanSearchName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_SET_CLANSEARCHNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ClanSearchUniqueCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_SET_CLANSEARCHUNIQUECODE_OFFSET))(str, nullptr);
		}

		::FlatData::ClanJoinOption* get_ClanSearchJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_GET_CLANSEARCHJOINOPTION_OFFSET))(nullptr);
		}

		::System::Void set_ClanSearchJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_SET_CLANSEARCHJOINOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

