#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EquipmentItemTierUpResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EQUIPMENTITEMTIERRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F604F0)
#define EQUIPMENTITEMTIERRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F60580)
#define EQUIPMENTITEMTIERRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F60590)

	inline static constexpr unsigned int EquipmentItemTierResponseMessage_TypeDefinitionIndex = 2390;

	class EquipmentItemTierResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EquipmentItemTierUpResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EquipmentItemTierUpResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EquipmentItemTierUpResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EquipmentItemTierUpResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EquipmentItemTierUpResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EquipmentItemTierUpResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EquipmentItemTierUpResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTITEMTIERRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

