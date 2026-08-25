#pragma once
#include "unitysdk.h"

#define ENDREWARDUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1C20)

	inline static constexpr unsigned int EndRewardUI_TypeDefinitionIndex = 3062;

	class EndRewardUI : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDREWARDUI_.CTOR_OFFSET))(nullptr);
		}

	};

