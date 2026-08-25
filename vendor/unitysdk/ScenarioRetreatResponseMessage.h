#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIORETREATRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9A180)

	inline static constexpr unsigned int ScenarioRetreatResponseMessage_TypeDefinitionIndex = 2774;

	class ScenarioRetreatResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIORETREATRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

