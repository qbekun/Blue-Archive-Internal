#pragma once
#include "../../../unitysdk.h"

#define MXSTUDIO_LIPSYNC_ANIMATES_SHAPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x943F8B0)

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int ShapeInfo_TypeDefinitionIndex = 36875;

	class ShapeInfo : public Il2CppObject
	{
	public:
		Il2CppObject* shapes; // 0x10
		::System::String* phone; // 0x18

		::System::Void .ctor(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_ANIMATES_SHAPEINFO_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

