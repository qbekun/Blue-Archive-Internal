#pragma once
#include "../../unitysdk.h"

#define MXFIELD_UI_IUIFIELDALWAYSVISIBLE_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::UI
{
	inline static constexpr unsigned int IUIFieldAlwaysVisible_TypeDefinitionIndex = 10631;

	class IUIFieldAlwaysVisible : public Il2CppObject
	{
	public:
		::System::Void SetVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_IUIFIELDALWAYSVISIBLE_SETVISIBILITY_OFFSET))(arg, nullptr);
		}

	};
}

