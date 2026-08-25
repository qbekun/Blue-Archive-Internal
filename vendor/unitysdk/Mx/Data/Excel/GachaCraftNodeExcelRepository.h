#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B31AF0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B31DF0)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B32110)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B32510)
#define MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B32680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftNodeExcelRepository_TypeDefinitionIndex = 18058;

	class GachaCraftNodeExcelRepository : public ::MXUnderCover::UCCollisionEnterTrigger
	{
	public:
		Il2CppObject* Select_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_IDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

