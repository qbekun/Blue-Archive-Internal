#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftBeginProcessResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTBEGINPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F391F0)
#define CRAFTBEGINPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F39200)
#define CRAFTBEGINPROCESSRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F39210)

	inline static constexpr unsigned int CraftBeginProcessResponseMessage_TypeDefinitionIndex = 2287;

	class CraftBeginProcessResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftBeginProcessResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftBeginProcessResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftBeginProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CraftBeginProcessResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftBeginProcessResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftBeginProcessResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftBeginProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTBEGINPROCESSRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

