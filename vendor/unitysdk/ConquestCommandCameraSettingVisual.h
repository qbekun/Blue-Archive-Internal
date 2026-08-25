#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandCameraSetting; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDCAMERASETTINGVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC1B0)
#define CONQUESTCOMMANDCAMERASETTINGVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC270)
#define CONQUESTCOMMANDCAMERASETTINGVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC2E0)

	inline static constexpr unsigned int ConquestCommandCameraSettingVisual_TypeDefinitionIndex = 1452;

	class ConquestCommandCameraSettingVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandCameraSetting* CameraSetting; // 0x18
		::System::Int32 Step; // 0x20
		::System::Int64 CameraSettingId; // 0x28

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDCAMERASETTINGVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDCAMERASETTINGVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDCAMERASETTINGVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

