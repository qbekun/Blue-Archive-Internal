#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class ContinuousLogicEffect; }

#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_ADDCONTINUOUSLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1454CB0)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x1454DD0)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_REMOVEALLBUFF_OFFSET UNITYSDK_OFFSET(0x1454DE0)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1454FB0)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1455090)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x14550A0)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_REMOVECONTINUOUSLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x14550B0)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_SET_BUFF_OFFSET UNITYSDK_OFFSET(0x1455220)
#define MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1455230)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterBuffController_TypeDefinitionIndex = 15018;

	class CharacterBuffController : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x10
		Il2CppObject* _Buff_k__BackingField; // 0x18
		Il2CppObject* removeBuffList; // 0x20

		::System::Void AddContinuousLogicEffect(::MX::MinigameShooting::ContinuousLogicEffect* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::ContinuousLogicEffect*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_ADDCONTINUOUSLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Buff()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_GET_BUFF_OFFSET))(nullptr);
		}

		::System::Void RemoveAllBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_REMOVEALLBUFF_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void RemoveContinuousLogicEffect(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_REMOVECONTINUOUSLOGICEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Buff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_SET_BUFF_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERBUFFCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

	};
}

