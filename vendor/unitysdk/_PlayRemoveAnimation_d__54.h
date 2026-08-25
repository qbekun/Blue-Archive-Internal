#pragma once
#include "unitysdk.h"

class BuffIconContent;

#define <PLAYREMOVEANIMATION>D__54_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D1BA0)
#define <PLAYREMOVEANIMATION>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x25D2D20)
#define <PLAYREMOVEANIMATION>D__54_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25D2D30)
#define <PLAYREMOVEANIMATION>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25D3010)
#define <PLAYREMOVEANIMATION>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x25D3020)
#define <PLAYREMOVEANIMATION>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25D3070)

	inline static constexpr unsigned int <PlayRemoveAnimation>d__54_TypeDefinitionIndex = 6355;

	class <PlayRemoveAnimation>d__54 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		BuffIconContent* __4__this; // 0x20
		::System::Action* onEnd; // 0x28
		::System::Boolean isRemainAfterRemove; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYREMOVEANIMATION>D__54_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYREMOVEANIMATION>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYREMOVEANIMATION>D__54_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYREMOVEANIMATION>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYREMOVEANIMATION>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYREMOVEANIMATION>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

