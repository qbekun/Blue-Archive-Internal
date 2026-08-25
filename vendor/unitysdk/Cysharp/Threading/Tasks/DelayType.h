#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class DelayType; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int DelayType_TypeDefinitionIndex = 35937;

	class DelayType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Cysharp::Threading::Tasks::DelayType* DeltaTime; // 0x0
		::Cysharp::Threading::Tasks::DelayType* UnscaledDeltaTime; // 0x0
		::Cysharp::Threading::Tasks::DelayType* Realtime; // 0x0

	};
}

