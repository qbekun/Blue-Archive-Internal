#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIOENTERTACTICRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F97B30)

	inline static constexpr unsigned int ScenarioEnterTacticResponseMessage_TypeDefinitionIndex = 2758;

	class ScenarioEnterTacticResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

