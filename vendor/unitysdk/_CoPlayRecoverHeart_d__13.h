#pragma once
#include "unitysdk.h"

class UITBGHeart;

#define <COPLAYRECOVERHEART>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0xB54410)
#define <COPLAYRECOVERHEART>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB54F30)
#define <COPLAYRECOVERHEART>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB54F40)
#define <COPLAYRECOVERHEART>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB55100)
#define <COPLAYRECOVERHEART>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB55110)
#define <COPLAYRECOVERHEART>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB55160)

	inline static constexpr unsigned int <CoPlayRecoverHeart>d__13_TypeDefinitionIndex = 8383;

	class <CoPlayRecoverHeart>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITBGHeart* __4__this; // 0x20
		::System::Action* onFinished; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRECOVERHEART>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRECOVERHEART>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRECOVERHEART>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRECOVERHEART>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRECOVERHEART>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYRECOVERHEART>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

