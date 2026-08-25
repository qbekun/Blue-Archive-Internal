#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
class Sliding;
namespace MXUnderCover { class SkillUseParameter; }
class <>c__DisplayClass5_0;
namespace UnityEngine { class Vector3; }
namespace Animancer { class ClipTransition; }
namespace MXUnderCover { class UCEntityMovement; }

#define <CO_INTERNALINVOKE>D__5_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA4660)
#define <CO_INTERNALINVOKE>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA46E0)
#define <CO_INTERNALINVOKE>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA46F0)
#define <CO_INTERNALINVOKE>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA4E40)
#define <CO_INTERNALINVOKE>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDA4E50)
#define <CO_INTERNALINVOKE>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA4EA0)

	inline static constexpr unsigned int <co_InternalInvoke>d__5_TypeDefinitionIndex = 9848;

	class <co_InternalInvoke>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCEntity* entity; // 0x20
		Sliding* __4__this; // 0x28
		::MXUnderCover::SkillUseParameter* skillUseParameter; // 0x30
		<>c__DisplayClass5_0* __8__1; // 0x38
		::UnityEngine::Vector3* _ownerPos_5__2; // 0x48
		::UnityEngine::Vector3* _direction_5__3; // 0x54
		::UnityEngine::Vector3* _destPos_5__4; // 0x60
		::Animancer::ClipTransition* _clip_5__5; // 0x70
		::MXUnderCover::UCEntityMovement* _movement_5__6; // 0x78
		::System::Single _beginTime_5__7; // 0x80
		::System::Single _waitInputAvailableTime_5__8; // 0x84
		::System::Single _remainingTime_5__9; // 0x88

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__5_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

