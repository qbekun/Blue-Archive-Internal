#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EQUIPMENTEQUIPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5FCC0)

	inline static constexpr unsigned int EquipmentEquipResponseMessage_TypeDefinitionIndex = 2389;

	class EquipmentEquipResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

