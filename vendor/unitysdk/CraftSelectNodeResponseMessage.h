#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftSelectNodeResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSELECTNODERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F54310)
#define CRAFTSELECTNODERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F54350)
#define CRAFTSELECTNODERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F54360)

	inline static constexpr unsigned int CraftSelectNodeResponseMessage_TypeDefinitionIndex = 2312;

	class CraftSelectNodeResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftSelectNodeResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftSelectNodeResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftSelectNodeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CraftSelectNodeResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftSelectNodeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CraftSelectNodeResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftSelectNodeResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSELECTNODERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

