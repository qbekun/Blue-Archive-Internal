#pragma once
#include "unitysdk.h"

class UIRect;

#define CONTROLCHILDRENPARTICLESBYMYALPHA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20557F0)
#define CONTROLCHILDRENPARTICLESBYMYALPHA_UPDATE_OFFSET UNITYSDK_OFFSET(0x2055800)
#define CONTROLCHILDRENPARTICLESBYMYALPHA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20558D0)

	inline static constexpr unsigned int ControlChildrenParticlesByMyAlpha_TypeDefinitionIndex = 3338;

	class ControlChildrenParticlesByMyAlpha : public Il2CppObject
	{
	public:
		UIRect* alphaObserveTarget; // 0x18
		Il2CppObject* targets; // 0x20
		::System::Boolean firstFramePassed; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLCHILDRENPARTICLESBYMYALPHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLCHILDRENPARTICLESBYMYALPHA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLCHILDRENPARTICLESBYMYALPHA_ONENABLE_OFFSET))(nullptr);
		}

	};

