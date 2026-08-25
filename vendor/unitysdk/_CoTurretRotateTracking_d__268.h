#pragma once
#include "unitysdk.h"

namespace MX::Logic::Actions { class TimelineSkillAction; }
class CharacterVisual;

#define <COTURRETROTATETRACKING>D__268_.CTOR_OFFSET UNITYSDK_OFFSET(0x120AB70)
#define <COTURRETROTATETRACKING>D__268_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x120AB90)
#define <COTURRETROTATETRACKING>D__268_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x120ABA0)
#define <COTURRETROTATETRACKING>D__268_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x120AC30)
#define <COTURRETROTATETRACKING>D__268_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x120AC40)
#define <COTURRETROTATETRACKING>D__268_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x120AC90)

	inline static constexpr unsigned int <CoTurretRotateTracking>d__268_TypeDefinitionIndex = 969;

	class <CoTurretRotateTracking>d__268 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Actions::TimelineSkillAction* timelineSkillAction; // 0x20
		CharacterVisual* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COTURRETROTATETRACKING>D__268_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTURRETROTATETRACKING>D__268_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTURRETROTATETRACKING>D__268_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTURRETROTATETRACKING>D__268_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTURRETROTATETRACKING>D__268_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTURRETROTATETRACKING>D__268_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

