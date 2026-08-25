#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class ContentEnterCostReduceExcel; }

#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183C130)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183C140)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x183C150)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183C160)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_REDUCECOST_OFFSET UNITYSDK_OFFSET(0x183C240)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x183C250)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x183C260)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_REDUCECOST_OFFSET UNITYSDK_OFFSET(0x183C270)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_REWARDENDDATE_OFFSET UNITYSDK_OFFSET(0x183C280)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_REWARDENDDATE_OFFSET UNITYSDK_OFFSET(0x183C290)
#define MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x183C2A0)

namespace MX::Data
{
	inline static constexpr unsigned int ContentEnterCostReduceInfo_TypeDefinitionIndex = 15770;

	class ContentEnterCostReduceInfo : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		::System::Int64 _StageId_k__BackingField; // 0x18
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelInfo* _ReduceCost_k__BackingField; // 0x28
		Il2CppObject* _RewardEndDate_k__BackingField; // 0x30

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ContentEnterCostReduceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ContentEnterCostReduceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ReduceCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_REDUCECOST_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReduceCost(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_REDUCECOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardEndDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_REWARDENDDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardEndDate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_GET_REWARDENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTENTERCOSTREDUCEINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

	};
}

