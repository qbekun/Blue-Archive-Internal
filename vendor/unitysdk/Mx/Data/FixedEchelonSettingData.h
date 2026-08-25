#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FixedEchelonSettingExcel; }

#define MX_DATA_FIXEDECHELONSETTINGDATA_TRYGETFIXEDECHELONCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x18DBDD0)
#define MX_DATA_FIXEDECHELONSETTINGDATA_GETFIXEDECHELONSETTINGTABLE_OFFSET UNITYSDK_OFFSET(0x18DBE30)
#define MX_DATA_FIXEDECHELONSETTINGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DBE40)
#define MX_DATA_FIXEDECHELONSETTINGDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x18DBF10)
#define MX_DATA_FIXEDECHELONSETTINGDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DBF70)
#define MX_DATA_FIXEDECHELONSETTINGDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18DBFD0)
#define MX_DATA_FIXEDECHELONSETTINGDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18DC730)

namespace MX::Data
{
	inline static constexpr unsigned int FixedEchelonSettingData_TypeDefinitionIndex = 16131;

	class FixedEchelonSettingData : public Il2CppObject
	{
	public:
		Il2CppObject* fixedEchelonSettingTable; // 0x28
		Il2CppObject* fixedEchelonCharacterIds; // 0x30

		::System::Boolean TryGetFixedEchelonCharacterIds(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONSETTINGDATA_TRYGETFIXEDECHELONCHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetFixedEchelonSettingTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONSETTINGDATA_GETFIXEDECHELONSETTINGTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONSETTINGDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FixedEchelonSettingExcel* GetData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::FixedEchelonSettingExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONSETTINGDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONSETTINGDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONSETTINGDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDECHELONSETTINGDATA_CONTAINS_OFFSET))(arg, nullptr);
		}

	};
}

