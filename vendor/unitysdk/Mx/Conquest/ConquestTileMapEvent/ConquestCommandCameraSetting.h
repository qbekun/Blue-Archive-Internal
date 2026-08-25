#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142B740)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142B750)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x142B7F0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_CLONE_OFFSET UNITYSDK_OFFSET(0x142B800)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandCameraSetting_TypeDefinitionIndex = 14841;

	class ConquestCommandCameraSetting : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x18
		::System::Int64 CameraSettingId; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCAMERASETTING_CLONE_OFFSET))(nullptr);
		}

	};
}

