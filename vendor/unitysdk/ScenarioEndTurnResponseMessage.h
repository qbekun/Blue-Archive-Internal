#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIOENDTURNRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F96830)

	inline static constexpr unsigned int ScenarioEndTurnResponseMessage_TypeDefinitionIndex = 2750;

	class ScenarioEndTurnResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENDTURNRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

