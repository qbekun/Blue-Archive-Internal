#pragma once
#include "unitysdk.h"

class UIPopup_RaidNewRecord;

#define <COPOINTANI>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x27988D0)
#define <COPOINTANI>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2798A20)
#define <COPOINTANI>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2798A30)
#define <COPOINTANI>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2798FA0)
#define <COPOINTANI>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2798FB0)
#define <COPOINTANI>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2799000)

	inline static constexpr unsigned int <CoPointAni>d__16_TypeDefinitionIndex = 7452;

	class <CoPointAni>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_RaidNewRecord* __4__this; // 0x20
		::System::Single duration; // 0x28
		::System::Int64 _start_5__2; // 0x30
		::System::Int64 _end_5__3; // 0x38
		::System::Single _f_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPOINTANI>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPOINTANI>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPOINTANI>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPOINTANI>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPOINTANI>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPOINTANI>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

