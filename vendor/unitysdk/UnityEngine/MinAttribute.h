#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_MINATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CAA0)

namespace UnityEngine
{
	inline static constexpr unsigned int MinAttribute_TypeDefinitionIndex = 31116;

	class MinAttribute : public Il2CppObject
	{
	public:
		::System::Single min; // 0x18

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MINATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

