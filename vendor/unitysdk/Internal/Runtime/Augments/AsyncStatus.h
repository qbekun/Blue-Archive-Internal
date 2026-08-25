#pragma once
#include "../../../unitysdk.h"

namespace Internal::Runtime::Augments { class AsyncStatus; }

namespace Internal::Runtime::Augments
{
	inline static constexpr unsigned int AsyncStatus_TypeDefinitionIndex = 23658;

	class AsyncStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Internal::Runtime::Augments::AsyncStatus* Started; // 0x0
		::Internal::Runtime::Augments::AsyncStatus* Completed; // 0x0
		::Internal::Runtime::Augments::AsyncStatus* Canceled; // 0x0
		::Internal::Runtime::Augments::AsyncStatus* Error; // 0x0

	};
}

