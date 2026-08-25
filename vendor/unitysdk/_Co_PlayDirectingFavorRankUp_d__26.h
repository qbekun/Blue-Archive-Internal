#pragma once
#include "unitysdk.h"

class UIFavorGrowthDirecting;
class <>c__DisplayClass26_0;

#define <CO_PLAYDIRECTINGFAVORRANKUP>D__26_.CTOR_OFFSET UNITYSDK_OFFSET(0x22E1BD0)
#define <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22E2130)
#define <CO_PLAYDIRECTINGFAVORRANKUP>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22E2140)
#define <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22E24B0)
#define <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22E24C0)
#define <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22E2510)

	inline static constexpr unsigned int <Co_PlayDirectingFavorRankUp>d__26_TypeDefinitionIndex = 4859;

	class <Co_PlayDirectingFavorRankUp>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIFavorGrowthDirecting* __4__this; // 0x20
		<>c__DisplayClass26_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTINGFAVORRANKUP>D__26_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTINGFAVORRANKUP>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTINGFAVORRANKUP>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

