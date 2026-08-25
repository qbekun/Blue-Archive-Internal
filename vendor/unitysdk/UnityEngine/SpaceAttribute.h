#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SPACEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22C9E0)
#define UNITYENGINE_SPACEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CA00)

namespace UnityEngine
{
	inline static constexpr unsigned int SpaceAttribute_TypeDefinitionIndex = 31113;

	class SpaceAttribute : public Il2CppObject
	{
	public:
		::System::Single height; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPACEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPACEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

