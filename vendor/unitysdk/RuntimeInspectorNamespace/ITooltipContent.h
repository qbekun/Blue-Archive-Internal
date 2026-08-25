#pragma once
#include "../unitysdk.h"

#define RUNTIMEINSPECTORNAMESPACE_ITOOLTIPCONTENT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_ITOOLTIPCONTENT_GET_TOOLTIPTEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ITooltipContent_TypeDefinitionIndex = 35725;

	class ITooltipContent : public Il2CppObject
	{
	public:
		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ITOOLTIPCONTENT_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::String* get_TooltipText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ITOOLTIPCONTENT_GET_TOOLTIPTEXT_OFFSET))(nullptr);
		}

	};
}

