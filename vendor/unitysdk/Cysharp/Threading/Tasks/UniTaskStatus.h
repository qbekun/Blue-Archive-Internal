#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskStatus_TypeDefinitionIndex = 35850;

	class UniTaskStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Cysharp::Threading::Tasks::UniTaskStatus* Pending; // 0x0
		::Cysharp::Threading::Tasks::UniTaskStatus* Succeeded; // 0x0
		::Cysharp::Threading::Tasks::UniTaskStatus* Faulted; // 0x0
		::Cysharp::Threading::Tasks::UniTaskStatus* Canceled; // 0x0

	};
}

