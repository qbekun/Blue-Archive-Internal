#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StoreType; }

#define MX_DATA_PRODUCTMONTHLYDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1926020)
#define MX_DATA_PRODUCTMONTHLYDATA_GETPRODUCTMONTHLY_OFFSET UNITYSDK_OFFSET(0x1926440)
#define MX_DATA_PRODUCTMONTHLYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19264D0)
#define MX_DATA_PRODUCTMONTHLYDATA_HASPRODUCTMONTHLY_OFFSET UNITYSDK_OFFSET(0x1926550)
#define MX_DATA_PRODUCTMONTHLYDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x19265A0)
#define MX_DATA_PRODUCTMONTHLYDATA_GETLIST_OFFSET UNITYSDK_OFFSET(0x1926600)
#define MX_DATA_PRODUCTMONTHLYDATA_GETLISTFROMSTORETYPE_OFFSET UNITYSDK_OFFSET(0x1926750)
#define MX_DATA_PRODUCTMONTHLYDATA_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x1926950)
#define MX_DATA_PRODUCTMONTHLYDATA_SET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x1926960)
#define MX_DATA_PRODUCTMONTHLYDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x1926970)

namespace MX::Data
{
	inline static constexpr unsigned int ProductMonthlyData_TypeDefinitionIndex = 16305;

	class ProductMonthlyData : public Il2CppObject
	{
	public:
		Il2CppObject* _Dictionary_k__BackingField; // 0x28

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductMonthly(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_GETPRODUCTMONTHLY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasProductMonthly(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_HASPRODUCTMONTHLY_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_GETLIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetListFromStoreType(::FlatData::StoreType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_GETLISTFROMSTORETYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Dictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_GET_DICTIONARY_OFFSET))(nullptr);
		}

		::System::Void set_Dictionary(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_SET_DICTIONARY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Ids()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATA_GET_IDS_OFFSET))(nullptr);
		}

	};
}

