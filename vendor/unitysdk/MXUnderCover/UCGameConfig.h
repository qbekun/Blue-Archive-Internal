#pragma once
#include "../unitysdk.h"

class CameraBackup;
class ShadowCoordModifierBackup;
class CinemachineBackup;
class RenderingBackup;
class PhysicsBackup;
class UIBackup;
namespace MXUnderCover { class UCGameResource; }

#define MXUNDERCOVER_UCGAMECONFIG_BACKUP_OFFSET UNITYSDK_OFFSET(0xDAF780)
#define MXUNDERCOVER_UCGAMECONFIG_BACKUPANDSET_OFFSET UNITYSDK_OFFSET(0xDAF950)
#define MXUNDERCOVER_UCGAMECONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAFCE0)
#define MXUNDERCOVER_UCGAMECONFIG_RESTORE_OFFSET UNITYSDK_OFFSET(0xDAFCF0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCGameConfig_TypeDefinitionIndex = 9933;

	class UCGameConfig : public Il2CppObject
	{
	public:
		CameraBackup* cameraBackup; // 0x10
		ShadowCoordModifierBackup* shadowCoordModifierBackup; // 0x40
		CinemachineBackup* cinemachineBackup; // 0x48
		RenderingBackup* renderingBackup; // 0x60
		PhysicsBackup* physicsBackup; // 0x68
		UIBackup* uiBackup; // 0x78

		::System::Void Backup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMECONFIG_BACKUP_OFFSET))(nullptr);
		}

		::System::Void BackupAndSet(::MXUnderCover::UCGameResource* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCGameResource*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMECONFIG_BACKUPANDSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMECONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Restore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCGAMECONFIG_RESTORE_OFFSET))(nullptr);
		}

	};
}

