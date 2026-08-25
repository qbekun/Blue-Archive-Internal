#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }
class MultiFloorRaidSectionEntity;

#define <GETALLSTAGEEXCELSINSECTION>D__31_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A0300)
#define <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26A0480)
#define <GETALLSTAGEEXCELSINSECTION>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26A0540)
#define <GETALLSTAGEEXCELSINSECTION>D__31___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x26A09D0)
#define <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.MULTIFLOORRAIDSTAGEEXCEL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26A0A80)
#define <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26A0A90)
#define <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26A0AE0)
#define <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.MULTIFLOORRAIDSTAGEEXCEL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x26A0B30)
#define <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x26A0BD0)

	inline static constexpr unsigned int <GetAllStageExcelsInSection>d__31_TypeDefinitionIndex = 6837;

	class <GetAllStageExcelsInSection>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::Excel::MultiFloorRaidStageExcel* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		MultiFloorRaidSectionEntity* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* _stageExcels_5__2; // 0x38
		Il2CppObject* __7__wrap2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStageExcel* System.Collections.Generic.IEnumerator_MX.Data.Excel.MultiFloorRaidStageExcel_.get_Current()
		{
			return ((::MX::Data::Excel::MultiFloorRaidStageExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.MULTIFLOORRAIDSTAGEEXCEL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.Excel.MultiFloorRaidStageExcel_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.MULTIFLOORRAIDSTAGEEXCEL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLSTAGEEXCELSINSECTION>D__31_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

