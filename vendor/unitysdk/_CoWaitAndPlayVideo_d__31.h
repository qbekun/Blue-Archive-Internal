#pragma once
#include "unitysdk.h"

class UIVideoPlay;

#define <COWAITANDPLAYVIDEO>D__31_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBFAB0)
#define <COWAITANDPLAYVIDEO>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBFAD0)
#define <COWAITANDPLAYVIDEO>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBBFAE0)
#define <COWAITANDPLAYVIDEO>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBFC20)
#define <COWAITANDPLAYVIDEO>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBBFC30)
#define <COWAITANDPLAYVIDEO>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBFC80)

	inline static constexpr unsigned int <CoWaitAndPlayVideo>d__31_TypeDefinitionIndex = 8615;

	class <CoWaitAndPlayVideo>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIVideoPlay* __4__this; // 0x20
		::System::Int32 _i_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDPLAYVIDEO>D__31_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDPLAYVIDEO>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDPLAYVIDEO>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDPLAYVIDEO>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDPLAYVIDEO>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITANDPLAYVIDEO>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

