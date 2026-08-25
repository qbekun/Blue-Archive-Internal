#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_MARKASEXECUTED_OFFSET UNITYSDK_OFFSET(0x2597F10)
#define INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x25980A0)
#define INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2598240)
#define INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2598250)

	inline static constexpr unsigned int InteractiveWorldRaidCommandGroupExecute_TypeDefinitionIndex = 277;

	class InteractiveWorldRaidCommandGroupExecute : public Il2CppObject
	{
	public:
		Il2CppObject* _commands; // 0x20

		::System::Void MarkAsExecuted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_MARKASEXECUTED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDGROUPEXECUTE_AWAKE_OFFSET))(nullptr);
		}

	};

