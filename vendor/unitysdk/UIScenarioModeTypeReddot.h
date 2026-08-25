#pragma once
#include "unitysdk.h"

class UISprite;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }

#define UISCENARIOMODETYPEREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EE8B0)
#define UISCENARIOMODETYPEREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x27EE8C0)
#define UISCENARIOMODETYPEREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27EE9A0)
#define UISCENARIOMODETYPEREDDOT_HASSUBTYPE_OFFSET UNITYSDK_OFFSET(0x27EE9B0)

	inline static constexpr unsigned int UIScenarioModeTypeReddot_TypeDefinitionIndex = 7713;

	class UIScenarioModeTypeReddot : public Il2CppObject
	{
	public:
		UISprite* redDot; // 0x18
		::FlatData::ScenarioModeTypes* modeType; // 0x20
		::FlatData::ScenarioModeSubTypes* _subType; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODETYPEREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODETYPEREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODETYPEREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HasSubType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODETYPEREDDOT_HASSUBTYPE_OFFSET))(nullptr);
		}

	};

