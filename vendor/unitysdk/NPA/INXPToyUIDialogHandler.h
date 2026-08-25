#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyUIDialogContext; }

#define NPA_INXPTOYUIDIALOGHANDLER_ONDIALOGSHOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPTOYUIDIALOGHANDLER_ONDIALOGCLOSED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPToyUIDialogHandler_TypeDefinitionIndex = 25599;

	class INXPToyUIDialogHandler : public Il2CppObject
	{
	public:
		::System::Void OnDialogShown(::NPA::NXPToyUIDialogContext* arg)
		{
			((::System::Void(*)(::NPA::NXPToyUIDialogContext*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYUIDIALOGHANDLER_ONDIALOGSHOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnDialogClosed(::NPA::NXPToyUIDialogContext* arg)
		{
			((::System::Void(*)(::NPA::NXPToyUIDialogContext*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPTOYUIDIALOGHANDLER_ONDIALOGCLOSED_OFFSET))(arg, nullptr);
		}

	};
}

