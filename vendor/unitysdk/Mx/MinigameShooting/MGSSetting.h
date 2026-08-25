#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class MGSGameMode; }
namespace MX::MinigameShooting { class PlayerSetting; }

#define MX_MINIGAMESHOOTING_MGSSETTING_SET_PLAYERSETTING_OFFSET UNITYSDK_OFFSET(0x147FEF0)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_ARTLEVEL_OFFSET UNITYSDK_OFFSET(0x147FF00)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x147FF10)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_SECTIONADDLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x147FF20)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_CAMERASIZERATE_OFFSET UNITYSDK_OFFSET(0x147FF30)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_BGMID_OFFSET UNITYSDK_OFFSET(0x147FF40)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x147FF50)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x147FF60)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x147FF70)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x147FF80)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_CAMERASIZERATE_OFFSET UNITYSDK_OFFSET(0x147FF90)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x147FFA0)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x147FFB0)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x147FFC0)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_TIME_OFFSET UNITYSDK_OFFSET(0x147FFD0)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_SECTIONADDTIME_OFFSET UNITYSDK_OFFSET(0x147FFE0)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x147FFF0)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_SECTIONADDLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1480000)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1480010)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x1480020)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_ARTLEVEL_OFFSET UNITYSDK_OFFSET(0x1480030)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_SECTIONADDTIME_OFFSET UNITYSDK_OFFSET(0x1480040)
#define MX_MINIGAMESHOOTING_MGSSETTING_GET_PLAYERSETTING_OFFSET UNITYSDK_OFFSET(0x1480050)
#define MX_MINIGAMESHOOTING_MGSSETTING_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1480060)
#define MX_MINIGAMESHOOTING_MGSSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x14778D0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MGSSetting_TypeDefinitionIndex = 15177;

	class MGSSetting : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::MGSGameMode* _GameMode_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::System::Int64 _StageId_k__BackingField; // 0x20
		::System::String* _DesignLevel_k__BackingField; // 0x28
		::System::String* _ArtLevel_k__BackingField; // 0x30
		::MX::MinigameShooting::PlayerSetting* _PlayerSetting_k__BackingField; // 0x38
		::System::Boolean _Orthographic_k__BackingField; // 0x40
		::System::Int64 _Time_k__BackingField; // 0x48
		::System::Int64 _SectionAddTime_k__BackingField; // 0x50
		::System::String* _SectionAddLogicEffect_k__BackingField; // 0x58
		::System::Single _CameraSizeRate_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _BgmId_k__BackingField; // 0x68

		::System::Void set_PlayerSetting(::MX::MinigameShooting::PlayerSetting* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_PLAYERSETTING_OFFSET))(arg, nullptr);
		}

		::System::String* get_ArtLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_ARTLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_DesignLevel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_DESIGNLEVEL_OFFSET))(str, nullptr);
		}

		::System::String* get_SectionAddLogicEffect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_SECTIONADDLOGICEFFECT_OFFSET))(nullptr);
		}

		::System::Single get_CameraSizeRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_CAMERASIZERATE_OFFSET))(nullptr);
		}

		::System::Void set_BgmId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_BGMID_OFFSET))(arg, nullptr);
		}

		::System::String* get_DesignLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_DESIGNLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_Orthographic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_ORTHOGRAPHIC_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BgmId()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Void set_CameraSizeRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_CAMERASIZERATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void set_Orthographic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_ORTHOGRAPHIC_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_TIME_OFFSET))(nullptr);
		}

		::System::Int64 get_SectionAddTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_SECTIONADDTIME_OFFSET))(nullptr);
		}

		::System::Void set_GameMode(::MX::MinigameShooting::MGSGameMode* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::MGSGameMode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_GAMEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SectionAddLogicEffect(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_SECTIONADDLOGICEFFECT_OFFSET))(str, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::MGSGameMode* get_GameMode()
		{
			return ((::MX::MinigameShooting::MGSGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_GAMEMODE_OFFSET))(nullptr);
		}

		::System::Void set_ArtLevel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_ARTLEVEL_OFFSET))(str, nullptr);
		}

		::System::Void set_SectionAddTime(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_SECTIONADDTIME_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::PlayerSetting* get_PlayerSetting()
		{
			return ((::MX::MinigameShooting::PlayerSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_GET_PLAYERSETTING_OFFSET))(nullptr);
		}

		::System::Void set_Time(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_MGSSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

