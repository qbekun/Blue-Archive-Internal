#pragma once
#include "unitysdk.h"

class UIType;
namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDOPENUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x259A9F0)
#define INTERACTIVEWORLDRAIDCOMMANDOPENUI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259AA00)

	inline static constexpr unsigned int InteractiveWorldRaidCommandOpenUI_TypeDefinitionIndex = 288;

	class InteractiveWorldRaidCommandOpenUI : public Il2CppObject
	{
	public:
		UIType* uiType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDOPENUI_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDOPENUI_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

