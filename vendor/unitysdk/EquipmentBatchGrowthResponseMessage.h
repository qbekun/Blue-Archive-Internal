#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EquipmentBatchGrowthResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EQUIPMENTBATCHGROWTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5F600)
#define EQUIPMENTBATCHGROWTHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F5C0)
#define EQUIPMENTBATCHGROWTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5F610)

	inline static constexpr unsigned int EquipmentBatchGrowthResponseMessage_TypeDefinitionIndex = 2384;

	class EquipmentBatchGrowthResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EquipmentBatchGrowthResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::EquipmentBatchGrowthResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EquipmentBatchGrowthResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EquipmentBatchGrowthResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EquipmentBatchGrowthResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EquipmentBatchGrowthResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EquipmentBatchGrowthResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

