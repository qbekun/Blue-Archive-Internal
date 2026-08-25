#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;

#define UITITLELOGINCACHEAUX_REFRESH_OFFSET UNITYSDK_OFFSET(0xB73AD0)
#define UITITLELOGINCACHEAUX_.CTOR_OFFSET UNITYSDK_OFFSET(0xB73B00)

	inline static constexpr unsigned int UITitleLoginCacheAux_TypeDefinitionIndex = 8474;

	class UITitleLoginCacheAux : public Il2CppObject
	{
	public:
		MXButton* loginChangeButton; // 0x18
		UILabel* cachedLoginMethodLabel; // 0x20

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLELOGINCACHEAUX_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLELOGINCACHEAUX_.CTOR_OFFSET))(nullptr);
		}

	};

