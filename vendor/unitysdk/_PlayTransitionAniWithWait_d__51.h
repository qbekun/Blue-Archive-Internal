#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover::Animation { class UCPlayerAnimations; }
namespace MXUnderCover { class UCSkillLogic; }
namespace MXUnderCover::Animation { class UCPlayerAniController; }

#define <PLAYTRANSITIONANIWITHWAIT>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA65B0)
#define <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA65D0)
#define <PLAYTRANSITIONANIWITHWAIT>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA65E0)
#define <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA6870)
#define <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDA6880)
#define <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA68D0)

	inline static constexpr unsigned int <PlayTransitionAniWithWait>d__51_TypeDefinitionIndex = 9859;

	class <PlayTransitionAniWithWait>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCEntity* entity; // 0x20
		::MXUnderCover::Animation::UCPlayerAnimations* state; // 0x28
		::MXUnderCover::UCSkillLogic* __4__this; // 0x30
		::System::Single waitFrame; // 0x38
		::System::Action* waitAfterAction; // 0x40
		::MXUnderCover::Animation::UCPlayerAniController* _aniController_5__2; // 0x48
		::System::Single _waitAfter_5__3; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYTRANSITIONANIWITHWAIT>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTRANSITIONANIWITHWAIT>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYTRANSITIONANIWITHWAIT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

