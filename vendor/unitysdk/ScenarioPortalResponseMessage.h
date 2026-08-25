#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIOPORTALRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F99440)

	inline static constexpr unsigned int ScenarioPortalResponseMessage_TypeDefinitionIndex = 2768;

	class ScenarioPortalResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

