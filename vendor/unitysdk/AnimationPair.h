#pragma once
#include "unitysdk.h"

namespace Spine { class Animation; }

#define ANIMATIONPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A2BF0)
#define ANIMATIONPAIR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95A2D80)

	inline static constexpr unsigned int AnimationPair_TypeDefinitionIndex = 35003;

	class AnimationPair : public Il2CppObject
	{
	public:
		::Spine::Animation* a1; // 0x10
		::Spine::Animation* a2; // 0x18

		::System::Void .ctor(::Spine::Animation* arg, ::Spine::Animation* arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPAIR_TOSTRING_OFFSET))(nullptr);
		}

	};

