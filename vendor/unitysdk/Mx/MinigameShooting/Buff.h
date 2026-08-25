#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class ContinuousLogicEffect; }
namespace UnityEngine { class ParticleSystem; }
namespace MX::MinigameShooting { class DotLogicEffect; }
namespace FlatData { class EffectBone; }

#define MX_MINIGAMESHOOTING_BUFF_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1454180)
#define MX_MINIGAMESHOOTING_BUFF_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1454190)
#define MX_MINIGAMESHOOTING_BUFF_.CTOR_OFFSET UNITYSDK_OFFSET(0x14541A0)
#define MX_MINIGAMESHOOTING_BUFF_REFRESH_OFFSET UNITYSDK_OFFSET(0x1454510)
#define MX_MINIGAMESHOOTING_BUFF_REMOVEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1454520)
#define MX_MINIGAMESHOOTING_BUFF_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x14545D0)
#define MX_MINIGAMESHOOTING_BUFF_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x14545E0)
#define MX_MINIGAMESHOOTING_BUFF_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x14545F0)
#define MX_MINIGAMESHOOTING_BUFF_UPDATE_OFFSET UNITYSDK_OFFSET(0x1454600)
#define MX_MINIGAMESHOOTING_BUFF_GET_LOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1454750)
#define MX_MINIGAMESHOOTING_BUFF_GET_TICKTIME_OFFSET UNITYSDK_OFFSET(0x1454760)
#define MX_MINIGAMESHOOTING_BUFF_APPLYPARTICLE_OFFSET UNITYSDK_OFFSET(0x14543C0)
#define MX_MINIGAMESHOOTING_BUFF_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1454840)
#define MX_MINIGAMESHOOTING_BUFF_SET_TICKTIME_OFFSET UNITYSDK_OFFSET(0x1454850)
#define MX_MINIGAMESHOOTING_BUFF_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1454860)
#define MX_MINIGAMESHOOTING_BUFF_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1454870)
#define MX_MINIGAMESHOOTING_BUFF_SET_LOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1454880)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Buff_TypeDefinitionIndex = 15017;

	class Buff : public Il2CppObject
	{
	public:
		::System::Int64 _BuffId_k__BackingField; // 0x10
		::MX::MinigameShooting::Character* _Owner_k__BackingField; // 0x18
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x20
		::System::Single _Duration_k__BackingField; // 0x28
		::System::Single _TickTime_k__BackingField; // 0x2C
		::MX::MinigameShooting::ContinuousLogicEffect* _LogicEffect_k__BackingField; // 0x30
		::UnityEngine::ParticleSystem* particle; // 0x38
		::MX::MinigameShooting::DotLogicEffect* dotLogicEffect; // 0x40
		::System::Boolean isDot; // 0x48
		::System::Single durationTimer; // 0x4C
		::System::Single tickTimer; // 0x50

		::System::Void set_BuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_SET_BUFFID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2, ::MX::MinigameShooting::ContinuousLogicEffect* arg3)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::MX::MinigameShooting::ContinuousLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RemoveParticle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_REMOVEPARTICLE_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_GET_BUFFID_OFFSET))(nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Owner(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_UPDATE_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::ContinuousLogicEffect* get_LogicEffect()
		{
			return ((::MX::MinigameShooting::ContinuousLogicEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_GET_LOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Single get_TickTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_GET_TICKTIME_OFFSET))(nullptr);
		}

		::System::Void ApplyParticle(::System::String* str, ::FlatData::EffectBone* arg)
		{
			((::System::Void(*)(::System::String*, ::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_APPLYPARTICLE_OFFSET))(str, arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Owner()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void set_TickTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_SET_TICKTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffect(::MX::MinigameShooting::ContinuousLogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::ContinuousLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BUFF_SET_LOGICEFFECT_OFFSET))(arg, nullptr);
		}

	};
}

