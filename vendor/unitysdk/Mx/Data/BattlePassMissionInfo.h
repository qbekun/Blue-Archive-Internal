#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class BattlePassMissionExcel; }
namespace MX::Data { class BattlePassSeasonInfo; }

#define MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x1830C20)
#define MX_DATA_BATTLEPASSMISSIONINFO_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x1830C30)
#define MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSOPENDATE_OFFSET UNITYSDK_OFFSET(0x1830CC0)
#define MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSSEASONID_OFFSET UNITYSDK_OFFSET(0x1830CD0)
#define MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0x1830CE0)
#define MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x1830CF0)
#define MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSOPENDATE_OFFSET UNITYSDK_OFFSET(0x1830D00)
#define MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSSEASONID_OFFSET UNITYSDK_OFFSET(0x1830D10)
#define MX_DATA_BATTLEPASSMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1830D20)
#define MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0x1831650)

namespace MX::Data
{
	inline static constexpr unsigned int BattlePassMissionInfo_TypeDefinitionIndex = 15723;

	class BattlePassMissionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassSeasonId_k__BackingField; // 0xF8
		::System::DateTime* _BattlePassOpenDate_k__BackingField; // 0x100
		::System::DateTime* _BattlePassCloseDate_k__BackingField; // 0x108
		::System::Int64 _BattlePassExpAmount_k__BackingField; // 0x110

		::System::Void set_BattlePassCloseDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSCLOSEDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BattlePassOpenDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSOPENDATE_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattlePassExpAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSEXPAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BattlePassCloseDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSCLOSEDATE_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassOpenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_SET_BATTLEPASSOPENDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSSEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::BattlePassMissionExcel* arg, ::MX::Data::BattlePassSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::BattlePassMissionExcel*, ::MX::Data::BattlePassSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_BattlePassExpAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSMISSIONINFO_GET_BATTLEPASSEXPAMOUNT_OFFSET))(nullptr);
		}

	};
}

