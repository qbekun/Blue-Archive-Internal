#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_SELECTFIRST_MONSTERLV_OFFSET UNITYSDK_OFFSET(0x1B4B190)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B4B4B0)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B620)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_SELECT_MONSTERLV_OFFSET UNITYSDK_OFFSET(0x1B4B660)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_SELECT_MONSTERLVS_OFFSET UNITYSDK_OFFSET(0x1B4B960)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int HpBarAbbreviationExcelRepository_TypeDefinitionIndex = 18169;

	class HpBarAbbreviationExcelRepository : public TimingTypes
	{
	public:
		Il2CppObject* SelectFirst_MonsterLv(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_SELECTFIRST_MONSTERLV_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_MonsterLv(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_SELECT_MONSTERLV_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MonsterLvs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCELREPOSITORY_SELECT_MONSTERLVS_OFFSET))(arg, arg, nullptr);
		}

	};
}

