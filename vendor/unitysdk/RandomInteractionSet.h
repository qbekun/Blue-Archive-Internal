#pragma once
#include "unitysdk.h"

#define RANDOMINTERACTIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB9A40)

	inline static constexpr unsigned int RandomInteractionSet_TypeDefinitionIndex = 10818;

	class RandomInteractionSet : public Il2CppObject
	{
	public:
		::System::Int64 interactionId; // 0x10
		::System::Int32 probability; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMINTERACTIONSET_.CTOR_OFFSET))(nullptr);
		}

	};

