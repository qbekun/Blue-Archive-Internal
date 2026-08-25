#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define PARTICLEDESTROY_.CTOR_OFFSET UNITYSDK_OFFSET(0x20494B0)
#define PARTICLEDESTROY_PLAYWITHDESTROY_OFFSET UNITYSDK_OFFSET(0x20494C0)
#define PARTICLEDESTROY_AWAKE_OFFSET UNITYSDK_OFFSET(0x20494F0)
#define PARTICLEDESTROY_UPDATE_OFFSET UNITYSDK_OFFSET(0x2049540)

	inline static constexpr unsigned int ParticleDestroy_TypeDefinitionIndex = 3276;

	class ParticleDestroy : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* particle; // 0x18
		::System::Boolean start; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEDESTROY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayWithDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEDESTROY_PLAYWITHDESTROY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEDESTROY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEDESTROY_UPDATE_OFFSET))(nullptr);
		}

	};

