#pragma once
#include "unitysdk.h"

class UIRewardConfirm;

#define <RESULTANIMATIONPLAY>D__33_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AF140)
#define <RESULTANIMATIONPLAY>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27B1240)
#define <RESULTANIMATIONPLAY>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27B1250)
#define <RESULTANIMATIONPLAY>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27B13D0)
#define <RESULTANIMATIONPLAY>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27B13E0)
#define <RESULTANIMATIONPLAY>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27B1430)

	inline static constexpr unsigned int <ResultAnimationPlay>d__33_TypeDefinitionIndex = 7514;

	class <ResultAnimationPlay>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIRewardConfirm* __4__this; // 0x20
		::System::Int32 index; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <RESULTANIMATIONPLAY>D__33_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESULTANIMATIONPLAY>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESULTANIMATIONPLAY>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESULTANIMATIONPLAY>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESULTANIMATIONPLAY>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RESULTANIMATIONPLAY>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

