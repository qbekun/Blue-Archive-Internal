#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidEnterBattleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5BCE0)
#define ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BA00)
#define ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F5BCF0)
#define ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F5BD00)

	inline static constexpr unsigned int EliminateRaidEnterBattleResponseMessage_TypeDefinitionIndex = 2362;

	class EliminateRaidEnterBattleResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidEnterBattleResponse* _Response_k__BackingField; // 0x20
		::System::Int32 _EchelonNumber_k__BackingField; // 0x28

		::MX::NetworkProtocol::EliminateRaidEnterBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidEnterBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidEnterBattleResponse* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidEnterBattleResponse*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENTERBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

	};

