#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAA80)
#define MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_ADDCHECKED_OFFSET UNITYSDK_OFFSET(0x1CFAB00)
#define MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFABE0)
#define MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFAC90)
#define MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CFAD10)
#define MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFAD60)

namespace MX::SaveData
{
	inline static constexpr unsigned int ArenaSeasonGuideCheckSaveData_TypeDefinitionIndex = 19942;

	class ArenaSeasonGuideCheckSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* CheckedSeasonIds; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddChecked(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_ADDCHECKED_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENASEASONGUIDECHECKSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

