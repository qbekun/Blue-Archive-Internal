#pragma once
#include "unitysdk.h"

class GameConfigData;
class GameConfig;

#define GAMECONFIG_ISCHANGABLEVOLUMEBYCODE_OFFSET UNITYSDK_OFFSET(0x1FBFA80)
#define GAMECONFIG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FBFBA0)
#define GAMECONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFBF0)
#define GAMECONFIG_LOADORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1FBFC20)
#define GAMECONFIG_LOADDEFAULT_OFFSET UNITYSDK_OFFSET(0x1FC15A0)
#define GAMECONFIG_LOAD_OFFSET UNITYSDK_OFFSET(0x1FBFC60)
#define GAMECONFIG_SAVELOCAL_OFFSET UNITYSDK_OFFSET(0x1FC14E0)
#define GAMECONFIG_SAVEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FC1420)
#define GAMECONFIG_SET_OFFSET UNITYSDK_OFFSET(0x1FC1960)
#define GAMECONFIG_SET_OFFSET UNITYSDK_OFFSET(0x1FC1A20)
#define GAMECONFIG_SET_OFFSET UNITYSDK_OFFSET(0x1FC1AE0)
#define GAMECONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FC1BA0)
#define GAMECONFIG_WRITEDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1FC08F0)
#define GAMECONFIG_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1FC1DF0)
#define GAMECONFIG_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1FC1EB0)
#define GAMECONFIG_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1FC1F90)
#define GAMECONFIG_FINDNUMBER_OFFSET UNITYSDK_OFFSET(0x1FC2050)
#define GAMECONFIG_FINDSTRING_OFFSET UNITYSDK_OFFSET(0x1FC2120)
#define GAMECONFIG_FINDDATAPATH_OFFSET UNITYSDK_OFFSET(0x1FC2190)
#define GAMECONFIG_SETLASTSERVER_OFFSET UNITYSDK_OFFSET(0x1FC22A0)
#define GAMECONFIG_FINDLASTSERVER_OFFSET UNITYSDK_OFFSET(0x1FC2380)
#define GAMECONFIG_SETLASTLOGINNAME_OFFSET UNITYSDK_OFFSET(0x1FC2430)
#define GAMECONFIG_FINDLASTLOGINNAME_OFFSET UNITYSDK_OFFSET(0x1FC2510)
#define GAMECONFIG_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1FC25C0)
#define GAMECONFIG_FINDFIRSTKEY_OFFSET UNITYSDK_OFFSET(0x1FC26E0)
#define GAMECONFIG_SETLASTREGION_OFFSET UNITYSDK_OFFSET(0x1FC2820)
#define GAMECONFIG_FINDLASTREGION_OFFSET UNITYSDK_OFFSET(0x1FC2900)

	inline static constexpr unsigned int GameConfig_TypeDefinitionIndex = 2952;

	class GameConfig : public Il2CppObject
	{
	public:
		::System::String* MasterMixerVolume; // 0x0
		::System::String* MusicMixerVolume; // 0x0
		::System::String* FxMixerVolume; // 0x0
		::System::String* VoiceMixerVolume; // 0x0
		::System::String* MusicSettingsForEXSkillVolume; // 0x0
		::System::String* EXSkillMusicSettingsForEXSkillVolume; // 0x0
		::System::String* EXSkillCutinMusicSettingsForEXSkillVolume; // 0x0
		::System::String* IsShowPcPlayGuide; // 0x0
		GameConfigData* configs; // 0x10

		::System::Boolean IsChangableVolumeByCode(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_ISCHANGABLEVOLUMEBYCODE_OFFSET))(str, nullptr);
		}

		GameConfig* get_Instance()
		{
			return ((GameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadOrDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_LOADORDEFAULT_OFFSET))(nullptr);
		}

		::System::Void LoadDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_LOADDEFAULT_OFFSET))(nullptr);
		}

		::System::Boolean Load()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_LOAD_OFFSET))(nullptr);
		}

		::System::Void SaveLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SAVELOCAL_OFFSET))(nullptr);
		}

		::System::Void SaveGlobal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SAVEGLOBAL_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SET_OFFSET))(str, str2, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Clear(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_CLEAR_OFFSET))(str, nullptr);
		}

		::System::Void WriteDefaultValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_WRITEDEFAULTVALUES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, int64_t&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, bool&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Int64 FindNumber(::System::String* str)
		{
			return ((::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_FINDNUMBER_OFFSET))(str, nullptr);
		}

		::System::String* FindString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_FINDSTRING_OFFSET))(str, nullptr);
		}

		::System::String* FindDataPath(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_FINDDATAPATH_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetLastServer(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SETLASTSERVER_OFFSET))(str, nullptr);
		}

		::System::String* FindLastServer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_FINDLASTSERVER_OFFSET))(nullptr);
		}

		::System::Void SetLastLoginName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SETLASTLOGINNAME_OFFSET))(str, nullptr);
		}

		::System::String* FindLastLoginName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_FINDLASTLOGINNAME_OFFSET))(nullptr);
		}

		::System::Boolean ContainsKey(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_CONTAINSKEY_OFFSET))(str, nullptr);
		}

		::System::String* FindFirstKey(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_FINDFIRSTKEY_OFFSET))(str, nullptr);
		}

		::System::Void SetLastRegion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_SETLASTREGION_OFFSET))(str, nullptr);
		}

		::System::String* FindLastRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIG_FINDLASTREGION_OFFSET))(nullptr);
		}

	};

