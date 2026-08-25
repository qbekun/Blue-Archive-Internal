#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDSETACTIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259D0B0)
#define INTERACTIVEWORLDRAIDCOMMANDSETACTIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x259D2A0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandSetActive_TypeDefinitionIndex = 298;

	class InteractiveWorldRaidCommandSetActive : public Il2CppObject
	{
	public:
		::System::Boolean setActive; // 0x20
		Il2CppObject* targets; // 0x28

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSETACTIVE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSETACTIVE_.CTOR_OFFSET))(nullptr);
		}

	};

