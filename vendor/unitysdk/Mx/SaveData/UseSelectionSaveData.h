#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_USESELECTIONSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF26C0)
#define MX_SAVEDATA_USESELECTIONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2730)
#define MX_SAVEDATA_USESELECTIONSAVEDATA_SETUSESELECTIONPOTENTIAL_OFFSET UNITYSDK_OFFSET(0x1CF2740)
#define MX_SAVEDATA_USESELECTIONSAVEDATA_SETUSESELECTIONSKILL_OFFSET UNITYSDK_OFFSET(0x1CF2750)
#define MX_SAVEDATA_USESELECTIONSAVEDATA_SETUSESELECTIONEQUIP_OFFSET UNITYSDK_OFFSET(0x1CF2760)
#define MX_SAVEDATA_USESELECTIONSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF2770)
#define MX_SAVEDATA_USESELECTIONSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2780)

namespace MX::SaveData
{
	inline static constexpr unsigned int UseSelectionSaveData_TypeDefinitionIndex = 19901;

	class UseSelectionSaveData : public Il2CppObject
	{
	public:
		::System::Boolean UseSelectionOnEquipmentGrowth; // 0x10
		::System::Boolean UseSelectionOnSkillGrowth; // 0x11
		::System::Boolean UseSelectionOnPotentialGrowth; // 0x12

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_USESELECTIONSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_USESELECTIONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUseSelectionPotential(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_USESELECTIONSAVEDATA_SETUSESELECTIONPOTENTIAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseSelectionSkill(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_USESELECTIONSAVEDATA_SETUSESELECTIONSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseSelectionEquip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_USESELECTIONSAVEDATA_SETUSESELECTIONEQUIP_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_USESELECTIONSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_USESELECTIONSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

