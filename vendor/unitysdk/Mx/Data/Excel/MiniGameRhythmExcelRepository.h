#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1BC8390)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC8790)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC8AB0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8DB0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BC8DF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRhythmExcelRepository_TypeDefinitionIndex = 18725;

	class MiniGameRhythmExcelRepository : public ChageSight
	{
	public:
		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

