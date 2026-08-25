#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EQUIPMENTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F61280)

	inline static constexpr unsigned int EquipmentListResponseMessage_TypeDefinitionIndex = 2398;

	class EquipmentListResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

