#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_DRAWORDERTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x95987E0)
#define SPINE_DRAWORDERTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95989D0)
#define SPINE_DRAWORDERTIMELINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9598A60)
#define SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET UNITYSDK_OFFSET(0x9598B40)
#define SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9598B50)

namespace Spine
{
	inline static constexpr unsigned int DrawOrderTimeline_TypeDefinitionIndex = 34977;

	class DrawOrderTimeline : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* propertyIds; // 0x0
		::Il2CppArray<::System::Object*>* drawOrders; // 0x20

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DrawOrders()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET))(nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

