#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDCANCELEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2597760)
#define INTERACTIVEWORLDRAIDCOMMANDCANCELEXECUTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2597780)

	inline static constexpr unsigned int InteractiveWorldRaidCommandCancelExecution_TypeDefinitionIndex = 273;

	class InteractiveWorldRaidCommandCancelExecution : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* targetProcedures; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDCANCELEXECUTION_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDCANCELEXECUTION_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

