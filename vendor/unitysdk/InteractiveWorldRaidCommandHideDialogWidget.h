#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDHIDEDIALOGWIDGET_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2598A70)
#define INTERACTIVEWORLDRAIDCOMMANDHIDEDIALOGWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2598BB0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandHideDialogWidget_TypeDefinitionIndex = 278;

	class InteractiveWorldRaidCommandHideDialogWidget : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDHIDEDIALOGWIDGET_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDHIDEDIALOGWIDGET_.CTOR_OFFSET))(nullptr);
		}

	};

