#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B50100)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B50140)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_SELECT_STAGEID_OFFSET UNITYSDK_OFFSET(0x1B502B0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_SELECT_STAGEIDS_OFFSET UNITYSDK_OFFSET(0x1B505B0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_SELECTFIRST_STAGEID_OFFSET UNITYSDK_OFFSET(0x1B509B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InformationStrategyObjectExcelRepository_TypeDefinitionIndex = 18197;

	class InformationStrategyObjectExcelRepository : public Infinity
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_StageId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_SELECT_STAGEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_StageIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_SELECT_STAGEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_StageId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCELREPOSITORY_SELECTFIRST_STAGEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

