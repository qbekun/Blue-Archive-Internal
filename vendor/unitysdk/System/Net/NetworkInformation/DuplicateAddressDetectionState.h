#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int DuplicateAddressDetectionState_TypeDefinitionIndex = 29834;

	class DuplicateAddressDetectionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::NetworkInformation::DuplicateAddressDetectionState* Invalid; // 0x0
		::System::Net::NetworkInformation::DuplicateAddressDetectionState* Tentative; // 0x0
		::System::Net::NetworkInformation::DuplicateAddressDetectionState* Duplicate; // 0x0
		::System::Net::NetworkInformation::DuplicateAddressDetectionState* Deprecated; // 0x0
		::System::Net::NetworkInformation::DuplicateAddressDetectionState* Preferred; // 0x0

	};
}

