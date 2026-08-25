#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }
class UISlider;
class UIMiniGameShootingHpBar;

#define UIMGSHPBASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x205EBE0)
#define UIMGSHPBASE_REFRESH_OFFSET UNITYSDK_OFFSET(0x205EB20)
#define UIMGSHPBASE_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x205FF80)
#define UIMGSHPBASE_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x205FF90)
#define UIMGSHPBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x205EC10)
#define UIMGSHPBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x205FFA0)

	inline static constexpr unsigned int UIMGSHpBase_TypeDefinitionIndex = 3395;

	class UIMGSHpBase : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* _Character_k__BackingField; // 0x18
		UISlider* Slider; // 0x20
		UIMiniGameShootingHpBar* uiMGSHpbar; // 0x28

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMGSHPBASE_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMGSHPBASE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + UIMGSHPBASE_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* get_Character()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMGSHPBASE_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMGSHPBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIMiniGameShootingHpBar* arg, ::MX::MinigameShooting::Character* arg2)
		{
			((::System::Void(*)(UIMiniGameShootingHpBar*, ::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + UIMGSHPBASE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

