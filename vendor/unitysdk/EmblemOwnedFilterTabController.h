#pragma once
#include "unitysdk.h"

class UIFilterUnit;

#define EMBLEMOWNEDFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xB0B260)
#define EMBLEMOWNEDFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xB0B3D0)
#define EMBLEMOWNEDFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xB0B470)
#define EMBLEMOWNEDFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0B480)
#define EMBLEMOWNEDFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB0B550)
#define EMBLEMOWNEDFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xB0B590)
#define EMBLEMOWNEDFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xB0B5A0)

	inline static constexpr unsigned int EmblemOwnedFilterTabController_TypeDefinitionIndex = 8198;

	class EmblemOwnedFilterTabController : public ::MX::Logic::Actions::Ob2d6eb33e4fe681a185b730aadb64bb26be4e31d56de5f2aee873fce16ad070f
	{
	public:
		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMOWNEDFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(::System::Boolean arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::System::Boolean, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMOWNEDFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMOWNEDFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMOWNEDFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMOWNEDFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMOWNEDFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMOWNEDFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

