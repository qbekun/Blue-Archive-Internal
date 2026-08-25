#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }

#define BATTLEPASSLOCK_ENABLEUNLOCKVFX_OFFSET UNITYSDK_OFFSET(0x224DB20)
#define BATTLEPASSLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x224E100)
#define BATTLEPASSLOCK_INIT_OFFSET UNITYSDK_OFFSET(0x224E040)

	inline static constexpr unsigned int BattlePassLock_TypeDefinitionIndex = 4524;

	class BattlePassLock : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* LockParent; // 0x10
		::UnityEngine::GameObject* Lock; // 0x18
		::UnityEngine::GameObject* UnlockVFX; // 0x20
		::UnityEngine::Animation* UnlockAnimation; // 0x28

		::System::Void EnableUnlockVFX()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSLOCK_ENABLEUNLOCKVFX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSLOCK_INIT_OFFSET))(arg, nullptr);
		}

	};

