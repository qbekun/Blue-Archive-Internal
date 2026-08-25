#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_TOOLTIPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22C9B0)

namespace UnityEngine
{
	inline static constexpr unsigned int TooltipAttribute_TypeDefinitionIndex = 31112;

	class TooltipAttribute : public Il2CppObject
	{
	public:
		::System::String* tooltip; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TOOLTIPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

