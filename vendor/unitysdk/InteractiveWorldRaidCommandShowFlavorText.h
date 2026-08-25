#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDSHOWFLAVORTEXT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259E710)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWFLAVORTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x259E8F0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandShowFlavorText_TypeDefinitionIndex = 304;

	class InteractiveWorldRaidCommandShowFlavorText : public Il2CppObject
	{
	public:
		::System::String* flavorTextKey; // 0x20

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWFLAVORTEXT_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWFLAVORTEXT_.CTOR_OFFSET))(nullptr);
		}

	};

