#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidProp;
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDPLAYINTERACTIONANIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x259B1C0)
#define INTERACTIVEWORLDRAIDCOMMANDPLAYINTERACTIONANIM_FITCHARACTERS_OFFSET UNITYSDK_OFFSET(0x259B1D0)
#define INTERACTIVEWORLDRAIDCOMMANDPLAYINTERACTIONANIM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259B270)

	inline static constexpr unsigned int InteractiveWorldRaidCommandPlayInteractionAnim_TypeDefinitionIndex = 292;

	class InteractiveWorldRaidCommandPlayInteractionAnim : public Il2CppObject
	{
	public:
		InteractiveWorldRaidProp* targetProp; // 0x20
		Il2CppObject* characters; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDPLAYINTERACTIONANIM_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* FitCharacters(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDPLAYINTERACTIONANIM_FITCHARACTERS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDPLAYINTERACTIONANIM_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

