#pragma once
#include "unitysdk.h"

class UISweepResultScrollController;
class UISweepResultSlot;

#define <COAPPEAR>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0xB2CF50)
#define <COAPPEAR>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E380)
#define <COAPPEAR>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB2E390)
#define <COAPPEAR>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2E620)
#define <COAPPEAR>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB2E630)
#define <COAPPEAR>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB2E680)

	inline static constexpr unsigned int <CoAppear>d__22_TypeDefinitionIndex = 8273;

	class <CoAppear>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISweepResultScrollController* __4__this; // 0x20
		::System::Single startPosition; // 0x28
		::System::Int32 index; // 0x2C
		::System::Boolean wait; // 0x30
		UISweepResultSlot* slot; // 0x38
		::System::Single _elapsedTime_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COAPPEAR>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPEAR>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPEAR>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPEAR>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPEAR>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPEAR>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

