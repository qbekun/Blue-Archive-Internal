#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_SELECT_NODEID_OFFSET UNITYSDK_OFFSET(0x1B32C10)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B32F10)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B32F50)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_SELECTFIRST_NODEID_OFFSET UNITYSDK_OFFSET(0x1B330C0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_SELECT_NODEIDS_OFFSET UNITYSDK_OFFSET(0x1B333E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftNodeGroupExcelRepository_TypeDefinitionIndex = 18065;

	class GachaCraftNodeGroupExcelRepository : public ::MXUnderCover::UCCollisionExitTrigger
	{
	public:
		Il2CppObject* Select_NodeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_SELECT_NODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_NodeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_SELECTFIRST_NODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_NodeIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCELREPOSITORY_SELECT_NODEIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

