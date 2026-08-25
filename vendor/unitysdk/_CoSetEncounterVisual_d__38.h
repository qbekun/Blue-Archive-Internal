#pragma once
#include "unitysdk.h"

class UITBGBattleTop;
class <>c__DisplayClass38_0;

#define <COSETENCOUNTERVISUAL>D__38_.CTOR_OFFSET UNITYSDK_OFFSET(0xB410A0)
#define <COSETENCOUNTERVISUAL>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB42B00)
#define <COSETENCOUNTERVISUAL>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB42B10)
#define <COSETENCOUNTERVISUAL>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB42E60)
#define <COSETENCOUNTERVISUAL>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB42E70)
#define <COSETENCOUNTERVISUAL>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB42EC0)

	inline static constexpr unsigned int <CoSetEncounterVisual>d__38_TypeDefinitionIndex = 8340;

	class <CoSetEncounterVisual>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITBGBattleTop* __4__this; // 0x20
		::System::String* encounterPrefabName; // 0x28
		<>c__DisplayClass38_0* __8__1; // 0x30
		::System::Action* onFinished; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSETENCOUNTERVISUAL>D__38_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENCOUNTERVISUAL>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENCOUNTERVISUAL>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENCOUNTERVISUAL>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENCOUNTERVISUAL>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENCOUNTERVISUAL>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

