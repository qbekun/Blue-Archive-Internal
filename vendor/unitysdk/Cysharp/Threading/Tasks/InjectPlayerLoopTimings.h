#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class InjectPlayerLoopTimings; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int InjectPlayerLoopTimings_TypeDefinitionIndex = 35889;

	class InjectPlayerLoopTimings : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* All; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* Standard; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* Minimum; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* Initialization; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastInitialization; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* EarlyUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastEarlyUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* FixedUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastFixedUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* PreUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastPreUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* Update; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* PreLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastPreLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* PostLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastPostLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* TimeUpdate; // 0x0
		::Cysharp::Threading::Tasks::InjectPlayerLoopTimings* LastTimeUpdate; // 0x0

	};
}

