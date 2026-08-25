#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterVictoryInteractionExcel; }
namespace MX::Data { class CharacterData; }

#define <GETALLVICTORYINTERACTIONEXCEL>D__115_.CTOR_OFFSET UNITYSDK_OFFSET(0x1890890)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x189BC30)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x189BD70)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x189C1A0)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x189C150)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.CHARACTERVICTORYINTERACTIONEXCEL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189C1F0)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x189C200)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189C250)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.CHARACTERVICTORYINTERACTIONEXCEL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189C2A0)
#define <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189C340)

	inline static constexpr unsigned int <GetAllVictoryInteractionExcel>d__115_TypeDefinitionIndex = 15999;

	class <GetAllVictoryInteractionExcel>d__115 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::Excel::CharacterVictoryInteractionExcel* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::MX::Data::CharacterData* __4__this; // 0x30
		Il2CppObject* _duplicateChecker_5__2; // 0x38
		Il2CppObject* __7__wrap2; // 0x40
		Il2CppObject* __7__wrap3; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterVictoryInteractionExcel* System.Collections.Generic.IEnumerator_MX.Data.Excel.CharacterVictoryInteractionExcel_.get_Current()
		{
			return (return (::MX::Data::Excel::CharacterVictoryInteractionExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.CHARACTERVICTORYINTERACTIONEXCEL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.Excel.CharacterVictoryInteractionExcel_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.CHARACTERVICTORYINTERACTIONEXCEL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLVICTORYINTERACTIONEXCEL>D__115_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

