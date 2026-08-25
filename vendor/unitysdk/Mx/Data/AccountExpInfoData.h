#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class AccountLevelExcel&; }

#define MX_DATA_ACCOUNTEXPINFODATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18712B0)
#define MX_DATA_ACCOUNTEXPINFODATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18713F0)
#define MX_DATA_ACCOUNTEXPINFODATA_ISMAXLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1871800)
#define MX_DATA_ACCOUNTEXPINFODATA_GETEXPDIFF_OFFSET UNITYSDK_OFFSET(0x18719F0)
#define MX_DATA_ACCOUNTEXPINFODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1871AF0)
#define MX_DATA_ACCOUNTEXPINFODATA_GETNEEDREPORTEVENTLEVELS_OFFSET UNITYSDK_OFFSET(0x1871B70)
#define MX_DATA_ACCOUNTEXPINFODATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1871D90)
#define MX_DATA_ACCOUNTEXPINFODATA_HASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0x18718D0)
#define MX_DATA_ACCOUNTEXPINFODATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1871450)
#define MX_DATA_ACCOUNTEXPINFODATA_GETREQUIREDEXPTOLEVELUP_OFFSET UNITYSDK_OFFSET(0x1871DF0)
#define MX_DATA_ACCOUNTEXPINFODATA_HASLEVELEXPDATA_OFFSET UNITYSDK_OFFSET(0x18719A0)

namespace MX::Data
{
	inline static constexpr unsigned int AccountExpInfoData_TypeDefinitionIndex = 15949;

	class AccountExpInfoData : public Il2CppObject
	{
	public:
		Il2CppObject* accountLevelExpTable; // 0x28

		::System::Int64 GetMaxLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_GETMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean IsMaxLevelExp(::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_ISMAXLEVELEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetExpDiff(::System::Int32 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_GETEXPDIFF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNeedReportEventLevels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_GETNEEDREPORTEVENTLEVELS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::Int32 arg, ::MX::Data::Excel::AccountLevelExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::MX::Data::Excel::AccountLevelExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasNextLevel(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_HASNEXTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Int64 GetRequiredExpToLevelUp(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_GETREQUIREDEXPTOLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLevelExpData(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACCOUNTEXPINFODATA_HASLEVELEXPDATA_OFFSET))(arg, nullptr);
		}

	};
}

