#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_SPECIALS_OFFSET UNITYSDK_OFFSET(0x1DBD6A0)
#define MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_PERKLOGICEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1DBD6B0)
#define MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_STRIKERS_OFFSET UNITYSDK_OFFSET(0x1DBD6C0)
#define MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_DECK_OFFSET UNITYSDK_OFFSET(0x1DBD6D0)
#define MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD6E0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGamePlayerSetting_TypeDefinitionIndex = 20454;

	class CCGGamePlayerSetting : public Il2CppObject
	{
	public:
		Il2CppObject* _Deck_k__BackingField; // 0x10
		Il2CppObject* _Strikers_k__BackingField; // 0x18
		Il2CppObject* _Specials_k__BackingField; // 0x20
		Il2CppObject* _PerkLogicEffectIds_k__BackingField; // 0x28

		Il2CppObject* get_Specials()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_SPECIALS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PerkLogicEffectIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_PERKLOGICEFFECTIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Strikers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_STRIKERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Deck()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_GET_DECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMEPLAYERSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

