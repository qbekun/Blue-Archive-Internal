#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftAutoBeginProcessResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F38A50)
#define CRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F38A60)
#define CRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F38A70)

	inline static constexpr unsigned int CraftAutoBeginProcessResponseMessage_TypeDefinitionIndex = 2284;

	class CraftAutoBeginProcessResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftAutoBeginProcessResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::CraftAutoBeginProcessResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftAutoBeginProcessResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CraftAutoBeginProcessResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftAutoBeginProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftAutoBeginProcessResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftAutoBeginProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

