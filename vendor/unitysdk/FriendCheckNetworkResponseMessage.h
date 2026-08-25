#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define FRIENDCHECKNETWORKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F78A50)

	inline static constexpr unsigned int FriendCheckNetworkResponseMessage_TypeDefinitionIndex = 2559;

	class FriendCheckNetworkResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDCHECKNETWORKRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

