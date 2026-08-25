#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UICAFERANKUPRESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2287610)
#define UICAFERANKUPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2287790)
#define UICAFERANKUPRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22877A0)

	inline static constexpr unsigned int UICafeRankUpResult_TypeDefinitionIndex = 4677;

	class UICafeRankUpResult : public Il2CppObject
	{
	public:
		UILabel* rankLabel; // 0xD8
		MXButton* button; // 0xE0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

