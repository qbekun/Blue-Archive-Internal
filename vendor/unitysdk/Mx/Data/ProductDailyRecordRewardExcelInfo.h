#pragma once
#include "../../unitysdk.h"

#define MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x18575C0)
#define MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x18575D0)
#define MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x18575E0)
#define MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x18575F0)
#define MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857600)
#define MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857610)

namespace MX::Data
{
	inline static constexpr unsigned int ProductDailyRecordRewardExcelInfo_TypeDefinitionIndex = 15874;

	class ProductDailyRecordRewardExcelInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x18

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDREWARDEXCELINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

