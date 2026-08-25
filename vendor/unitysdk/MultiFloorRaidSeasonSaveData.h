#pragma once
#include "unitysdk.h"

#define MULTIFLOORRAIDSEASONSAVEDATA_GETSAVEDSELECTEDFLOOR_OFFSET UNITYSDK_OFFSET(0x1D20F90)
#define MULTIFLOORRAIDSEASONSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D21010)
#define MULTIFLOORRAIDSEASONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D21030)
#define MULTIFLOORRAIDSEASONSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D21100)

	inline static constexpr unsigned int MultiFloorRaidSeasonSaveData_TypeDefinitionIndex = 19988;

	class MultiFloorRaidSeasonSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* AlreadyUnlockedSection; // 0x10
		::System::Int32 AlreadyUnlockedHighestFloor; // 0x18
		Il2CppObject* SelectedFloorDic; // 0x20

		::System::Int32 GetSavedSelectedFloor(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSEASONSAVEDATA_GETSAVEDSELECTEDFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSEASONSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSEASONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDSEASONSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};

