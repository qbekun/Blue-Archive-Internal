#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerNode; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_EXITEVENT_REGISTER_OFFSET UNITYSDK_OFFSET(0x4BC700)
#define ANIMANCER_EXITEVENT_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x4BC790)
#define ANIMANCER_EXITEVENT_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x4BC910)
#define ANIMANCER_EXITEVENT_ANIMANCER.IUPDATABLE.UPDATE_OFFSET UNITYSDK_OFFSET(0x4BCA40)
#define ANIMANCER_EXITEVENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x4BC8B0)
#define ANIMANCER_EXITEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BCB20)

namespace Animancer
{
	inline static constexpr unsigned int ExitEvent_TypeDefinitionIndex = 35202;

	class ExitEvent : public Il2CppObject
	{
	public:
		::System::Action* _Callback; // 0x18
		::Animancer::AnimancerNode* _Node; // 0x20

		::System::Void Register(::Animancer::AnimancerNode* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXITEVENT_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Unregister(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXITEVENT_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean Unregister(::Animancer::AnimancerNode* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXITEVENT_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.IUpdatable.Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXITEVENT_ANIMANCER.IUPDATABLE.UPDATE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXITEVENT_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXITEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

