#pragma once
#include "unitysdk.h"

class UIRewardConfirm;

#define <CHARANIMATIONPLAYSSR>D__32_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B09E0)
#define <CHARANIMATIONPLAYSSR>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27B10D0)
#define <CHARANIMATIONPLAYSSR>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27B10E0)
#define <CHARANIMATIONPLAYSSR>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27B11D0)
#define <CHARANIMATIONPLAYSSR>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27B11E0)
#define <CHARANIMATIONPLAYSSR>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27B1230)

	inline static constexpr unsigned int <CharAnimationPlaySSR>d__32_TypeDefinitionIndex = 7513;

	class <CharAnimationPlaySSR>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIRewardConfirm* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CHARANIMATIONPLAYSSR>D__32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHARANIMATIONPLAYSSR>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHARANIMATIONPLAYSSR>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHARANIMATIONPLAYSSR>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHARANIMATIONPLAYSSR>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHARANIMATIONPLAYSSR>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

