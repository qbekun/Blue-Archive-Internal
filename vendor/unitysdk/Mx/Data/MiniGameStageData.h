#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Difficulty; }
namespace FlatData { class EventContentType; }

#define MX_DATA_MINIGAMESTAGEDATA_SET_NOTESCORERATE_OFFSET UNITYSDK_OFFSET(0x18F8ED0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x18F8EE0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x18F8EF0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_FEVERATTACKRATE_OFFSET UNITYSDK_OFFSET(0x18F8F00)
#define MX_DATA_MINIGAMESTAGEDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x18F8F10)
#define MX_DATA_MINIGAMESTAGEDATA_GET_FEVERSCORERATE_OFFSET UNITYSDK_OFFSET(0x18F8F20)
#define MX_DATA_MINIGAMESTAGEDATA_SET_MISSDAMAGE_OFFSET UNITYSDK_OFFSET(0x18F8F30)
#define MX_DATA_MINIGAMESTAGEDATA_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x18F8F40)
#define MX_DATA_MINIGAMESTAGEDATA_GET_NOTESCORERATE_OFFSET UNITYSDK_OFFSET(0x18F8F50)
#define MX_DATA_MINIGAMESTAGEDATA_GET_OPENSTAGESCOREAMOUNT_OFFSET UNITYSDK_OFFSET(0x18F8F60)
#define MX_DATA_MINIGAMESTAGEDATA_SET_ATTACKSCORERATE_OFFSET UNITYSDK_OFFSET(0x18F8F70)
#define MX_DATA_MINIGAMESTAGEDATA_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x18F8F80)
#define MX_DATA_MINIGAMESTAGEDATA_GET_ATTACKSCORERATE_OFFSET UNITYSDK_OFFSET(0x18F8F90)
#define MX_DATA_MINIGAMESTAGEDATA_GET_FEVERCRITICALRATE_OFFSET UNITYSDK_OFFSET(0x18F8FA0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_FEVERSCORERATE_OFFSET UNITYSDK_OFFSET(0x18F8FB0)
#define MX_DATA_MINIGAMESTAGEDATA_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x18F8FC0)
#define MX_DATA_MINIGAMESTAGEDATA_GET_COMBOSCORERATE_OFFSET UNITYSDK_OFFSET(0x18F8FD0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_MAXHPSCORE_OFFSET UNITYSDK_OFFSET(0x18F8FE0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x18F8FF0)
#define MX_DATA_MINIGAMESTAGEDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x18F9000)
#define MX_DATA_MINIGAMESTAGEDATA_SET_OPENSTAGESCOREAMOUNT_OFFSET UNITYSDK_OFFSET(0x18F9010)
#define MX_DATA_MINIGAMESTAGEDATA_GET_ARTLEVELSCENENAME_OFFSET UNITYSDK_OFFSET(0x18F9020)
#define MX_DATA_MINIGAMESTAGEDATA_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x18F9030)
#define MX_DATA_MINIGAMESTAGEDATA_SET_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x18F9040)
#define MX_DATA_MINIGAMESTAGEDATA_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x18F9050)
#define MX_DATA_MINIGAMESTAGEDATA_GET_MISSDAMAGE_OFFSET UNITYSDK_OFFSET(0x18F9060)
#define MX_DATA_MINIGAMESTAGEDATA_GET_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x18F9070)
#define MX_DATA_MINIGAMESTAGEDATA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_MINIGAMESTAGEDATA_GET_MAXHPSCORE_OFFSET UNITYSDK_OFFSET(0x18F9080)
#define MX_DATA_MINIGAMESTAGEDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x18F9090)
#define MX_DATA_MINIGAMESTAGEDATA_GET_COMBOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18F90A0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_FEVERCRITICALRATE_OFFSET UNITYSDK_OFFSET(0x18F90B0)
#define MX_DATA_MINIGAMESTAGEDATA_GET_RHYTHMFILENAME_OFFSET UNITYSDK_OFFSET(0x18F90C0)
#define MX_DATA_MINIGAMESTAGEDATA_GET_CRITICALHPRESTOREVALUE_OFFSET UNITYSDK_OFFSET(0x18F90D0)
#define MX_DATA_MINIGAMESTAGEDATA_SET_ARTLEVELSCENENAME_OFFSET UNITYSDK_OFFSET(0x18F90E0)
#define MX_DATA_MINIGAMESTAGEDATA_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x18F9100)
#define MX_DATA_MINIGAMESTAGEDATA_SET_COMBOSCORERATE_OFFSET UNITYSDK_OFFSET(0x18F9110)
#define MX_DATA_MINIGAMESTAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F9120)
#define MX_DATA_MINIGAMESTAGEDATA_GET_FEVERATTACKRATE_OFFSET UNITYSDK_OFFSET(0x18F9130)
#define MX_DATA_MINIGAMESTAGEDATA_SET_CRITICALHPRESTOREVALUE_OFFSET UNITYSDK_OFFSET(0x18F9140)
#define MX_DATA_MINIGAMESTAGEDATA_SET_RHYTHMFILENAME_OFFSET UNITYSDK_OFFSET(0x18F9150)
#define MX_DATA_MINIGAMESTAGEDATA_SET_COMBOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18F9170)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameStageData_TypeDefinitionIndex = 16188;

	class MiniGameStageData : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int64 _RhythmBgmId_k__BackingField; // 0x18
		::System::String* _PresetName_k__BackingField; // 0x20
		::FlatData::Difficulty* _StageDifficulty_k__BackingField; // 0x28
		::System::Boolean _IsSpecial_k__BackingField; // 0x2C
		::System::Int64 _OpenStageScoreAmount_k__BackingField; // 0x30
		::System::Int64 _MaxHp_k__BackingField; // 0x38
		::System::Int64 _MissDamage_k__BackingField; // 0x40
		::System::Int64 _CriticalHPRestoreValue_k__BackingField; // 0x48
		::System::Int64 _MaxScore_k__BackingField; // 0x50
		::System::Int64 _FeverScoreRate_k__BackingField; // 0x58
		::System::Int64 _NoteScoreRate_k__BackingField; // 0x60
		::System::Int64 _ComboScoreRate_k__BackingField; // 0x68
		::System::Int64 _AttackScoreRate_k__BackingField; // 0x70
		::System::Single _FeverCriticalRate_k__BackingField; // 0x78
		::System::Single _FeverAttackRate_k__BackingField; // 0x7C
		::System::Int64 _MaxHpScore_k__BackingField; // 0x80
		::System::String* _RhythmFileName_k__BackingField; // 0x88
		::System::String* _ArtLevelSceneName_k__BackingField; // 0x90
		::System::String* _ComboImagePath_k__BackingField; // 0x98

		::System::Void set_NoteScoreRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_NOTESCORERATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageDifficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_STAGEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FeverAttackRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_FEVERATTACKRATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSpecial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_ISSPECIAL_OFFSET))(nullptr);
		}

		::System::Int64 get_FeverScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_FEVERSCORERATE_OFFSET))(nullptr);
		}

		::System::Void set_MissDamage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_MISSDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSpecial(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_ISSPECIAL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NoteScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_NOTESCORERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenStageScoreAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_OPENSTAGESCOREAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AttackScoreRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_ATTACKSCORERATE_OFFSET))(arg, nullptr);
		}

		::FlatData::Difficulty* get_StageDifficulty()
		{
			return (return (::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_ATTACKSCORERATE_OFFSET))(nullptr);
		}

		::System::Single get_FeverCriticalRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_FEVERCRITICALRATE_OFFSET))(nullptr);
		}

		::System::Void set_FeverScoreRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_FEVERSCORERATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_MAXSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_ComboScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_COMBOSCORERATE_OFFSET))(nullptr);
		}

		::System::Void set_MaxHpScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_MAXHPSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_MAXSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_OpenStageScoreAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_OPENSTAGESCOREAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_ArtLevelSceneName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_ARTLEVELSCENENAME_OFFSET))(nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_RhythmBgmId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_RHYTHMBGMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxHp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_MAXHP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MissDamage()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_MISSDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_RhythmBgmId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_RHYTHMBGMID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_ContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHpScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_MAXHPSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_MAXHP_OFFSET))(nullptr);
		}

		::System::String* get_ComboImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_COMBOIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_FeverCriticalRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_FEVERCRITICALRATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_RhythmFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_RHYTHMFILENAME_OFFSET))(nullptr);
		}

		::System::Int64 get_CriticalHPRestoreValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_CRITICALHPRESTOREVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ArtLevelSceneName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_ARTLEVELSCENENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_PresetName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_PRESETNAME_OFFSET))(nullptr);
		}

		::System::Void set_ComboScoreRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_COMBOSCORERATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_FeverAttackRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_GET_FEVERATTACKRATE_OFFSET))(nullptr);
		}

		::System::Void set_CriticalHPRestoreValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_CRITICALHPRESTOREVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RhythmFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_RHYTHMFILENAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ComboImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESTAGEDATA_SET_COMBOIMAGEPATH_OFFSET))(str, nullptr);
		}

	};
}

