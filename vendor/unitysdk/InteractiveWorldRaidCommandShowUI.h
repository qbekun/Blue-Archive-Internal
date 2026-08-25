#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDSHOWUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x259E900)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWUI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259E910)

	inline static constexpr unsigned int InteractiveWorldRaidCommandShowUI_TypeDefinitionIndex = 305;

	class InteractiveWorldRaidCommandShowUI : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWUI_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWUI_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

