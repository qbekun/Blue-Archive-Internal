#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8F3B0)
#define RAIDLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8EFC0)

	inline static constexpr unsigned int RaidListResponseMessage_TypeDefinitionIndex = 2704;

	class RaidListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidListResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::RaidListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

