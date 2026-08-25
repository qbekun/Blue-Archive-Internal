#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCOLLECTIONLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F674E0)

	inline static constexpr unsigned int EventContentCollectionListResponseMessage_TypeDefinitionIndex = 2447;

	class EventContentCollectionListResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

