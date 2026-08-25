#pragma once
#include "unitysdk.h"

#define UICENTERONCLICK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCEA0)
#define UICENTERONCLICK_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9FCEB0)

	inline static constexpr unsigned int UICenterOnClick_TypeDefinitionIndex = 28;

	class UICenterOnClick : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCLICK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICENTERONCLICK_ONCLICK_OFFSET))(nullptr);
		}

	};

