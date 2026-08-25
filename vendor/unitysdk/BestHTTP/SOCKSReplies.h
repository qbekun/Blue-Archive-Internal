#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class SOCKSReplies; }

namespace BestHTTP
{
	inline static constexpr unsigned int SOCKSReplies_TypeDefinitionIndex = 21320;

	class SOCKSReplies : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::SOCKSReplies* Succeeded; // 0x0
		::BestHTTP::SOCKSReplies* GeneralSOCKSServerFailure; // 0x0
		::BestHTTP::SOCKSReplies* ConnectionNotAllowedByRuleset; // 0x0
		::BestHTTP::SOCKSReplies* NetworkUnreachable; // 0x0
		::BestHTTP::SOCKSReplies* HostUnreachable; // 0x0
		::BestHTTP::SOCKSReplies* ConnectionRefused; // 0x0
		::BestHTTP::SOCKSReplies* TTLExpired; // 0x0
		::BestHTTP::SOCKSReplies* CommandNotSupported; // 0x0
		::BestHTTP::SOCKSReplies* AddressTypeNotSupported; // 0x0

	};
}

