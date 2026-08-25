#pragma once
#include "../unitysdk.h"

namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_CURVETIMELINE1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9591F60)
#define SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x9592020)
#define SPINE_CURVETIMELINE1_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9592030)
#define SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x9592080)
#define SPINE_CURVETIMELINE1_GETRELATIVEVALUE_OFFSET UNITYSDK_OFFSET(0x95921C0)
#define SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_OFFSET UNITYSDK_OFFSET(0x9592280)
#define SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_OFFSET UNITYSDK_OFFSET(0x9592340)
#define SPINE_CURVETIMELINE1_GETSCALEVALUE_OFFSET UNITYSDK_OFFSET(0x95923D0)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline1_TypeDefinitionIndex = 34956;

	class CurveTimeline1 : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 VALUE; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_SETFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetCurveValue(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETCURVEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single GetRelativeValue(::System::Single arg, ::System::Single arg, ::Spine::MixBlend* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::Spine::MixBlend*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETRELATIVEVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single GetAbsoluteValue(::System::Single arg, ::System::Single arg, ::Spine::MixBlend* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::Spine::MixBlend*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single GetAbsoluteValue(::System::Single arg, ::System::Single arg, ::Spine::MixBlend* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::Spine::MixBlend*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETABSOLUTEVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single GetScaleValue(::System::Single arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE1_GETSCALEVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

