#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_MULTILINEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CAD0)
#define UNITYENGINE_MULTILINEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CAF0)

namespace UnityEngine
{
	inline static constexpr unsigned int MultilineAttribute_TypeDefinitionIndex = 31117;

	class MultilineAttribute : public Il2CppObject
	{
	public:
		::System::Int32 lines; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MULTILINEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MULTILINEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

