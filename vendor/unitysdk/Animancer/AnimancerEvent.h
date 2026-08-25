#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerEvent; }
namespace Animancer { class AnimancerEvent&; }

#define ANIMANCER_ANIMANCEREVENT_DUMMY_OFFSET UNITYSDK_OFFSET(0x4937E0)
#define ANIMANCER_ANIMANCEREVENT_ISNULLORDUMMY_OFFSET UNITYSDK_OFFSET(0x4937F0)
#define ANIMANCER_ANIMANCEREVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x493860)
#define ANIMANCER_ANIMANCEREVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x493880)
#define ANIMANCER_ANIMANCEREVENT_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x4939A0)
#define ANIMANCER_ANIMANCEREVENT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x493C60)
#define ANIMANCER_ANIMANCEREVENT_GET_CURRENTEVENT_OFFSET UNITYSDK_OFFSET(0x493CB0)
#define ANIMANCER_ANIMANCEREVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x493D00)
#define ANIMANCER_ANIMANCEREVENT_GETFADEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x493F70)
#define ANIMANCER_ANIMANCEREVENT_GETFADEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x494320)
#define ANIMANCER_ANIMANCEREVENT_GETFADEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x4940E0)
#define ANIMANCER_ANIMANCEREVENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x494460)
#define ANIMANCER_ANIMANCEREVENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x4945D0)
#define ANIMANCER_ANIMANCEREVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x4944C0)
#define ANIMANCER_ANIMANCEREVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x494630)
#define ANIMANCER_ANIMANCEREVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4946C0)
#define ANIMANCER_ANIMANCEREVENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x494700)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerEvent_TypeDefinitionIndex = 35111;

	class AnimancerEvent : public Il2CppObject
	{
	public:
		::System::Single normalizedTime; // 0x10
		::System::Action* callback; // 0x18
		::System::Single AlmostOne; // 0x0
		::System::Action* DummyCallback; // 0x0
		::Animancer::AnimancerState* _CurrentState; // 0x8
		::Animancer::AnimancerEvent* _CurrentEvent; // 0x10

		::System::Void Dummy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_DUMMY_OFFSET))(nullptr);
		}

		::System::Boolean IsNullOrDummy(::System::Action* arg)
		{
			return (return (::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_ISNULLORDUMMY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_APPENDDETAILS_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* get_CurrentState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerEvent&* get_CurrentEvent()
		{
			return (return (::Animancer::AnimancerEvent&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_GET_CURRENTEVENT_OFFSET))(nullptr);
		}

		::System::Void Invoke(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single GetFadeOutDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_GETFADEOUTDURATION_OFFSET))(nullptr);
		}

		::System::Single GetFadeOutDuration(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_GETFADEOUTDURATION_OFFSET))(arg, nullptr);
		}

		::System::Single GetFadeOutDuration(::Animancer::AnimancerState* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::Animancer::AnimancerState*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_GETFADEOUTDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::Animancer::AnimancerEvent* arg, ::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerEvent*, ::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::Animancer::AnimancerEvent* arg, ::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerEvent*, ::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::Animancer::AnimancerEvent* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCEREVENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

