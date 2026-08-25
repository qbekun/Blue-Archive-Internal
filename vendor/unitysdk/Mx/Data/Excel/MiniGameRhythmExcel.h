#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameRhythmExcel; }
namespace FlatData { class Difficulty; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC73C0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETROOTASMINIGAMERHYTHMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC73D0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETROOTASMINIGAMERHYTHMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC7430)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BC74C0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BC7490)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC74E0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC7530)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x1BC7580)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETPRESETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BC75C0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1BC75E0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1BC7630)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_OPENSTAGESCOREAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC7680)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1BC76D0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MISSDAMAGE_OFFSET UNITYSDK_OFFSET(0x1BC7720)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_CRITICALHPRESTOREVALUE_OFFSET UNITYSDK_OFFSET(0x1BC7770)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x1BC77C0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_FEVERSCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC7810)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_NOTESCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC7860)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_COMBOSCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC78B0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_ATTACKSCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC7900)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_FEVERCRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1BC7950)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_FEVERATTACKRATE_OFFSET UNITYSDK_OFFSET(0x1BC79A0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MAXHPSCORE_OFFSET UNITYSDK_OFFSET(0x1BC79F0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_RHYTHMFILENAME_OFFSET UNITYSDK_OFFSET(0x1BC7A40)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETRHYTHMFILENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BC7A80)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_ARTLEVELSCENENAME_OFFSET UNITYSDK_OFFSET(0x1BC7AA0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETARTLEVELSCENENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BC7AE0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_COMBOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC7B00)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETCOMBOIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BC7B40)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_CREATEMINIGAMERHYTHMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC7B60)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_STARTMINIGAMERHYTHMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC8300)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC8100)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDRHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC80D0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDPRESETNAME_OFFSET UNITYSDK_OFFSET(0x1BC8250)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1BC8220)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1BC8280)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDOPENSTAGESCOREAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BC80A0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMAXHP_OFFSET UNITYSDK_OFFSET(0x1BC8070)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMISSDAMAGE_OFFSET UNITYSDK_OFFSET(0x1BC8040)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDCRITICALHPRESTOREVALUE_OFFSET UNITYSDK_OFFSET(0x1BC8010)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMAXSCORE_OFFSET UNITYSDK_OFFSET(0x1BC7FE0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDFEVERSCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC7FB0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDNOTESCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC7F80)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDCOMBOSCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC7F50)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDATTACKSCORERATE_OFFSET UNITYSDK_OFFSET(0x1BC7F20)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDFEVERCRITICALRATE_OFFSET UNITYSDK_OFFSET(0x1BC81F0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDFEVERATTACKRATE_OFFSET UNITYSDK_OFFSET(0x1BC81C0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMAXHPSCORE_OFFSET UNITYSDK_OFFSET(0x1BC7EF0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDRHYTHMFILENAME_OFFSET UNITYSDK_OFFSET(0x1BC8190)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDARTLEVELSCENENAME_OFFSET UNITYSDK_OFFSET(0x1BC8160)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDCOMBOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC8130)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ENDMINIGAMERHYTHMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC82B0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_FINISHMINIGAMERHYTHMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC8320)
#define MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_FINISHSIZEPREFIXEDMINIGAMERHYTHMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC8340)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRhythmExcel_TypeDefinitionIndex = 18719;

	class MiniGameRhythmExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameRhythmExcel* GetRootAsMiniGameRhythmExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRhythmExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETROOTASMINIGAMERHYTHMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRhythmExcel* GetRootAsMiniGameRhythmExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameRhythmExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRhythmExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameRhythmExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETROOTASMINIGAMERHYTHMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRhythmExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRhythmExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_RhythmBgmId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_RHYTHMBGMID_OFFSET))(nullptr);
		}

		::System::String* get_PresetName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_PRESETNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPresetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETPRESETNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::Difficulty* get_StageDifficulty()
		{
			return (return (::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSpecial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_ISSPECIAL_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenStageScoreAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_OPENSTAGESCOREAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MAXHP_OFFSET))(nullptr);
		}

		::System::Int64 get_MissDamage()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MISSDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_CriticalHPRestoreValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_CRITICALHPRESTOREVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MAXSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_FeverScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_FEVERSCORERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_NoteScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_NOTESCORERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_ComboScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_COMBOSCORERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackScoreRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_ATTACKSCORERATE_OFFSET))(nullptr);
		}

		::System::Single get_FeverCriticalRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_FEVERCRITICALRATE_OFFSET))(nullptr);
		}

		::System::Single get_FeverAttackRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_FEVERATTACKRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHpScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_MAXHPSCORE_OFFSET))(nullptr);
		}

		::System::String* get_RhythmFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_RHYTHMFILENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetRhythmFileNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETRHYTHMFILENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ArtLevelSceneName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_ARTLEVELSCENENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetArtLevelSceneNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETARTLEVELSCENENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ComboImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GET_COMBOIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetComboImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_GETCOMBOIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameRhythmExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::Difficulty* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Single arg, ::System::Single arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::Difficulty*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Single, ::System::Single, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_CREATEMINIGAMERHYTHMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameRhythmExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_STARTMINIGAMERHYTHMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRhythmBgmId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDRHYTHMBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPresetName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDPRESETNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDSTAGEDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSpecial(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDISSPECIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenStageScoreAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDOPENSTAGESCOREAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMAXHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMissDamage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMISSDAMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCriticalHPRestoreValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDCRITICALHPRESTOREVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMAXSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFeverScoreRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDFEVERSCORERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNoteScoreRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDNOTESCORERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddComboScoreRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDCOMBOSCORERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackScoreRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDATTACKSCORERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFeverCriticalRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDFEVERCRITICALRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFeverAttackRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDFEVERATTACKRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHpScore(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDMAXHPSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRhythmFileName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDRHYTHMFILENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArtLevelSceneName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDARTLEVELSCENENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddComboImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ADDCOMBOIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameRhythmExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_ENDMINIGAMERHYTHMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameRhythmExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_FINISHMINIGAMERHYTHMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameRhythmExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMEXCEL_FINISHSIZEPREFIXEDMINIGAMERHYTHMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

