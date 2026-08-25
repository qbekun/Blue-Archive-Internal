#pragma once
#include "unitysdk.h"

class <>c__DisplayClass50_0;

#define <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_.CTOR_OFFSET UNITYSDK_OFFSET(0x201FF60)
#define <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x201FF80)
#define <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x201FF90)
#define <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2020330)
#define <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2020340)
#define <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2020390)

	inline static constexpr unsigned int <co_SyncTutorialCompletionIds>d__50_TypeDefinitionIndex = 3171;

	class <co_SyncTutorialCompletionIds>d__50 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass50_0* __8__1; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SYNCTUTORIALCOMPLETIONIDS>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

