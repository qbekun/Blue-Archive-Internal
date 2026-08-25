#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B88590)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B88700)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B88AF0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B88B30)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B88E50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MemoryLobbyExcelRepository_TypeDefinitionIndex = 18422;

	class MemoryLobbyExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

