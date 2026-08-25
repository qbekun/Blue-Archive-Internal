#pragma once
#include "unitysdk.h"

#define UIGACHADIRECTINGRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25B4500)
#define UIGACHADIRECTINGRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x25B4580)

	inline static constexpr unsigned int UIGachaDirectingResult_TypeDefinitionIndex = 6259;

	class UIGachaDirectingResult : public Il2CppObject
	{
	public:
		Il2CppObject* cards; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTINGRESULT_CLEAR_OFFSET))(nullptr);
		}

	};

