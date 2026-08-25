#pragma once
#include "unitysdk.h"

class MultiSweepFilterOption;
class UIFilterUnit;

#define MULTISWEEPFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEA4B0)
#define MULTISWEEPFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEA4C0)
#define MULTISWEEPFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEA500)
#define MULTISWEEPFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEA5D0)
#define MULTISWEEPFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEA5E0)
#define MULTISWEEPFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEA750)
#define MULTISWEEPFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEA800)

	inline static constexpr unsigned int MultiSweepFilterTabController_TypeDefinitionIndex = 8105;

	class MultiSweepFilterTabController : public ::MX::Logic::BattleEntities::AccumulateEffectInfo
	{
	public:
		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(MultiSweepFilterOption* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(MultiSweepFilterOption*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, MultiSweepFilterOption* arg2)
		{
			((::System::Void(*)(::System::Boolean, MultiSweepFilterOption*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

