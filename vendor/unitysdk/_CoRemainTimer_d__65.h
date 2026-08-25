#pragma once
#include "unitysdk.h"

class UIWorldRaidZoneBalloon;
namespace UnityEngine { class WaitForSeconds; }

#define <COREMAINTIMER>D__65_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0D900)
#define <COREMAINTIMER>D__65_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0DA90)
#define <COREMAINTIMER>D__65_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC0DAA0)
#define <COREMAINTIMER>D__65_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0E120)
#define <COREMAINTIMER>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC0E130)
#define <COREMAINTIMER>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0E180)

	inline static constexpr unsigned int <CoRemainTimer>d__65_TypeDefinitionIndex = 8813;

	class <CoRemainTimer>d__65 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIWorldRaidZoneBalloon* __4__this; // 0x20
		::UnityEngine::WaitForSeconds* _waitForSecond_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COREMAINTIMER>D__65_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREMAINTIMER>D__65_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREMAINTIMER>D__65_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREMAINTIMER>D__65_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREMAINTIMER>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREMAINTIMER>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

