#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_SELECTFIRST_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B95CF0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B96010)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_SELECT_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B96180)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_SELECT_LEVELIDS_OFFSET UNITYSDK_OFFSET(0x1B96480)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B96880)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLevelExcelRepository_TypeDefinitionIndex = 18488;

	class MinigameCCGLevelExcelRepository : public <>c__DisplayClass1_0
	{
	public:
		Il2CppObject* SelectFirst_LevelId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_SELECTFIRST_LEVELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_LevelId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_SELECT_LEVELID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_LevelIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_SELECT_LEVELIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

