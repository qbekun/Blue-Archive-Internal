#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class GuideMissionExcel; }
namespace MX::Data { class GuideMissionSeasonInfo; }

#define MX_DATA_GUIDEMISSIONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x184D1F0)
#define MX_DATA_GUIDEMISSIONINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x184D200)
#define MX_DATA_GUIDEMISSIONINFO_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x184D210)
#define MX_DATA_GUIDEMISSIONINFO_SET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x184D220)
#define MX_DATA_GUIDEMISSIONINFO_GET_TABNUMBER_OFFSET UNITYSDK_OFFSET(0x184D230)
#define MX_DATA_GUIDEMISSIONINFO_SET_TABNUMBER_OFFSET UNITYSDK_OFFSET(0x184D240)
#define MX_DATA_GUIDEMISSIONINFO_GET_LOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x184D250)
#define MX_DATA_GUIDEMISSIONINFO_GET_ISAUTOCLEARFORSCENARIO_OFFSET UNITYSDK_OFFSET(0x184D260)
#define MX_DATA_GUIDEMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x184D270)
#define MX_DATA_GUIDEMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x184D530)
#define MX_DATA_GUIDEMISSIONINFO_GET_CANRECEIVEBYMULTIPLEREWARD_OFFSET UNITYSDK_OFFSET(0x184E090)

namespace MX::Data
{
	inline static constexpr unsigned int GuideMissionInfo_TypeDefinitionIndex = 15838;

	class GuideMissionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0xF8
		::System::Boolean _IsLegacy_k__BackingField; // 0x100
		::System::Int64 _TabNumber_k__BackingField; // 0x108
		::System::Boolean _IsAutoClearForScenario_k__BackingField; // 0x110

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Void set_IsLegacy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_SET_ISLEGACY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TabNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_GET_TABNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_TabNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_SET_TABNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LoginCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_GET_LOGINCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAutoClearForScenario()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_GET_ISAUTOCLEARFORSCENARIO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GuideMissionExcel* arg, ::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GuideMissionExcel*, ::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_CanReceiveByMultipleReward()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GUIDEMISSIONINFO_GET_CANRECEIVEBYMULTIPLEREWARD_OFFSET))(nullptr);
		}

	};
}

