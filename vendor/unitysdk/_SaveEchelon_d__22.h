#pragma once
#include "unitysdk.h"

class UIFormationPresetScrollViewElement;
class UIFormation;
namespace MX::GameLogic::DBModel { class EchelonDB; }
class EchelonSaveNetworkTask;
class EchelonObject;
class SaveEchelonDBHelper;

#define <SAVEECHELON>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x2564CC0)
#define <SAVEECHELON>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2567760)
#define <SAVEECHELON>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2567820)
#define <SAVEECHELON>D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x2568FA0)
#define <SAVEECHELON>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2569050)
#define <SAVEECHELON>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2569060)
#define <SAVEECHELON>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25690B0)

	inline static constexpr unsigned int <SaveEchelon>d__22_TypeDefinitionIndex = 6129;

	class <SaveEchelon>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIFormationPresetScrollViewElement* __4__this; // 0x20
		UIFormation* _uiFormation_5__2; // 0x28
		::System::Int32 _beforeSupportCount_5__3; // 0x30
		::MX::GameLogic::DBModel::EchelonDB* _echelonDB_5__4; // 0x38
		EchelonSaveNetworkTask* _task_5__5; // 0x40
		Il2CppObject* __7__wrap5; // 0x48
		EchelonObject* _otherEchelon_5__7; // 0x50
		SaveEchelonDBHelper* _otherEchelonDBWrapper_5__8; // 0x58
		EchelonSaveNetworkTask* _saveTask_5__9; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__22___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

