#pragma once
#include "unitysdk.h"

class MultiSweepStageDifficultyFilterOption;
class UIFilterUnit;

#define MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEAAD0)
#define MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEAB10)
#define MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEABE0)
#define MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEAD50)
#define MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEAD60)
#define MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEAE10)
#define MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEAE20)

	inline static constexpr unsigned int MultiSweepStageDifficultyFilterTabController_TypeDefinitionIndex = 8106;

	class MultiSweepStageDifficultyFilterTabController : public <>c__DisplayClass2_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(MultiSweepStageDifficultyFilterOption* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(MultiSweepStageDifficultyFilterOption*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, MultiSweepStageDifficultyFilterOption* arg2)
		{
			((::System::Void(*)(::System::Boolean, MultiSweepStageDifficultyFilterOption*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGEDIFFICULTYFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};

