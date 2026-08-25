#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }
class UIFilterUnit;

#define UICHARACTERFILTERSCHOOLTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAF25E0)
#define UICHARACTERFILTERSCHOOLTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF2760)
#define UICHARACTERFILTERSCHOOLTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAF2770)
#define UICHARACTERFILTERSCHOOLTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAF2780)
#define UICHARACTERFILTERSCHOOLTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAF28F0)
#define UICHARACTERFILTERSCHOOLTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF2BC0)
#define UICHARACTERFILTERSCHOOLTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF2C00)

	inline static constexpr unsigned int UICharacterFilterSchoolTabController_TypeDefinitionIndex = 8132;

	class UICharacterFilterSchoolTabController : public ::MX::Logic::BattleEntities::AccumulateEffectProcessor
	{
	public:
		::System::Void SetFilterUnit(::FlatData::School* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::FlatData::School*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERSCHOOLTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERSCHOOLTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERSCHOOLTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERSCHOOLTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::School* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERSCHOOLTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERSCHOOLTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERSCHOOLTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

	};

