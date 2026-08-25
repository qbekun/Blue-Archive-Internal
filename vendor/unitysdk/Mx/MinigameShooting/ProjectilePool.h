#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class Character; }
namespace UnityEngine { class ParticleSystem; }
namespace MX::MinigameShooting { class ProjectileBase; }

#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x147A810)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_CREATECACHE_OFFSET UNITYSDK_OFFSET(0x147D1D0)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_PLAYANDPOOL_OFFSET UNITYSDK_OFFSET(0x147D230)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_PLAYANDPOOL_OFFSET UNITYSDK_OFFSET(0x14768C0)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_PLAYANDPOOL_OFFSET UNITYSDK_OFFSET(0x147D3C0)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_RESTORE_OFFSET UNITYSDK_OFFSET(0x147D4E0)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_GETOBEJCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_RESTORE_OFFSET UNITYSDK_OFFSET(0x147D5D0)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x147B280)
#define MX_MINIGAMESHOOTING_PROJECTILEPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x14790D0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ProjectilePool_TypeDefinitionIndex = 15173;

	class ProjectilePool : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x10
		::UnityEngine::GameObject* parent; // 0x18

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void CreateCache(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_CREATECACHE_OFFSET))(str, arg, nullptr);
		}

		::System::Void PlayAndPool(::System::String* str, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_PLAYANDPOOL_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void PlayAndPool(::MX::MinigameShooting::Character* arg, ::System::String* str, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_PLAYANDPOOL_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* PlayAndPool(::MX::MinigameShooting::Character* arg, ::System::String* str, ::UnityEngine::ParticleSystem* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::Boolean arg5)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::MinigameShooting::Character*, ::System::String*, ::UnityEngine::ParticleSystem*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_PLAYANDPOOL_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Restore(::System::String* str, ::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_RESTORE_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetObejct(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_GETOBEJCT_OFFSET))(str, arg, nullptr);
		}

		::System::Void Restore(::MX::MinigameShooting::ProjectileBase* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::ProjectileBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_RESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEPOOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

