#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Color32; }

namespace Unity::Profiling::LowLevel::Unsafe
{
	inline static constexpr unsigned int ProfilerCategoryDescription_TypeDefinitionIndex = 30863;

	class ProfilerCategoryDescription : public Il2CppObject
	{
	public:
		::System::UInt16 Id; // 0x10
		::System::UInt16 Flags; // 0x12
		::UnityEngine::Color32* Color; // 0x14
		::System::Int32 reserved0; // 0x18
		::System::Int32 NameUtf8Len; // 0x1C
		::System::Object** NameUtf8; // 0x20

	};
}

