#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidSweepResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F92FA0)
#define RAIDSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F92FB0)
#define RAIDSWEEPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F92B50)

	inline static constexpr unsigned int RaidSweepResponseMessage_TypeDefinitionIndex = 2729;

	class RaidSweepResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidSweepResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::RaidSweepResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::RaidSweepResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidSweepResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidSweepResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

