#pragma once
#include "unitysdk.h"

class MoveMode;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineBlendDefinition; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cinemachine { class CinemachineBrain; }

#define INTERACTIVEWORLDRAIDCOMMANDMOVECAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2598E20)
#define INTERACTIVEWORLDRAIDCOMMANDMOVECAMERA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2598E30)
#define INTERACTIVEWORLDRAIDCOMMANDMOVECAMERA_ISSKIPNEEDED_OFFSET UNITYSDK_OFFSET(0x2598FD0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandMoveCamera_TypeDefinitionIndex = 283;

	class InteractiveWorldRaidCommandMoveCamera : public Il2CppObject
	{
	public:
		MoveMode* moveTo; // 0x20
		::Cinemachine::CinemachineVirtualCamera* target; // 0x28
		::System::Boolean overrideBlendDefinition; // 0x30
		::Cinemachine::CinemachineBlendDefinition* blendDefinition; // 0x38
		::System::Boolean blockInput; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDMOVECAMERA_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDMOVECAMERA_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSkipNeeded(::Cinemachine::CinemachineBrain* arg)
		{
			return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDMOVECAMERA_ISSKIPNEEDED_OFFSET))(arg, nullptr);
		}

	};

