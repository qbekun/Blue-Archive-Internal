#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A09C70)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A09F70)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A09FB0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A0A3B0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A0A6D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterAcademyTagsExcelRepository_TypeDefinitionIndex = 16916;

	class CharacterAcademyTagsExcelRepository : public ::FlatData::AccountBanType
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

