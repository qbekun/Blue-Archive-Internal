#pragma once
#include "unitysdk.h"

class UIPopup_Formation_CharEdit;
class SaveEchelonDBHelper;
namespace MX::GameLogic::DBModel { class EchelonDB; }
class EchelonSaveNetworkTask;
class EchelonObject;

#define <SAVEECHELON>D__83_.CTOR_OFFSET UNITYSDK_OFFSET(0x255D440)
#define <SAVEECHELON>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x255D460)
#define <SAVEECHELON>D__83_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x255D520)
#define <SAVEECHELON>D__83___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x255E590)
#define <SAVEECHELON>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x255E640)
#define <SAVEECHELON>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x255E650)
#define <SAVEECHELON>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x255E6A0)

	inline static constexpr unsigned int <SaveEchelon>d__83_TypeDefinitionIndex = 6106;

	class <SaveEchelon>d__83 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_Formation_CharEdit* __4__this; // 0x20
		SaveEchelonDBHelper* _saveEchelonDBHelper_5__2; // 0x28
		::MX::GameLogic::DBModel::EchelonDB* _newDB_5__3; // 0x30
		EchelonSaveNetworkTask* _task_5__4; // 0x38
		Il2CppObject* __7__wrap4; // 0x40
		EchelonObject* _otherEchelon_5__6; // 0x48
		SaveEchelonDBHelper* _otherEchelonDBWrapper_5__7; // 0x50
		EchelonSaveNetworkTask* _saveTask_5__8; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__83_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__83_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__83___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

