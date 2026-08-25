#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2580)
#define MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF2590)
#define MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF25F0)
#define MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1CF2600)
#define MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF2610)

namespace MX::SaveData
{
	inline static constexpr unsigned int EquipmentBatchGrowthModeSaveData_TypeDefinitionIndex = 19899;

	class EquipmentBatchGrowthModeSaveData : public Il2CppObject
	{
	public:
		::System::Boolean IsBatchMode; // 0x10

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_SET_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTBATCHGROWTHMODESAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

