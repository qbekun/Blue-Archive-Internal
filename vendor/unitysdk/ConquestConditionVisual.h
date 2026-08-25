#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONVISUAL_LOAD_OFFSET UNITYSDK_OFFSET(0x1ADDDD0)
#define CONQUESTCONDITIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD580)
#define CONQUESTCONDITIONVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTCONDITIONVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTCONDITIONVISUAL_SAVE_OFFSET UNITYSDK_OFFSET(0x1ADDDE0)

	inline static constexpr unsigned int ConquestConditionVisual_TypeDefinitionIndex = 1475;

	class ConquestConditionVisual : public Il2CppObject
	{
	public:
		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONVISUAL_LOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONVISUAL_SAVE_OFFSET))(nullptr);
		}

	};

