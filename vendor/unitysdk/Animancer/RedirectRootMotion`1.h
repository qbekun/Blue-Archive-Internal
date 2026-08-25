#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Animator&; }

#define ANIMANCER_REDIRECTROOTMOTION`1_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_REDIRECTROOTMOTION`1_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_REDIRECTROOTMOTION`1_GET_APPLYROOTMOTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_REDIRECTROOTMOTION`1_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_REDIRECTROOTMOTION`1_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_REDIRECTROOTMOTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int RedirectRootMotion`1_TypeDefinitionIndex = 35204;

	class RedirectRootMotion`1 : public Il2CppObject
	{
	public:
		::UnityEngine::Animator* _Animator; // 0x0
		Il2CppObject* _Target; // 0x0

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTION`1_ONVALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject&* get_Target()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTION`1_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyRootMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTION`1_GET_APPLYROOTMOTION_OFFSET))(nullptr);
		}

		::UnityEngine::Animator&* get_Animator()
		{
			return (return (::UnityEngine::Animator&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTION`1_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void OnAnimatorMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTION`1_ONANIMATORMOVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTION`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

