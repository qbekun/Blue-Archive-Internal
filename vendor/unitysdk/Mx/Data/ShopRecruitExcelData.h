#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define MX_DATA_SHOPRECRUITEXCELDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x185E360)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185E370)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_ISNEWBIE_OFFSET UNITYSDK_OFFSET(0x185E380)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_SELECTABLEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x185E390)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185E3A0)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_SALEPERIODDAYPARAMETER_OFFSET UNITYSDK_OFFSET(0x185E3B0)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_TENGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x185E3C0)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_DIRECTPAYINVISIBLETOKENID_OFFSET UNITYSDK_OFFSET(0x185E3D0)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x185E3E0)
#define MX_DATA_SHOPRECRUITEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185E3F0)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x185E5C0)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_SALEPERIODDAYPARAMETER_OFFSET UNITYSDK_OFFSET(0x185E5D0)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x185E5E0)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_DIRECTPAYINVISIBLETOKENID_OFFSET UNITYSDK_OFFSET(0x185E5F0)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x185E600)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185E610)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_SELECTABLEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x185E620)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x185E630)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_TENGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x185E640)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_ONEGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x185E650)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_ISOVERRIDESALEPERIOD_OFFSET UNITYSDK_OFFSET(0x185E660)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_ISNEWBIE_OFFSET UNITYSDK_OFFSET(0x185E670)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_ONEGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0x185E680)
#define MX_DATA_SHOPRECRUITEXCELDATA_SET_ISOVERRIDESALEPERIOD_OFFSET UNITYSDK_OFFSET(0x185E690)
#define MX_DATA_SHOPRECRUITEXCELDATA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185E6A0)

namespace MX::Data
{
	inline static constexpr unsigned int ShopRecruitExcelData_TypeDefinitionIndex = 15894;

	class ShopRecruitExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x18
		::System::Boolean _IsLegacy_k__BackingField; // 0x1C
		::System::Int64 _OneGachaGoodsId_k__BackingField; // 0x20
		::System::Int64 _TenGachaGoodsId_k__BackingField; // 0x28
		Il2CppObject* _SalePeriodFrom_k__BackingField; // 0x30
		Il2CppObject* _SalePeriodTo_k__BackingField; // 0x40
		::System::Boolean _IsNewbie_k__BackingField; // 0x50
		::System::Boolean _IsOverrideSalePeriod_k__BackingField; // 0x51
		::System::Int64 _DirectPayInvisibleTokenId_k__BackingField; // 0x58
		::System::Int64 _SelectAbleGachaGroupId_k__BackingField; // 0x60
		::System::Int64 _SalePeriodDayParameter_k__BackingField; // 0x68

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsNewbie(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_ISNEWBIE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectAbleGachaGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_SELECTABLEGACHAGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SalePeriodFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_SALEPERIODFROM_OFFSET))(arg, nullptr);
		}

		::System::Void set_SalePeriodDayParameter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_SALEPERIODDAYPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void set_TenGachaGoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_TENGACHAGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DirectPayInvisibleTokenId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_DIRECTPAYINVISIBLETOKENID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsLegacy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_ISLEGACY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int64 get_SalePeriodDayParameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_SALEPERIODDAYPARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_SalePeriodTo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_SALEPERIODTO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DirectPayInvisibleTokenId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_DIRECTPAYINVISIBLETOKENID_OFFSET))(nullptr);
		}

		Il2CppObject* get_SalePeriodTo()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* get_SalePeriodFrom()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectAbleGachaGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_SELECTABLEGACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TenGachaGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_TENGACHAGOODSID_OFFSET))(nullptr);
		}

		::System::Void set_OneGachaGoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_ONEGACHAGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOverrideSalePeriod()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_ISOVERRIDESALEPERIOD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNewbie()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_ISNEWBIE_OFFSET))(nullptr);
		}

		::System::Int64 get_OneGachaGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_ONEGACHAGOODSID_OFFSET))(nullptr);
		}

		::System::Void set_IsOverrideSalePeriod(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_SET_ISOVERRIDESALEPERIOD_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPRECRUITEXCELDATA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

	};
}

