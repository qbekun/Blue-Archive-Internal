#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidSweepResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5EFB0)
#define ELIMINATERAIDSWEEPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EBA0)
#define ELIMINATERAIDSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5EFC0)

	inline static constexpr unsigned int EliminateRaidSweepResponseMessage_TypeDefinitionIndex = 2383;

	class EliminateRaidSweepResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidSweepResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::EliminateRaidSweepResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidSweepResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidSweepResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidSweepResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

