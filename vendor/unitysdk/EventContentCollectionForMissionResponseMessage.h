#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCOLLECTIONFORMISSIONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F66F50)

	inline static constexpr unsigned int EventContentCollectionForMissionResponseMessage_TypeDefinitionIndex = 2444;

	class EventContentCollectionForMissionResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

