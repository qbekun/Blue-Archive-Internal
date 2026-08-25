#pragma once
#include "unitysdk.h"

class CharacterEchelon;
namespace UnityEngine { class WaitForSecondsRealtime; }

#define <CO_RELEASEPICKUP>D__61_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D38D0)
#define <CO_RELEASEPICKUP>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24D50A0)
#define <CO_RELEASEPICKUP>D__61_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24D50B0)
#define <CO_RELEASEPICKUP>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24D5290)
#define <CO_RELEASEPICKUP>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24D52A0)
#define <CO_RELEASEPICKUP>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24D52F0)

	inline static constexpr unsigned int <Co_ReleasePickup>d__61_TypeDefinitionIndex = 5955;

	class <Co_ReleasePickup>d__61 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterEchelon* __4__this; // 0x20
		::UnityEngine::WaitForSecondsRealtime* _wait_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_RELEASEPICKUP>D__61_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELEASEPICKUP>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELEASEPICKUP>D__61_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELEASEPICKUP>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELEASEPICKUP>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RELEASEPICKUP>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

