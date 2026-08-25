#pragma once
#include "unitysdk.h"

class Config;
namespace UnityEngine { class Vector3; }

#define FXSHAKE_AWAKE_OFFSET UNITYSDK_OFFSET(0x20BE310)
#define FXSHAKE_STOP_OFFSET UNITYSDK_OFFSET(0x20BE350)
#define FXSHAKE_PLAY_OFFSET UNITYSDK_OFFSET(0x20BE3A0)
#define FXSHAKE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20BE520)
#define FXSHAKE_PLAYWITHCONFIG_OFFSET UNITYSDK_OFFSET(0x20BE570)
#define FXSHAKE_PLAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x20BE490)
#define FXSHAKE_GETNEWOFFSET_OFFSET UNITYSDK_OFFSET(0x20BE680)
#define FXSHAKE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BE780)

	inline static constexpr unsigned int FxShake_TypeDefinitionIndex = 3629;

	class FxShake : public Il2CppObject
	{
	public:
		Config* Settings; // 0x18
		::UnityEngine::Vector3* _initialPosition; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_STOP_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_PLAY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void PlayWithConfig(Config* arg)
		{
			((::System::Void(*)(Config*, ::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_PLAYWITHCONFIG_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayCoroutine(Config* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Config*, ::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_PLAYCOROUTINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetNewOffset(::UnityEngine::Vector3* arg, Config* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, Config*, ::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_GETNEWOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSHAKE_.CTOR_OFFSET))(nullptr);
		}

	};

