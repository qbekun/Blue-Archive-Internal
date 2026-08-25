#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SuffixOrigin_TypeDefinitionIndex = 29844;

	class SuffixOrigin : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::NetworkInformation::SuffixOrigin* Other; // 0x0
		::System::Net::NetworkInformation::SuffixOrigin* Manual; // 0x0
		::System::Net::NetworkInformation::SuffixOrigin* WellKnown; // 0x0
		::System::Net::NetworkInformation::SuffixOrigin* OriginDhcp; // 0x0
		::System::Net::NetworkInformation::SuffixOrigin* LinkLayerAddress; // 0x0
		::System::Net::NetworkInformation::SuffixOrigin* Random; // 0x0

	};
}

