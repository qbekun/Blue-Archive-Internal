#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDOPENINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x259A550)
#define INTERACTIVEWORLDRAIDCOMMANDOPENINFORMATION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259A560)

	inline static constexpr unsigned int InteractiveWorldRaidCommandOpenInformation_TypeDefinitionIndex = 286;

	class InteractiveWorldRaidCommandOpenInformation : public Il2CppObject
	{
	public:
		::System::Int64 informationGroupId; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDOPENINFORMATION_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDOPENINFORMATION_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

