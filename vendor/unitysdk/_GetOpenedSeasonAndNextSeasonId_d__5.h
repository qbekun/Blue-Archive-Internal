#pragma once
#include "unitysdk.h"

namespace MX::Data { class MultiFloorRaidData; }

#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_.CTOR_OFFSET UNITYSDK_OFFSET(0x1918E40)
#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x191A800)
#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x191A810)
#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_SYSTEM.INT64?)_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x191ACF0)
#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x191AD10)
#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x191AD60)
#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_SYSTEM.INT64?)_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x191ADB0)
#define <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x191AE50)

	inline static constexpr unsigned int <GetOpenedSeasonAndNextSeasonId>d__5_TypeDefinitionIndex = 16272;

	class <GetOpenedSeasonAndNextSeasonId>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x38
		::MX::Data::MultiFloorRaidData* __4__this; // 0x40
		::System::DateTime* serverTime; // 0x48
		::System::DateTime* __3__serverTime; // 0x50
		Il2CppObject* _allSeasonExcels_5__2; // 0x58
		::System::Int32 _i_5__3; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_(MX.Data.Excel.MultiFloorRaidSeasonManageExcel_System.Int64?)_.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_SYSTEM.INT64?)_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_(MX.Data.Excel.MultiFloorRaidSeasonManageExcel_System.Int64?)_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_SYSTEM.INT64?)_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENEDSEASONANDNEXTSEASONID>D__5_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

