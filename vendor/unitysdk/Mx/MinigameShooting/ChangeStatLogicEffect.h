#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class StatType; }
namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_CHANGESTATLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1463FA0)
#define MX_MINIGAMESHOOTING_CHANGESTATLOGICEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1463FB0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ChangeStatLogicEffect_TypeDefinitionIndex = 15075;

	class ChangeStatLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::StatType* Stat; // 0x18
		::System::Int64 AddStat; // 0x20
		::System::Int64 MultiplyStat; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHANGESTATLOGICEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::MX::MinigameShooting::Character* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHANGESTATLOGICEFFECT_APPLY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

