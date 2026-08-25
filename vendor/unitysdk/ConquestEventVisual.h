#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTileMapEvent; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestTriggerType; }
namespace MX::Conquest::ConquestTileMapEvent { class MultipleConditionCheckType; }

#define CONQUESTEVENTVISUAL_SETDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BE39A0)
#define CONQUESTEVENTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3A50)
#define CONQUESTEVENTVISUAL_LOAD_OFFSET UNITYSDK_OFFSET(0x1BE3AD0)
#define CONQUESTEVENTVISUAL_SAVE_OFFSET UNITYSDK_OFFSET(0x1BE3C10)
#define CONQUESTEVENTVISUAL_GETDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BE4000)

	inline static constexpr unsigned int ConquestEventVisual_TypeDefinitionIndex = 1523;

	class ConquestEventVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestTileMapEvent* conquestEvent; // 0x18
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* TriggerType; // 0x20
		::System::Boolean DisplayOnce; // 0x24
		::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType* MultipleConditionCheckType; // 0x28

		::System::Void SetDisplayOrder(::System::Int32 arg, int32_t&* arg2)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTVISUAL_SETDISPLAYORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTVISUAL_LOAD_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTVISUAL_SAVE_OFFSET))(nullptr);
		}

		::System::Int32 GetDisplayOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTVISUAL_GETDISPLAYORDER_OFFSET))(nullptr);
		}

	};

