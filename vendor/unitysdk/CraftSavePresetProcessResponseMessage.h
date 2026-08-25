#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftSavePresetResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSAVEPRESETPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F53740)
#define CRAFTSAVEPRESETPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F53750)
#define CRAFTSAVEPRESETPROCESSRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F53760)

	inline static constexpr unsigned int CraftSavePresetProcessResponseMessage_TypeDefinitionIndex = 2308;

	class CraftSavePresetProcessResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftSavePresetResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftSavePresetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftSavePresetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CraftSavePresetResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftSavePresetResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftSavePresetResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftSavePresetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETPROCESSRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

