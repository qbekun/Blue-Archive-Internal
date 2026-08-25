#pragma once
#include "unitysdk.h"

#define BATTLEPASSGETINFORESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x19AB610)

	inline static constexpr unsigned int BattlePassGetInfoResponseMessage_TypeDefinitionIndex = 1329;

	class BattlePassGetInfoResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSGETINFORESPONSEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

