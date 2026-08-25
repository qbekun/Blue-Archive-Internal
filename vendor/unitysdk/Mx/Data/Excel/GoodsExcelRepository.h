#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GOODSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B3CDB0)
#define MX_DATA_EXCEL_GOODSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B3CDF0)
#define MX_DATA_EXCEL_GOODSEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B3D110)
#define MX_DATA_EXCEL_GOODSEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B3D410)
#define MX_DATA_EXCEL_GOODSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B3D810)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GoodsExcelRepository_TypeDefinitionIndex = 18113;

	class GoodsExcelRepository : public ::MXUnderCover::UCCollisionPlayerActionButtonTrigger
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOODSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

