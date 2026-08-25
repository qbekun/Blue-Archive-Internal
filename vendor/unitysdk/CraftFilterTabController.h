#pragma once
#include "unitysdk.h"

namespace MX::Data { class CraftType; }
class CraftFilterOptionWrapper;
class UIFilterUnit;

#define CRAFTFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE93A0)
#define CRAFTFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAE93E0)
#define CRAFTFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAE96B0)
#define CRAFTFILTERTABCONTROLLER_GET_CURRENTFILTER_OFFSET UNITYSDK_OFFSET(0xAE9540)
#define CRAFTFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAE9720)
#define CRAFTFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAE9AE0)
#define CRAFTFILTERTABCONTROLLER_GET_CRAFTTYPE_OFFSET UNITYSDK_OFFSET(0xAE9AF0)
#define CRAFTFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAE9B00)
#define CRAFTFILTERTABCONTROLLER_SET_CRAFTTYPE_OFFSET UNITYSDK_OFFSET(0xAE9B10)
#define CRAFTFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAE9B20)

	inline static constexpr unsigned int CraftFilterTabController_TypeDefinitionIndex = 8102;

	class CraftFilterTabController : public ::MX::Logic::Actions::SelectExSkillAction
	{
	public:
		::MX::Data::CraftType* _CraftType_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, CraftFilterOptionWrapper* arg2)
		{
			((::System::Void(*)(::System::Boolean, CraftFilterOptionWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_currentFilter()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_GET_CURRENTFILTER_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(CraftFilterOptionWrapper* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(CraftFilterOptionWrapper*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::MX::Data::CraftType* get_CraftType()
		{
			return ((::MX::Data::CraftType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_GET_CRAFTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void set_CraftType(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_SET_CRAFTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

	};

