#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class AsyncOperationStatus; }

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncOperationStatus_TypeDefinitionIndex = 29055;

	class AsyncOperationStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Net::Security::AsyncOperationStatus* Initialize; // 0x0
		::Mono::Net::Security::AsyncOperationStatus* Continue; // 0x0
		::Mono::Net::Security::AsyncOperationStatus* ReadDone; // 0x0
		::Mono::Net::Security::AsyncOperationStatus* Complete; // 0x0

	};
}

