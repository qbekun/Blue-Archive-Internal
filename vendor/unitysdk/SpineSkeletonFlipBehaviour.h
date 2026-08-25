#pragma once
#include "unitysdk.h"

#define SPINESKELETONFLIPBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E3720)

	inline static constexpr unsigned int SpineSkeletonFlipBehaviour_TypeDefinitionIndex = 37930;

	class SpineSkeletonFlipBehaviour : public Il2CppObject
	{
	public:
		::System::Boolean flipX; // 0x10
		::System::Boolean flipY; // 0x11

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};

