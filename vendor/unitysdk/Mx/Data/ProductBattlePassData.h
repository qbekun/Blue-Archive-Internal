#pragma once
#include "../../unitysdk.h"

#define MX_DATA_PRODUCTBATTLEPASSDATA_SET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x19213F0)
#define MX_DATA_PRODUCTBATTLEPASSDATA_GETPRODUCTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x1921400)
#define MX_DATA_PRODUCTBATTLEPASSDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1921490)
#define MX_DATA_PRODUCTBATTLEPASSDATA_GETSHOPCASHIDSBYPRODUCTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1921910)
#define MX_DATA_PRODUCTBATTLEPASSDATA_GETLIST_OFFSET UNITYSDK_OFFSET(0x1921C30)
#define MX_DATA_PRODUCTBATTLEPASSDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1921D80)
#define MX_DATA_PRODUCTBATTLEPASSDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19214F0)
#define MX_DATA_PRODUCTBATTLEPASSDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x1921E00)
#define MX_DATA_PRODUCTBATTLEPASSDATA_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x1921E50)

namespace MX::Data
{
	inline static constexpr unsigned int ProductBattlePassData_TypeDefinitionIndex = 16294;

	class ProductBattlePassData : public Il2CppObject
	{
	public:
		Il2CppObject* _Dictionary_k__BackingField; // 0x28

		::System::Void set_Dictionary(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_SET_DICTIONARY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductBattlePass(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_GETPRODUCTBATTLEPASS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopCashIdsByProductGroupIds(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_GETSHOPCASHIDSBYPRODUCTGROUPIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_GETLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_Ids()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_GET_IDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Dictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTBATTLEPASSDATA_GET_DICTIONARY_OFFSET))(nullptr);
		}

	};
}

