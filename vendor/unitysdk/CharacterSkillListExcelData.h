#pragma once
#include "unitysdk.h"

#define CHARACTERSKILLLISTEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F8AA0)

	inline static constexpr unsigned int CharacterSkillListExcelData_TypeDefinitionIndex = 3837;

	class CharacterSkillListExcelData : public Il2CppObject
	{
	public:
		Il2CppObject* ExcelList; // 0x10
		Il2CppObject* Table; // 0x18
		::System::Int32 WeaponStarGrade; // 0x20
		::System::Int32 GearTier; // 0x24

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSKILLLISTEXCELDATA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

