#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class DelayedInstantlySkilldata; }
namespace MX::MinigameShooting { class Character; }
namespace UnityEngine { class Vector3; }

#define <DELAYEDINSTANTLYSKILL>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x1476020)
#define <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1476040)
#define <DELAYEDINSTANTLYSKILL>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1476050)
#define <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1476AD0)
#define <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1476AE0)
#define <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1476B30)

	inline static constexpr unsigned int <DelayedInstantlySkill>d__9_TypeDefinitionIndex = 15147;

	class <DelayedInstantlySkill>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameShooting::DelayedInstantlySkilldata* delayedInstantlySkilldata; // 0x20
		::MX::MinigameShooting::Character* attacker; // 0x28
		::UnityEngine::Vector3* forward; // 0x30
		::UnityEngine::Vector3* _targetPos_5__2; // 0x3C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDINSTANTLYSKILL>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDINSTANTLYSKILL>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDINSTANTLYSKILL>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

