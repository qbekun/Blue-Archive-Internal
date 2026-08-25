#pragma once
#include "unitysdk.h"

class UIRewardConfirm;
class <>c__DisplayClass35_0;

#define <SYMBOLTSSDIRECTING>D__35_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AE800)
#define <SYMBOLTSSDIRECTING>D__35_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27B1980)
#define <SYMBOLTSSDIRECTING>D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27B1990)
#define <SYMBOLTSSDIRECTING>D__35_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27B1DB0)
#define <SYMBOLTSSDIRECTING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27B1DC0)
#define <SYMBOLTSSDIRECTING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27B1E10)

	inline static constexpr unsigned int <SymbolTssDirecting>d__35_TypeDefinitionIndex = 7517;

	class <SymbolTssDirecting>d__35 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIRewardConfirm* __4__this; // 0x20
		::System::Int64 characterId; // 0x28
		<>c__DisplayClass35_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SYMBOLTSSDIRECTING>D__35_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SYMBOLTSSDIRECTING>D__35_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SYMBOLTSSDIRECTING>D__35_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SYMBOLTSSDIRECTING>D__35_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SYMBOLTSSDIRECTING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SYMBOLTSSDIRECTING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

