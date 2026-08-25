#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidEnterBattleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDENTERBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8DBE0)
#define RAIDENTERBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8DBF0)
#define RAIDENTERBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8DC00)
#define RAIDENTERBATTLERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D850)

	inline static constexpr unsigned int RaidEnterBattleResponseMessage_TypeDefinitionIndex = 2692;

	class RaidEnterBattleResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidEnterBattleResponse* _Response_k__BackingField; // 0x20
		::System::Int32 _EchelonNumber_k__BackingField; // 0x28

		::MX::NetworkProtocol::RaidEnterBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidEnterBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidEnterBattleResponse* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidEnterBattleResponse*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

