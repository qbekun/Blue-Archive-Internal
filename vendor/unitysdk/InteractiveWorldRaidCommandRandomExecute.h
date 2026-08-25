#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDRANDOMEXECUTE_MARKASEXECUTED_OFFSET UNITYSDK_OFFSET(0x259C9B0)
#define INTERACTIVEWORLDRAIDCOMMANDRANDOMEXECUTE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259CA10)
#define INTERACTIVEWORLDRAIDCOMMANDRANDOMEXECUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x259CBB0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandRandomExecute_TypeDefinitionIndex = 297;

	class InteractiveWorldRaidCommandRandomExecute : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* commands; // 0x20

		::System::Void MarkAsExecuted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDRANDOMEXECUTE_MARKASEXECUTED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDRANDOMEXECUTE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDRANDOMEXECUTE_.CTOR_OFFSET))(nullptr);
		}

	};

