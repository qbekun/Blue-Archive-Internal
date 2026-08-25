#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class ProjectileSkillData; }
namespace MX::MinigameShooting { class InstantlySkillData; }
namespace MX::MinigameShooting { class ProjectileTargetSkillData; }
namespace MX::MinigameShooting { class DelayedInstantlySkilldata; }
namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }
namespace FlatData { class Geas; }
namespace FlatData { class VoiceEvent; }

#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_CALCDAMAGE_OFFSET UNITYSDK_OFFSET(0x1474FA0)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x1467840)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x145E7F0)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x1467950)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x145EB40)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PROJECTILESKILL_OFFSET UNITYSDK_OFFSET(0x1459C50)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_INSTANTLYSKILL_OFFSET UNITYSDK_OFFSET(0x1459E90)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PROJECTILETARGETSKILL_OFFSET UNITYSDK_OFFSET(0x145A2E0)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_DELAYEDINSTANTLYSKILL_OFFSET UNITYSDK_OFFSET(0x145A420)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PICKRANDOMGEAS_OFFSET UNITYSDK_OFFSET(0x14750E0)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PICKRANDOMGEAS_OFFSET UNITYSDK_OFFSET(0x1475360)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISEFFECTGEAS_OFFSET UNITYSDK_OFFSET(0x1475890)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x14758B0)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_STOPVOICE_OFFSET UNITYSDK_OFFSET(0x14759F0)
#define MX_MINIGAMESHOOTING_MGSLOGICSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1475A80)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MGSLogicService_TypeDefinitionIndex = 15150;

	class MGSLogicService : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* RaycastHitAlloc; // 0x0

		Il2CppObject* CalcDamage(::System::Int64 arg, ::MX::Core::Math::BasisPoint* arg2, ::MX::Core::Math::BasisPoint* arg3, ::System::Int64 arg4)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::MX::Core::Math::BasisPoint*, ::MX::Core::Math::BasisPoint*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_CALCDAMAGE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsBlocked(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Int32 arg3, ::UnityEngine::RaycastHit&* arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Int32, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsBlocked(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsBlocked(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, ::System::Int32 arg4, ::UnityEngine::RaycastHit&* arg5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsBlocked(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, ::System::Int32 arg4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISBLOCKED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ProjectileSkill(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::ProjectileSkillData* arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::ProjectileSkillData*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PROJECTILESKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InstantlySkill(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::InstantlySkillData* arg2, ::UnityEngine::Vector3* arg3)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::InstantlySkillData*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_INSTANTLYSKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ProjectileTargetSkill(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::ProjectileTargetSkillData* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::ProjectileTargetSkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PROJECTILETARGETSKILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* DelayedInstantlySkill(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::DelayedInstantlySkilldata* arg2, ::UnityEngine::Vector3* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::DelayedInstantlySkilldata*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_DELAYEDINSTANTLYSKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* PickRandomGeas(::System::Int32 arg, Il2CppObject* arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PICKRANDOMGEAS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingGeasExcel* PickRandomGeas(Il2CppObject* arg)
		{
			return ((::MX::Data::Excel::MiniGameShootingGeasExcel*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PICKRANDOMGEAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEffectGeas(::FlatData::Geas* arg)
		{
			return ((::System::Boolean(*)(::FlatData::Geas*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_ISEFFECTGEAS_OFFSET))(arg, nullptr);
		}

		::System::Void PlayVoice(::FlatData::VoiceEvent* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_PLAYVOICE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StopVoice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_STOPVOICE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSLOGICSERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

