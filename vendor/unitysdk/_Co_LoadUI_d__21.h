#pragma once
#include "unitysdk.h"

class UIGuideMission;

#define <CO_LOADUI>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C6290)
#define <CO_LOADUI>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x25C6930)
#define <CO_LOADUI>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25C6940)
#define <CO_LOADUI>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25C6B90)
#define <CO_LOADUI>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x25C6BA0)
#define <CO_LOADUI>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25C6BF0)

	inline static constexpr unsigned int <Co_LoadUI>d__21_TypeDefinitionIndex = 6306;

	class <Co_LoadUI>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIGuideMission* __4__this; // 0x20
		::System::Collections::IEnumerator* _loadSeasonWidgets_5__2; // 0x28
		::System::Collections::IEnumerator* _loadSpineCharacter_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADUI>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADUI>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADUI>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADUI>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADUI>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADUI>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

