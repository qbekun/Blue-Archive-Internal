#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class BattlePassExpLimitExcel; }

#define MX_DATA_BATTLEPASSEXPLIMIT_ADDEXPLIMITINFO_OFFSET UNITYSDK_OFFSET(0x182F830)
#define MX_DATA_BATTLEPASSEXPLIMIT_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x182F9E0)
#define MX_DATA_BATTLEPASSEXPLIMIT_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x182F9F0)
#define MX_DATA_BATTLEPASSEXPLIMIT_GETEXPLIMITINFO_OFFSET UNITYSDK_OFFSET(0x182FA00)
#define MX_DATA_BATTLEPASSEXPLIMIT_GET_EXPLIMITLIST_OFFSET UNITYSDK_OFFSET(0x182FBF0)
#define MX_DATA_BATTLEPASSEXPLIMIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x182FC00)
#define MX_DATA_BATTLEPASSEXPLIMIT_SET_EXPLIMITLIST_OFFSET UNITYSDK_OFFSET(0x182FCA0)
#define MX_DATA_BATTLEPASSEXPLIMIT_TRYGETWEEKLYLIMITFORVALIDATOR_OFFSET UNITYSDK_OFFSET(0x182FCB0)

namespace MX::Data
{
	inline static constexpr unsigned int BattlePassExpLimit_TypeDefinitionIndex = 15719;

	class BattlePassExpLimit : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x10
		Il2CppObject* _ExpLimitList_k__BackingField; // 0x18

		::System::Void AddExpLimitInfo(::MX::Data::Excel::BattlePassExpLimitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassExpLimitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_ADDEXPLIMITINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetExpLimitInfo(::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_GETEXPLIMITINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExpLimitList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_GET_EXPLIMITLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::BattlePassExpLimitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassExpLimitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExpLimitList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_SET_EXPLIMITLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetWeeklyLimitForValidator(::System::DateTime* arg, ExpLimitInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ExpLimitInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSEXPLIMIT_TRYGETWEEKLYLIMITFORVALIDATOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

