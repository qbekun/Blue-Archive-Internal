#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Buff; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class ParticleSystem; }

#define <>C__DISPLAYCLASS30_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1454770)
#define <>C__DISPLAYCLASS30_0__APPLYPARTICLE_B__0_OFFSET UNITYSDK_OFFSET(0x14548D0)

	inline static constexpr unsigned int <>c__DisplayClass30_0_TypeDefinitionIndex = 15016;

	class <>c__DisplayClass30_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Buff* __4__this; // 0x10
		::UnityEngine::Transform* parent; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS30_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ApplyParticle_b__0(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS30_0__APPLYPARTICLE_B__0_OFFSET))(arg, nullptr);
		}

	};

