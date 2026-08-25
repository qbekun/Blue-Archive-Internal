#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCharacter;
class InteractiveWorldRaidPath;
namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDPATROLSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x259AF40)
#define INTERACTIVEWORLDRAIDCOMMANDPATROLSTART_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259AF50)

	inline static constexpr unsigned int InteractiveWorldRaidCommandPatrolStart_TypeDefinitionIndex = 289;

	class InteractiveWorldRaidCommandPatrolStart : public Il2CppObject
	{
	public:
		InteractiveWorldRaidCharacter* character; // 0x20
		InteractiveWorldRaidPath* path; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDPATROLSTART_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDPATROLSTART_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

