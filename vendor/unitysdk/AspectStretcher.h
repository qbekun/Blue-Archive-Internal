#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define ASPECTSTRETCHER_GET_ASPECT_OFFSET UNITYSDK_OFFSET(0x2861830)
#define ASPECTSTRETCHER_UNSTRETCH_OFFSET UNITYSDK_OFFSET(0x28617C0)
#define ASPECTSTRETCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2860020)
#define ASPECTSTRETCHER_STRETCH_OFFSET UNITYSDK_OFFSET(0x28608D0)

	inline static constexpr unsigned int AspectStretcher_TypeDefinitionIndex = 34320;

	class AspectStretcher : public Il2CppObject
	{
	public:
		::System::Single _Aspect_k__BackingField; // 0x10
		::System::Single m_InverseAspect; // 0x14
		::System::Single m_CenterX; // 0x18

		::System::Single get_Aspect()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ASPECTSTRETCHER_GET_ASPECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* Unstretch(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ASPECTSTRETCHER_UNSTRETCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ASPECTSTRETCHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Stretch(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ASPECTSTRETCHER_STRETCH_OFFSET))(arg, nullptr);
		}

	};

