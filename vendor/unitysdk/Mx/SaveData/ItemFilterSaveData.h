#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ITEMFILTERSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF8DC0)
#define MX_SAVEDATA_ITEMFILTERSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF8E20)
#define MX_SAVEDATA_ITEMFILTERSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF8E30)
#define MX_SAVEDATA_ITEMFILTERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8E10)

namespace MX::SaveData
{
	inline static constexpr unsigned int ItemFilterSaveData_TypeDefinitionIndex = 19913;

	class ItemFilterSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* Inventory; // 0x10
		Il2CppObject* NormalCraft; // 0x18
		Il2CppObject* ShiftingCraft; // 0x20
		Il2CppObject* ShiftingCraftFavorite; // 0x28
		Il2CppObject* ShiftingCraftMaterial; // 0x30
		Il2CppObject* TrophyCollectionOwned; // 0x38
		Il2CppObject* TrophyCollectionBossCategory; // 0x40
		Il2CppObject* MultiSweep; // 0x48
		Il2CppObject* MultiSweepEquipmentTier; // 0x50

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMFILTERSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMFILTERSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMFILTERSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMFILTERSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

