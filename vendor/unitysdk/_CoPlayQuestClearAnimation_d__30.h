#pragma once
#include "unitysdk.h"

namespace MXField::UI { class UIFieldHUD_Quest; }

#define <COPLAYQUESTCLEARANIMATION>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0xE95710)
#define <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE973C0)
#define <COPLAYQUESTCLEARANIMATION>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE97420)
#define <COPLAYQUESTCLEARANIMATION>D__30___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE977A0)
#define <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE977F0)
#define <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE97800)
#define <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE97850)

	inline static constexpr unsigned int <CoPlayQuestClearAnimation>d__30_TypeDefinitionIndex = 10700;

	class <CoPlayQuestClearAnimation>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::UI::UIFieldHUD_Quest* __4__this; // 0x20
		Il2CppObject* __7__wrap1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYQUESTCLEARANIMATION>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYQUESTCLEARANIMATION>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYQUESTCLEARANIMATION>D__30___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYQUESTCLEARANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

