#pragma once
#include "unitysdk.h"

class UIPopup_MinigameDefense_StageInfo;
class ButtonActivator;
namespace UnityEngine { class WaitForSeconds; }

#define <COONMULTIPLIERBUTTON>D__52_.CTOR_OFFSET UNITYSDK_OFFSET(0xB8D380)
#define <COONMULTIPLIERBUTTON>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8E610)
#define <COONMULTIPLIERBUTTON>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB8E620)
#define <COONMULTIPLIERBUTTON>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB8E860)
#define <COONMULTIPLIERBUTTON>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB8E870)
#define <COONMULTIPLIERBUTTON>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB8E8C0)

	inline static constexpr unsigned int <CoOnMultiplierButton>d__52_TypeDefinitionIndex = 548;

	class <CoOnMultiplierButton>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isPlus; // 0x20
		UIPopup_MinigameDefense_StageInfo* __4__this; // 0x28
		ButtonActivator* _button_5__2; // 0x30
		::UnityEngine::WaitForSeconds* _waitForSec_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COONMULTIPLIERBUTTON>D__52_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONMULTIPLIERBUTTON>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONMULTIPLIERBUTTON>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONMULTIPLIERBUTTON>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONMULTIPLIERBUTTON>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONMULTIPLIERBUTTON>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

