#pragma once
#include "unitysdk.h"

class UIFilterUnit;

#define TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEEAD0)
#define TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEEB70)
#define TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEEC70)
#define TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEEE30)
#define TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEEE40)
#define TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEEE80)
#define TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEF1E0)

	inline static constexpr unsigned int TrophyCollectionOwnedFilterTabController_TypeDefinitionIndex = 8115;

	class TrophyCollectionOwnedFilterTabController : public ::MX::Logic::Actions::Ob2d6eb33e4fe681a185b730aadb64bb26be4e31d56de5f2aee873fce16ad070f
	{
	public:
		::Il2CppArray<::System::Object*>* trophyCollectionOwnedFilterProperties; // 0x60

		::System::Void SetFilterUnit(::System::Boolean arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::System::Boolean, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TROPHYCOLLECTIONOWNEDFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

	};

