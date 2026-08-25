#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDFADEOUTIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x25978C0)
#define INTERACTIVEWORLDRAIDCOMMANDFADEOUTIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25978D0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandFadeOutIn_TypeDefinitionIndex = 275;

	class InteractiveWorldRaidCommandFadeOutIn : public Il2CppObject
	{
	public:
		::System::Boolean isFadeIn; // 0x20
		::System::Int32 totalDuration; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDFADEOUTIN_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDFADEOUTIN_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

