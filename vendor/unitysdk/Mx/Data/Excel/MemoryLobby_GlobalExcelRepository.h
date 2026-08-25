#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B89A50)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B89A90)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B89DB0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B8A1B0)
#define MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B8A320)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MemoryLobby_GlobalExcelRepository_TypeDefinitionIndex = 18429;

	class MemoryLobby_GlobalExcelRepository : public AcquireItem
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBY_GLOBALEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

