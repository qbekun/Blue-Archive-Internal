#pragma once
#include "../unitysdk.h"

#define SPINE_CURVETIMELINE2_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x9592620)
#define SPINE_CURVETIMELINE2_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9592630)
#define SPINE_CURVETIMELINE2_.CTOR_OFFSET UNITYSDK_OFFSET(0x95926A0)

namespace Spine
{
	inline static constexpr unsigned int CurveTimeline2_TypeDefinitionIndex = 34957;

	class CurveTimeline2 : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 VALUE1; // 0x0
		::System::Int32 VALUE2; // 0x0

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2_SETFRAME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_CURVETIMELINE2_.CTOR_OFFSET))(arg, arg, str, str, nullptr);
		}

	};
}

