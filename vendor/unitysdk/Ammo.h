#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class SkillUseParameter; }
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class UCPropEntity; }

#define AMMO_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9FA60)
#define AMMO_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0xD9FB20)
#define AMMO_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA0BF0)
#define AMMO_CHECKPROPOBSTACLEHIT_OFFSET UNITYSDK_OFFSET(0xDA0810)

	inline static constexpr unsigned int Ammo_TypeDefinitionIndex = 9838;

	class Ammo : public Il2CppObject
	{
	public:
		::System::Single stunAnimDuration; // 0x38
		::System::Single stunAnimStartFrame_npc; // 0x3C
		::System::Single breakAnimStartFrame_prop; // 0x40

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + AMMO_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateTargets(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AMMO_UPDATETARGETS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckPropObstacleHit(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCPropEntity* arg2)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCPropEntity*, ::PVOID))((::PBYTE)hIl2Cpp + AMMO_CHECKPROPOBSTACLEHIT_OFFSET))(arg, arg2, nullptr);
		}

	};

