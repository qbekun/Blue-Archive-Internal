#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ScenarioModeExcel; }
class ExposedTimeFilteredScenarioModeDictionary;

#define <GET_VALUES>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0x212B0C0)
#define <GET_VALUES>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x212B3B0)
#define <GET_VALUES>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x212B410)
#define <GET_VALUES>D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x212B6A0)
#define <GET_VALUES>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.SCENARIOMODEEXCEL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x212B6F0)
#define <GET_VALUES>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x212B700)
#define <GET_VALUES>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x212B750)
#define <GET_VALUES>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.SCENARIOMODEEXCEL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x212B7A0)
#define <GET_VALUES>D__7_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x212B840)

	inline static constexpr unsigned int <get_Values>d__7_TypeDefinitionIndex = 3922;

	class <get_Values>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::Excel::ScenarioModeExcel* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		ExposedTimeFilteredScenarioModeDictionary* __4__this; // 0x30
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioModeExcel* System.Collections.Generic.IEnumerator_MX.Data.Excel.ScenarioModeExcel_.get_Current()
		{
			return ((::MX::Data::Excel::ScenarioModeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.SCENARIOMODEEXCEL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.Excel.ScenarioModeExcel_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.SCENARIOMODEEXCEL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_VALUES>D__7_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

