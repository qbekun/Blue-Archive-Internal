#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace UnityEngine { class AnimationCurve&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_ANIMATIONCURVEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90587D0)
#define MEMORYPACK_ANIMATIONCURVEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x906D270)
#define MEMORYPACK_ANIMATIONCURVEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x906D4C0)

namespace MemoryPack
{
	inline static constexpr unsigned int AnimationCurveFormatter_TypeDefinitionIndex = 35441;

	class AnimationCurveFormatter : public ::System::Reflection::PInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ANIMATIONCURVEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::UnityEngine::AnimationCurve&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::UnityEngine::AnimationCurve&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ANIMATIONCURVEFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::UnityEngine::AnimationCurve&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::UnityEngine::AnimationCurve&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ANIMATIONCURVEFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

