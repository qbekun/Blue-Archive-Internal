#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4FC90)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4FCA0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FCB0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FCC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonCreateBattleRequest_TypeDefinitionIndex = 12158;

	class TimeAttackDungeonCreateBattleRequest : public Il2CppObject
	{
	public:
		::System::Boolean _IsPractice_k__BackingField; // 0x40

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

