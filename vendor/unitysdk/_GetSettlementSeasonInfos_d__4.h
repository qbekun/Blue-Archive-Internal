#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel; }
namespace MX::Data { class MultiFloorRaidData; }

#define <GETSETTLEMENTSEASONINFOS>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x19198A0)
#define <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x191A110)
#define <GETSETTLEMENTSEASONINFOS>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x191A1D0)
#define <GETSETTLEMENTSEASONINFOS>D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x191A5F0)
#define <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x191A6A0)
#define <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x191A6B0)
#define <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x191A700)
#define <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x191A750)
#define <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x191A7F0)

	inline static constexpr unsigned int <GetSettlementSeasonInfos>d__4_TypeDefinitionIndex = 16271;

	class <GetSettlementSeasonInfos>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::MX::Data::MultiFloorRaidData* __4__this; // 0x30
		::System::DateTime* serverTime; // 0x38
		::System::DateTime* __3__serverTime; // 0x40
		Il2CppObject* __7__wrap1; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* System.Collections.Generic.IEnumerator_MX.Data.Excel.MultiFloorRaidSeasonManageExcel_.get_Current()
		{
			return (return (::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.Excel.MultiFloorRaidSeasonManageExcel_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.MULTIFLOORRAIDSEASONMANAGEEXCEL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSETTLEMENTSEASONINFOS>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

