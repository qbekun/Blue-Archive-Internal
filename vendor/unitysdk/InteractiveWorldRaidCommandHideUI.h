#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDHIDEUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x2598BC0)
#define INTERACTIVEWORLDRAIDCOMMANDHIDEUI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2598BD0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandHideUI_TypeDefinitionIndex = 279;

	class InteractiveWorldRaidCommandHideUI : public Il2CppObject
	{
	public:
		::System::Boolean isLockUIAnimation; // 0x20
		::System::Boolean isLockSpecificUI; // 0x21

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDHIDEUI_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDHIDEUI_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

