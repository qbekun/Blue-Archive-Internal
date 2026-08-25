#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class TimeAttackDungeonGeasExcel; }

#define MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1860690)
#define MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1860540)
#define MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18606A0)
#define MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_GET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x18606B0)
#define MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_SET_LOCALIZEETCKEY_OFFSET UNITYSDK_OFFSET(0x18606C0)

namespace MX::Data
{
	inline static constexpr unsigned int TimeAttackDungeonGeasUIInfo_TypeDefinitionIndex = 15902;

	class TimeAttackDungeonGeasUIInfo : public Il2CppObject
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _LocalizeEtcKey_k__BackingField; // 0x18

		::System::Void set_IconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_SET_ICONPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::TimeAttackDungeonGeasExcel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::Data::Excel::TimeAttackDungeonGeasExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_GET_ICONPATH_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_GET_LOCALIZEETCKEY_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONGEASUIINFO_SET_LOCALIZEETCKEY_OFFSET))(arg, nullptr);
		}

	};
}

