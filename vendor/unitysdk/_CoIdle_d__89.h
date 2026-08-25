#pragma once
#include "unitysdk.h"

class CafeCharacter;

#define <COIDLE>D__89_.CTOR_OFFSET UNITYSDK_OFFSET(0x19AEE30)
#define <COIDLE>D__89_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B15B0)
#define <COIDLE>D__89_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19B15C0)
#define <COIDLE>D__89_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19B1760)
#define <COIDLE>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x19B1770)
#define <COIDLE>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19B17C0)

	inline static constexpr unsigned int <CoIdle>d__89_TypeDefinitionIndex = 1332;

	class <CoIdle>d__89 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CafeCharacter* __4__this; // 0x20
		::System::Boolean infinite; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COIDLE>D__89_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COIDLE>D__89_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COIDLE>D__89_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COIDLE>D__89_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COIDLE>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COIDLE>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

