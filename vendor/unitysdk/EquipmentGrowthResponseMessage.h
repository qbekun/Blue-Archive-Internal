#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EQUIPMENTGROWTHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F60840)
#define EQUIPMENTGROWTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F60860)
#define EQUIPMENTGROWTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F60870)

	inline static constexpr unsigned int EquipmentGrowthResponseMessage_TypeDefinitionIndex = 2393;

	class EquipmentGrowthResponseMessage : public Il2CppObject
	{
	public:
		::System::Object* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTGROWTHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Response(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTGROWTHRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Response()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTGROWTHRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

