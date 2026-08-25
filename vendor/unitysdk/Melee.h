#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace UnityEngine { class Vector3; }
namespace MXUnderCover { class SkillUseParameter; }

#define MELEE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA28A0)
#define MELEE_UPDATETARGETWITHOUTINPUT_OFFSET UNITYSDK_OFFSET(0xDA28F0)
#define MELEE_MOVEINSTANTLY_OFFSET UNITYSDK_OFFSET(0xDA3130)
#define MELEE_UPDATETARGETINTERNAL_OFFSET UNITYSDK_OFFSET(0xDA2960)
#define MELEE_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xDA3350)
#define MELEE_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0xDA3410)

	inline static constexpr unsigned int Melee_TypeDefinitionIndex = 9846;

	class Melee : public Il2CppObject
	{
	public:
		::System::Single stunAnimDuration; // 0x38
		::System::Single stunAnimStartFrame; // 0x3C
		::System::Single backPosDistance; // 0x40
		::System::Single CameraFollowDamping; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELEE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateTargetWithoutInput(::MXUnderCover::UCEntity* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MELEE_UPDATETARGETWITHOUTINPUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveInstantly(::MXUnderCover::UCEntity* arg, ::MXUnderCover::UCEntity* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MELEE_MOVEINSTANTLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateTargetInternal(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MELEE_UPDATETARGETINTERNAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + MELEE_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateTargets(::MXUnderCover::UCEntity* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MELEE_UPDATETARGETS_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

