#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define FRIENDSEARCHNETWORKRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7ABC0)

	inline static constexpr unsigned int FriendSearchNetworkResponseMessage_TypeDefinitionIndex = 2575;

	class FriendSearchNetworkResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSEARCHNETWORKRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

