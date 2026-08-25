#pragma once
#include "unitysdk.h"

class UIEchelonInfo;
class <>c__DisplayClass88_0;
class EchelonObject;

#define <SETPOSITIONSWITHMODE>D__88_.CTOR_OFFSET UNITYSDK_OFFSET(0x24EB580)
#define <SETPOSITIONSWITHMODE>D__88_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24F5410)
#define <SETPOSITIONSWITHMODE>D__88_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24F5420)
#define <SETPOSITIONSWITHMODE>D__88_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24F6190)
#define <SETPOSITIONSWITHMODE>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24F61A0)
#define <SETPOSITIONSWITHMODE>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24F61F0)

	inline static constexpr unsigned int <SetPositionsWithMode>d__88_TypeDefinitionIndex = 6032;

	class <SetPositionsWithMode>d__88 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEchelonInfo* __4__this; // 0x20
		::System::Boolean setForStrikerMode; // 0x28
		<>c__DisplayClass88_0* __8__1; // 0x30
		EchelonObject* _echelon_5__2; // 0x38
		Il2CppObject* _fixedEchelonMainCharacterObjectList_5__3; // 0x40
		Il2CppObject* _fixedEchelonSupportCharacterObjectList_5__4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SETPOSITIONSWITHMODE>D__88_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPOSITIONSWITHMODE>D__88_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPOSITIONSWITHMODE>D__88_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPOSITIONSWITHMODE>D__88_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPOSITIONSWITHMODE>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPOSITIONSWITHMODE>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

