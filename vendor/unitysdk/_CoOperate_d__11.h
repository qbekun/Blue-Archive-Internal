#pragma once
#include "unitysdk.h"

class GeneralOperator;
class <>c__DisplayClass11_1;
namespace MX::Data::Excel { class OperatorExcel; }
namespace FlatData { class CharacterVoiceOverridePriority; }

#define <COOPERATE>D__11_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C8010)
#define <COOPERATE>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26C88E0)
#define <COOPERATE>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26C88F0)
#define <COOPERATE>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26C9010)
#define <COOPERATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26C9020)
#define <COOPERATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26C9070)

	inline static constexpr unsigned int <CoOperate>d__11_TypeDefinitionIndex = 6995;

	class <CoOperate>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* excels; // 0x20
		GeneralOperator* __4__this; // 0x28
		<>c__DisplayClass11_1* __8__1; // 0x30
		::MX::Data::Excel::OperatorExcel* _selected_5__2; // 0x38
		::FlatData::CharacterVoiceOverridePriority* _priority_5__3; // 0x48
		::System::Single _duration_5__4; // 0x4C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPERATE>D__11_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPERATE>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPERATE>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPERATE>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPERATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPERATE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

