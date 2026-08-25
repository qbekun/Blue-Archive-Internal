#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class ProjectilePool; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class ParticleSystem; }

#define <>C__DISPLAYCLASS5_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x147D3B0)
#define <>C__DISPLAYCLASS5_0__PLAYANDPOOL_B__0_OFFSET UNITYSDK_OFFSET(0x147DA20)

	inline static constexpr unsigned int <>c__DisplayClass5_0_TypeDefinitionIndex = 15170;

	class <>c__DisplayClass5_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* actor; // 0x10
		::MX::MinigameShooting::ProjectilePool* __4__this; // 0x18
		::System::String* path; // 0x20
		::UnityEngine::Vector3* pos; // 0x28
		::UnityEngine::Vector3* forward; // 0x34
		::System::Boolean canCancel; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _PlayAndPool_b__0(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_0__PLAYANDPOOL_B__0_OFFSET))(arg, nullptr);
		}

	};

