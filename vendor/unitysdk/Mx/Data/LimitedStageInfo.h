#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class LimitedStageSeasonInfo; }
namespace FlatData { class LimitedStageExcel; }
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define MX_DATA_LIMITEDSTAGEINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1853130)
#define MX_DATA_LIMITEDSTAGEINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1853140)
#define MX_DATA_LIMITEDSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1853150)

namespace MX::Data
{
	inline static constexpr unsigned int LimitedStageInfo_TypeDefinitionIndex = 15853;

	class LimitedStageInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x138

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::LimitedStageSeasonInfo* arg, ::FlatData::LimitedStageExcel* arg, Il2CppObject* arg, ::MX::GameLogic::Parcel::ParcelCost* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::LimitedStageSeasonInfo*, ::FlatData::LimitedStageExcel*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LIMITEDSTAGEINFO_.CTOR_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

	};
}

