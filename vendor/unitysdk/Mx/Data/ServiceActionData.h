#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace FlatData { class ServiceActionType; }

#define MX_DATA_SERVICEACTIONDATA_CACHEDATA_OFFSET UNITYSDK_OFFSET(0x193EE50)
#define MX_DATA_SERVICEACTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x193F200)
#define MX_DATA_SERVICEACTIONDATA_GETPARCELCOST_OFFSET UNITYSDK_OFFSET(0x193F280)
#define MX_DATA_SERVICEACTIONDATA_TRYGETGOODSID_OFFSET UNITYSDK_OFFSET(0x193F350)
#define MX_DATA_SERVICEACTIONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x193F3D0)

namespace MX::Data
{
	inline static constexpr unsigned int ServiceActionData_TypeDefinitionIndex = 16372;

	class ServiceActionData : public Il2CppObject
	{
	public:
		Il2CppObject* serviceActionExcelDic; // 0x28

		::System::Void CacheData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SERVICEACTIONDATA_CACHEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SERVICEACTIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetParcelCost(::FlatData::ServiceActionType* arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::FlatData::ServiceActionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SERVICEACTIONDATA_GETPARCELCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetGoodsId(::FlatData::ServiceActionType* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ServiceActionType*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SERVICEACTIONDATA_TRYGETGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SERVICEACTIONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

	};
}

