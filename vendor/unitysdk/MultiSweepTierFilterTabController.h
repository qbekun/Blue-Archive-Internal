#pragma once
#include "unitysdk.h"

class MultiSweepFilterTabController;
class UIFilterUnit;

#define MULTISWEEPTIERFILTERTABCONTROLLER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xAEB710)
#define MULTISWEEPTIERFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0xAEB9C0)
#define MULTISWEEPTIERFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAEBAF0)
#define MULTISWEEPTIERFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEBB00)
#define MULTISWEEPTIERFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEBB40)
#define MULTISWEEPTIERFILTERTABCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xAEBB50)
#define MULTISWEEPTIERFILTERTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAEBCD0)

	inline static constexpr unsigned int MultiSweepTierFilterTabController_TypeDefinitionIndex = 8108;

	class MultiSweepTierFilterTabController : public ::MX::Logic::Actions::StunnedAction
	{
	public:
		MultiSweepFilterTabController* MultiSweepFilterTabController; // 0x60

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPTIERFILTERTABCONTROLLER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFilterUnit(::System::Int64 arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(::System::Int64, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPTIERFILTERTABCONTROLLER_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPTIERFILTERTABCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPTIERFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPTIERFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPTIERFILTERTABCONTROLLER_APPLY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPTIERFILTERTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

	};

