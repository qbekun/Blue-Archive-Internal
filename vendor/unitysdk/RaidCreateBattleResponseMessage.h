#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidCreateBattleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDCREATEBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8C690)
#define RAIDCREATEBATTLERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C380)
#define RAIDCREATEBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8C6A0)
#define RAIDCREATEBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8C6B0)

	inline static constexpr unsigned int RaidCreateBattleResponseMessage_TypeDefinitionIndex = 2683;

	class RaidCreateBattleResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidCreateBattleResponse* _Response_k__BackingField; // 0x20
		::System::Int32 _EchelonNumber_k__BackingField; // 0x28

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidCreateBattleResponse* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidCreateBattleResponse*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::NetworkProtocol::RaidCreateBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidCreateBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

	};

