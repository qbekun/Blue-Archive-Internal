#pragma once
#include "unitysdk.h"

class UIPopup_Conquest_Operation_CharEdit;
class ConquestDeployEchelonNetworkTask;

#define <SAVEECHELON>D__104_.CTOR_OFFSET UNITYSDK_OFFSET(0x23848F0)
#define <SAVEECHELON>D__104_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2384910)
#define <SAVEECHELON>D__104_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2384920)
#define <SAVEECHELON>D__104_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2384D90)
#define <SAVEECHELON>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2384DA0)
#define <SAVEECHELON>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2384DF0)

	inline static constexpr unsigned int <SaveEchelon>d__104_TypeDefinitionIndex = 5121;

	class <SaveEchelon>d__104 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_Conquest_Operation_CharEdit* __4__this; // 0x20
		ConquestDeployEchelonNetworkTask* _task_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__104_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__104_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__104_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__104_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEECHELON>D__104_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

