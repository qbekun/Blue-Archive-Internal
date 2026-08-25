#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionLogicEffect; }

#define <WAITFORCOOLTIME>D__10_.CTOR_OFFSET UNITYSDK_OFFSET(0x1360380)
#define <WAITFORCOOLTIME>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1362F10)
#define <WAITFORCOOLTIME>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1362F20)
#define <WAITFORCOOLTIME>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1362FF0)
#define <WAITFORCOOLTIME>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1363000)
#define <WAITFORCOOLTIME>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1363050)

	inline static constexpr unsigned int <WaitForCooltime>d__10_TypeDefinitionIndex = 14340;

	class <WaitForCooltime>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Battles::GroundConditionLogicEffect* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOOLTIME>D__10_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOOLTIME>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOOLTIME>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOOLTIME>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOOLTIME>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORCOOLTIME>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

