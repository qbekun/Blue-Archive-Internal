#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMAND_GET_ISFALSECOMMAND_OFFSET UNITYSDK_OFFSET(0x25A2C40)
#define INTERACTIVEWORLDRAIDCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x2597770)
#define INTERACTIVEWORLDRAIDCOMMAND_GET_ISEXECUTEDBYOTHERCOMMAND_OFFSET UNITYSDK_OFFSET(0x25A2C50)
#define INTERACTIVEWORLDRAIDCOMMAND_MARKASEXECUTED_OFFSET UNITYSDK_OFFSET(0x2598090)
#define INTERACTIVEWORLDRAIDCOMMAND_RESETEXECUTIONFLAG_OFFSET UNITYSDK_OFFSET(0x25A2C60)
#define INTERACTIVEWORLDRAIDCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERACTIVEWORLDRAIDCOMMAND_GET_ISPARALLEL_OFFSET UNITYSDK_OFFSET(0x25A2C70)

	inline static constexpr unsigned int InteractiveWorldRaidCommand_TypeDefinitionIndex = 328;

	class InteractiveWorldRaidCommand : public Il2CppObject
	{
	public:
		::System::Boolean executeOnFalseCondition; // 0x18
		::System::Boolean isParallel; // 0x19
		::System::Boolean _isExecutedByOtherCommand; // 0x1A

		::System::Boolean get_IsFalseCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMAND_GET_ISFALSECOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExecutedByOtherCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMAND_GET_ISEXECUTEDBYOTHERCOMMAND_OFFSET))(nullptr);
		}

		::System::Void MarkAsExecuted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMAND_MARKASEXECUTED_OFFSET))(nullptr);
		}

		::System::Void ResetExecutionFlag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMAND_RESETEXECUTIONFLAG_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMAND_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsParallel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMAND_GET_ISPARALLEL_OFFSET))(nullptr);
		}

	};

