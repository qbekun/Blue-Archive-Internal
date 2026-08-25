#pragma once
#include "unitysdk.h"

class UIMinigameDefense_StageList;

#define <CO_INITSCROLLPOSITION>D__25_.CTOR_OFFSET UNITYSDK_OFFSET(0xA62B20)
#define <CO_INITSCROLLPOSITION>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA64090)
#define <CO_INITSCROLLPOSITION>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA640A0)
#define <CO_INITSCROLLPOSITION>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA64450)
#define <CO_INITSCROLLPOSITION>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA64460)
#define <CO_INITSCROLLPOSITION>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA644B0)

	inline static constexpr unsigned int <Co_InitScrollPosition>d__25_TypeDefinitionIndex = 530;

	class <Co_InitScrollPosition>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIMinigameDefense_StageList* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INITSCROLLPOSITION>D__25_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITSCROLLPOSITION>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITSCROLLPOSITION>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITSCROLLPOSITION>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITSCROLLPOSITION>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITSCROLLPOSITION>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

