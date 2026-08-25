#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF8EF0)
#define MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF8F50)
#define MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9040)
#define MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8F40)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterCollectionFilterSaveData_TypeDefinitionIndex = 19914;

	class CharacterCollectionFilterSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* ArmorTypes; // 0x10
		Il2CppObject* BulletTypes; // 0x18
		Il2CppObject* CharacterStarGrades; // 0x20
		Il2CppObject* CharacterWeaponStarGrades; // 0x28
		Il2CppObject* Favorites; // 0x30
		Il2CppObject* Schools; // 0x38
		Il2CppObject* TacticRanges; // 0x40
		Il2CppObject* TacticRoles; // 0x48
		Il2CppObject* WeaponTypes; // 0x50
		Il2CppObject* GearTypes; // 0x58
		Il2CppObject* ObscurationTypes; // 0x60

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONFILTERSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

