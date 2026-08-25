#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftPresetNodeDB; }

#define CRAFTNODESLOTACTIVATIONMESSAGE_SET_ISACTIVATION_OFFSET UNITYSDK_OFFSET(0x23945A0)
#define CRAFTNODESLOTACTIVATIONMESSAGE_SET_PRESETNODEDB_OFFSET UNITYSDK_OFFSET(0x23945B0)
#define CRAFTNODESLOTACTIVATIONMESSAGE_GET_PRESETNODEDB_OFFSET UNITYSDK_OFFSET(0x23945C0)
#define CRAFTNODESLOTACTIVATIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23945D0)
#define CRAFTNODESLOTACTIVATIONMESSAGE_GET_ISACTIVATION_OFFSET UNITYSDK_OFFSET(0x2394610)

	inline static constexpr unsigned int CraftNodeSlotActivationMessage_TypeDefinitionIndex = 5166;

	class CraftNodeSlotActivationMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::GameLogic::DBModel::CraftPresetNodeDB* _PresetNodeDB_k__BackingField; // 0x18
		::System::Boolean _IsActivation_k__BackingField; // 0x20

		::System::Void set_IsActivation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODESLOTACTIVATIONMESSAGE_SET_ISACTIVATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_PresetNodeDB(::MX::GameLogic::DBModel::CraftPresetNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODESLOTACTIVATIONMESSAGE_SET_PRESETNODEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CraftPresetNodeDB* get_PresetNodeDB()
		{
			return ((::MX::GameLogic::DBModel::CraftPresetNodeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODESLOTACTIVATIONMESSAGE_GET_PRESETNODEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::CraftPresetNodeDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftPresetNodeDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODESLOTACTIVATIONMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsActivation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTNODESLOTACTIVATIONMESSAGE_GET_ISACTIVATION_OFFSET))(nullptr);
		}

	};

