#pragma once
#include "unitysdk.h"

class BeamMovementComponent;

#define BEAMMOVEMENTSYSTEM_PROCESSMOVE_OFFSET UNITYSDK_OFFSET(0x15A4410)
#define BEAMMOVEMENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A4370)
#define BEAMMOVEMENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A4400)
#define BEAMMOVEMENTSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15A4830)

	inline static constexpr unsigned int BeamMovementSystem_TypeDefinitionIndex = 1088;

	class BeamMovementSystem : public Il2CppObject
	{
	public:
		Il2CppObject* reachedBeams; // 0x0

		::System::Void ProcessMove(BeamMovementComponent* arg)
		{
			((::System::Void(*)(BeamMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMMOVEMENTSYSTEM_PROCESSMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(BeamMovementComponent* arg)
		{
			((::System::Void(*)(BeamMovementComponent*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMMOVEMENTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMMOVEMENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMMOVEMENTSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

	};

