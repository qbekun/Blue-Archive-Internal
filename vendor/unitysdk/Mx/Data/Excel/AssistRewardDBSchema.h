#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class AssistRewardType; }
namespace FlatData { class EchelonType; }

#define MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D9310)
#define MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19D9320)
#define MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x19D9330)
#define MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_SET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x19D9340)
#define MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D9350)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistRewardDBSchema_TypeDefinitionIndex = 16690;

	class AssistRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::AssistRewardType* _RewardType_k__BackingField; // 0x20
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x24

		::FlatData::AssistRewardType* get_RewardType()
		{
			return (return (::FlatData::AssistRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardType(::FlatData::AssistRewardType* arg)
		{
			((::System::Void(*)(::FlatData::AssistRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_SET_REWARDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

