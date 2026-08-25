#pragma once
#include "unitysdk.h"

namespace FlatData { class ArmorType; }
class UIFilterUnit;

#define UICHARACTERFILTERARMORTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEF210)
#define UICHARACTERFILTERARMORTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEF220)
#define UICHARACTERFILTERARMORTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEF4F0)
#define UICHARACTERFILTERARMORTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEF5C0)
#define UICHARACTERFILTERARMORTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEF5D0)
#define UICHARACTERFILTERARMORTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEF610)
#define UICHARACTERFILTERARMORTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEF780)

	inline static constexpr unsigned int UICharacterFilterArmorTabController_TypeDefinitionIndex = 8118;

	class UICharacterFilterArmorTabController : public <>c
	{
	public:
		::Il2CppArray<::System::Object*>* armorIconProperties; // 0x60

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERARMORTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::ArmorType* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERARMORTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERARMORTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERARMORTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERARMORTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERARMORTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(::FlatData::ArmorType* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::ArmorType*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERARMORTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

	};

