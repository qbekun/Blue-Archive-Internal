#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define FRIENDGETIDCARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F79B80)

	inline static constexpr unsigned int FriendGetIdCardResponseMessage_TypeDefinitionIndex = 2567;

	class FriendGetIdCardResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETIDCARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

