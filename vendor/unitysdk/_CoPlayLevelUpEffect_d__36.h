#pragma once
#include "unitysdk.h"

class UISkillBatchGrowth;
namespace UnityEngine { class Animation; }

#define <COPLAYLEVELUPEFFECT>D__36_.CTOR_OFFSET UNITYSDK_OFFSET(0x22E6570)
#define <COPLAYLEVELUPEFFECT>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22E7640)
#define <COPLAYLEVELUPEFFECT>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22E7650)
#define <COPLAYLEVELUPEFFECT>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22E81A0)
#define <COPLAYLEVELUPEFFECT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22E81B0)
#define <COPLAYLEVELUPEFFECT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22E8200)

	inline static constexpr unsigned int <CoPlayLevelUpEffect>d__36_TypeDefinitionIndex = 4868;

	class <CoPlayLevelUpEffect>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISkillBatchGrowth* __4__this; // 0x20
		::System::Boolean _hasExSkillLevelUp_5__2; // 0x28
		Il2CppObject* _requestDBs_5__3; // 0x30
		::UnityEngine::Animation* _anim1_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__36_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYLEVELUPEFFECT>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

