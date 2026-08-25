#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define USECOUPONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F624F0)

	inline static constexpr unsigned int UseCouponResponseMessage_TypeDefinitionIndex = 2408;

	class UseCouponResponseMessage : public Il2CppObject
	{
	public:
		::System::Boolean CouponCompleteRewardReceived; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + USECOUPONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

