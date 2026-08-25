#pragma once
#include "unitysdk.h"

class UIFilterUnit;

#define EMBLEMFAVORRANKFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xB0ABF0)
#define EMBLEMFAVORRANKFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xB0AC00)
#define EMBLEMFAVORRANKFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB0AD00)
#define EMBLEMFAVORRANKFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xB0AD40)
#define EMBLEMFAVORRANKFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0AD50)
#define EMBLEMFAVORRANKFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xB0AE20)
#define EMBLEMFAVORRANKFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xB0AF90)

	inline static constexpr unsigned int EmblemFavorRankFilterTabController_TypeDefinitionIndex = 8197;

	class EmblemFavorRankFilterTabController : public ::MX::Logic::Actions::WeaponMountSkillAction
	{
	public:
		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMFAVORRANKFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(::System::Int32 arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::System::Int32, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMFAVORRANKFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMFAVORRANKFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMFAVORRANKFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMFAVORRANKFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMFAVORRANKFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMFAVORRANKFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

