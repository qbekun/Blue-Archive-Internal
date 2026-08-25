#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidCreateBattleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F5AD10)
#define ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5AA40)
#define ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5AD20)
#define ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F5AD30)

	inline static constexpr unsigned int EliminateRaidCreateBattleResponseMessage_TypeDefinitionIndex = 2356;

	class EliminateRaidCreateBattleResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidCreateBattleResponse* _Response_k__BackingField; // 0x20
		::System::Int32 _EchelonNumber_k__BackingField; // 0x28

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidCreateBattleResponse* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidCreateBattleResponse*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidCreateBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidCreateBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

	};

