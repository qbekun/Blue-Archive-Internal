#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Alloc_TypeDefinitionIndex = 30772;

	class Alloc : public Il2CppObject
	{
	public:
		::System::UInt32 start; // 0x10
		::System::UInt32 size; // 0x14
		::System::Object* handle; // 0x18
		::System::Boolean shortLived; // 0x20

	};
}

