#pragma once
#include "unitysdk.h"

class UISkillNormalGrowth;

#define <COPLAYLEVELUPEFFECT>D__58_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F0DE0)
#define <COPLAYLEVELUPEFFECT>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22F1150)
#define <COPLAYLEVELUPEFFECT>D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22F1160)
#define <COPLAYLEVELUPEFFECT>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22F13E0)
#define <COPLAYLEVELUPEFFECT>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22F13F0)
#define <COPLAYLEVELUPEFFECT>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22F1440)

	inline static constexpr unsigned int <CoPlayLevelUpEffect>d__58_TypeDefinitionIndex = 4888;

	class <CoPlayLevelUpEffect>d__58 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISkillNormalGrowth* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__58_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__58_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

