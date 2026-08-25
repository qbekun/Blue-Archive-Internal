#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int OperationalStatus_TypeDefinitionIndex = 29842;

	class OperationalStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::NetworkInformation::OperationalStatus* Up; // 0x0
		::System::Net::NetworkInformation::OperationalStatus* Down; // 0x0
		::System::Net::NetworkInformation::OperationalStatus* Testing; // 0x0
		::System::Net::NetworkInformation::OperationalStatus* Unknown; // 0x0
		::System::Net::NetworkInformation::OperationalStatus* Dormant; // 0x0
		::System::Net::NetworkInformation::OperationalStatus* NotPresent; // 0x0
		::System::Net::NetworkInformation::OperationalStatus* LowerLayerDown; // 0x0

	};
}

