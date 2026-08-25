#pragma once
#include "unitysdk.h"

#define UIBATTLEANIENDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x221F5C0)

	inline static constexpr unsigned int UIBattleAniEndMessage_TypeDefinitionIndex = 4427;

	class UIBattleAniEndMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEANIENDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

