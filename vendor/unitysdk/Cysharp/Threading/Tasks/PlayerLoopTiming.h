#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopTiming_TypeDefinitionIndex = 35888;

	class PlayerLoopTiming : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Cysharp::Threading::Tasks::PlayerLoopTiming* Initialization; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastInitialization; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* EarlyUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastEarlyUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* FixedUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastFixedUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* PreUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastPreUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* Update; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* PreLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastPreLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* PostLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastPostLateUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* TimeUpdate; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming* LastTimeUpdate; // 0x0

	};
}

