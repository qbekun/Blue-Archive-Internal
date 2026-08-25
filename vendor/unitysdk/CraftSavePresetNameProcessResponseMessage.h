#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftSavePresetNameResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSAVEPRESETNAMEPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F52EE0)
#define CRAFTSAVEPRESETNAMEPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F52EF0)
#define CRAFTSAVEPRESETNAMEPROCESSRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F52F00)

	inline static constexpr unsigned int CraftSavePresetNameProcessResponseMessage_TypeDefinitionIndex = 2305;

	class CraftSavePresetNameProcessResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftSavePresetNameResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftSavePresetNameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftSavePresetNameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CraftSavePresetNameResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftSavePresetNameResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftSavePresetNameResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftSavePresetNameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSAVEPRESETNAMEPROCESSRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

