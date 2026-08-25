#pragma once
#include "unitysdk.h"

class HexaTileVisual;

#define <PLAYTELEPORTOUTEFFECT>D__35_.CTOR_OFFSET UNITYSDK_OFFSET(0xF81450)
#define <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF82600)
#define <PLAYTELEPORTOUTEFFECT>D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF82610)
#define <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF827D0)
#define <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF827E0)
#define <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF82830)

	inline static constexpr unsigned int <PlayTeleportOutEffect>d__35_TypeDefinitionIndex = 854;

	class <PlayTeleportOutEffect>d__35 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaTileVisual* __4__this; // 0x20
		::System::Action* end; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYTELEPORTOUTEFFECT>D__35_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTELEPORTOUTEFFECT>D__35_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTELEPORTOUTEFFECT>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

