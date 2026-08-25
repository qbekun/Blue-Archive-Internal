#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C90280)
#define MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C903F0)
#define MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_SELECT_SOUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C90430)
#define MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_SELECTFIRST_SOUNDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C90720)
#define MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_SELECT_SOUNDUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1C90A30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SoundUIExcelRepository_TypeDefinitionIndex = 19515;

	class SoundUIExcelRepository : public <co_LoadDesignLevel>d__18
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_SoundUniqueId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_SELECT_SOUNDUNIQUEID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* SelectFirst_SoundUniqueId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_SELECTFIRST_SOUNDUNIQUEID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_SoundUniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SOUNDUIEXCELREPOSITORY_SELECT_SOUNDUNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

