#pragma once
#include "unitysdk.h"

namespace FlatData { class EmblemCategory; }
class UIFilterUnit;

#define EMBLEMCATEGORYFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xB0A5B0)
#define EMBLEMCATEGORYFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB0A5C0)
#define EMBLEMCATEGORYFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0A600)
#define EMBLEMCATEGORYFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xB0A6D0)
#define EMBLEMCATEGORYFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xB0A6E0)
#define EMBLEMCATEGORYFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xB0A9E0)
#define EMBLEMCATEGORYFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xB0AB50)

	inline static constexpr unsigned int EmblemCategoryFilterTabController_TypeDefinitionIndex = 8196;

	class EmblemCategoryFilterTabController : public ::MX::Logic::Actions::TimelineSkillAction
	{
	public:
		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMCATEGORYFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMCATEGORYFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMCATEGORYFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMCATEGORYFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::EmblemCategory* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::EmblemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMCATEGORYFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMBLEMCATEGORYFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(::FlatData::EmblemCategory* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::EmblemCategory*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + EMBLEMCATEGORYFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

	};

