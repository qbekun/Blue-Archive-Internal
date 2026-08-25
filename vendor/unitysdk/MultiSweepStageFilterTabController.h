#pragma once
#include "unitysdk.h"

class MultiSweepStageFilterOption;
class UIFilterUnit;

#define MULTISWEEPSTAGEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEB0F0)
#define MULTISWEEPSTAGEFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEB1A0)
#define MULTISWEEPSTAGEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEB1E0)
#define MULTISWEEPSTAGEFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEB1F0)
#define MULTISWEEPSTAGEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEB2C0)
#define MULTISWEEPSTAGEFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEB2D0)
#define MULTISWEEPSTAGEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEB440)

	inline static constexpr unsigned int MultiSweepStageFilterTabController_TypeDefinitionIndex = 8107;

	class MultiSweepStageFilterTabController : public <>c__DisplayClass3_0
	{
	public:
		::System::Void SetFilterUnit(MultiSweepStageFilterOption* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(MultiSweepStageFilterOption*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, MultiSweepStageFilterOption* arg2)
		{
			((::System::Void(*)(::System::Boolean, MultiSweepStageFilterOption*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

