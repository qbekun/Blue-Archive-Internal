#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class Resolution; }
namespace MX::SaveData { class FPS; }
namespace MX::SaveData { class DrawcallMode; }
namespace MX::SaveData { class ToggleValue; }
namespace MX::SaveData { class AntiAliasing; }
namespace MX::SaveData { class ControllerCursorSpeed; }
namespace MX::SaveData { class OptionType; }

#define MX_SAVEDATA_DEVICEOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D29270)
#define MX_SAVEDATA_DEVICEOPTION_MIGRATEAUDIOVOLUMES_OFFSET UNITYSDK_OFFSET(0x1D29050)
#define MX_SAVEDATA_DEVICEOPTION_GETVOLUMENAMEFROMOPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D29370)
#define MX_SAVEDATA_DEVICEOPTION_SETDEFAULTANTIALIASING_OFFSET UNITYSDK_OFFSET(0x1D29430)
#define MX_SAVEDATA_DEVICEOPTION_LOADDEFAULTAUDIOSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D29440)
#define MX_SAVEDATA_DEVICEOPTION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D294F0)
#define MX_SAVEDATA_DEVICEOPTION_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D29500)
#define MX_SAVEDATA_DEVICEOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D29770)
#define MX_SAVEDATA_DEVICEOPTION_SETDEFAULTAUDIOSETTING_OFFSET UNITYSDK_OFFSET(0x1D298E0)
#define MX_SAVEDATA_DEVICEOPTION_LOADDEFAULTGRAPHICSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D29710)
#define MX_SAVEDATA_DEVICEOPTION_APPLYSOUND_OFFSET UNITYSDK_OFFSET(0x1D29970)

namespace MX::SaveData
{
	inline static constexpr unsigned int DeviceOption_TypeDefinitionIndex = 20049;

	class DeviceOption : public Il2CppObject
	{
	public:
		Audio* BGM; // 0x10
		Audio* FXS; // 0x18
		Audio* Voice; // 0x20
		Audio* Master; // 0x28
		::System::Int32 AudioVolumeVersion; // 0x30
		::System::Int32 AudioVolumeLatestVersion; // 0x0
		::System::Single AudioVolumeMigrationExponentV0ToV1; // 0x0
		::MX::SaveData::Resolution* Resolution; // 0x34
		::MX::SaveData::FPS* FPS; // 0x38
		::MX::SaveData::DrawcallMode* DrawcallMode; // 0x3C
		::MX::SaveData::ToggleValue* AllowPostProcess; // 0x40
		::MX::SaveData::AntiAliasing* AntiAliasing; // 0x44
		::MX::SaveData::ToggleValue* LetterBoxInBattle; // 0x48
		::MX::SaveData::ToggleValue* NotificationAfterDownloadAlarm; // 0x4C
		ScreenRatioType* ScreenRatioType; // 0x50
		ScreenModeType* ScreenModeType; // 0x54
		::MX::SaveData::ToggleValue* BackgroundSound; // 0x58
		::MX::SaveData::ToggleValue* ControlDisplay; // 0x5C
		::MX::SaveData::ToggleValue* VSync; // 0x60
		::MX::SaveData::ToggleValue* MXMouseCursor; // 0x64
		ClientRect* windowRect; // 0x68
		RenderScale* renderScale; // 0x78
		::System::String* Language; // 0x80
		::System::String* VoiceLanguage; // 0x88
		Il2CppObject* DOB; // 0x90
		::MX::SaveData::ToggleValue* Vibration; // 0x98
		::MX::SaveData::ControllerCursorSpeed* ControllerCursorSpeed; // 0x9C
		::MX::SaveData::ToggleValue* CursorAutoFocus; // 0xA0
		::System::Int64 TitleVideoAudioId; // 0xA8
		::System::Boolean IsInitialized; // 0xB0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean MigrateAudioVolumes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_MIGRATEAUDIOVOLUMES_OFFSET))(nullptr);
		}

		::System::String* GetVolumeNameFromOptionType(::MX::SaveData::OptionType* arg)
		{
			return (return (::System::String*(*)(::MX::SaveData::OptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_GETVOLUMENAMEFROMOPTIONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::SaveData::AntiAliasing* SetDefaultAntiAliasing()
		{
			return (return (::MX::SaveData::AntiAliasing*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_SETDEFAULTANTIALIASING_OFFSET))(nullptr);
		}

		DefaultAudioSettings* LoadDefaultAudioSettings()
		{
			return (return (DefaultAudioSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_LOADDEFAULTAUDIOSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultAudioSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_SETDEFAULTAUDIOSETTING_OFFSET))(nullptr);
		}

		DefaultGraphicsSettings* LoadDefaultGraphicsSettings()
		{
			return (return (DefaultGraphicsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_LOADDEFAULTGRAPHICSSETTINGS_OFFSET))(nullptr);
		}

		::System::Void ApplySound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICEOPTION_APPLYSOUND_OFFSET))(nullptr);
		}

	};
}

