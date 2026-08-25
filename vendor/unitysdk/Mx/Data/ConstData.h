#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ConstCommonExcel; }
namespace FlatData { class ConstCombatExcel; }
namespace FlatData { class ConstStrategyExcel; }
namespace FlatData { class ConstArenaExcel; }
namespace FlatData { class ConstAudioExcel; }
namespace FlatData { class ConstNewbieContentExcel; }
namespace FlatData { class ConstEventCommonExcel; }
namespace FlatData { class ConstMiniGameShootingExcel; }
namespace FlatData { class ConstMinigameTBGExcel; }
namespace FlatData { class ConstMinigameRoadPuzzleExcel; }
namespace FlatData { class ConstFieldExcel; }
namespace FlatData { class ConstMinigameCCGExcel; }
namespace FlatData { class ConstKeyMappingExcel; }
namespace FlatData { class ConstContentsExcel; }

#define MX_DATA_CONSTDATA_GET_NEWBIECONTENTDATA_OFFSET UNITYSDK_OFFSET(0x18AD760)
#define MX_DATA_CONSTDATA_GET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0x18AD7F0)
#define MX_DATA_CONSTDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x18AD880)
#define MX_DATA_CONSTDATA_GET_CONTENTSDATA_OFFSET UNITYSDK_OFFSET(0x18AE400)
#define MX_DATA_CONSTDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x18AE490)
#define MX_DATA_CONSTDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x18AE650)
#define MX_DATA_CONSTDATA_GET_COMBATDATA_OFFSET UNITYSDK_OFFSET(0x18AE660)
#define MX_DATA_CONSTDATA_GET_MINIGAMESHOOTINGDATA_OFFSET UNITYSDK_OFFSET(0x18AE6F0)
#define MX_DATA_CONSTDATA_GET_CARDGAMEDATA_OFFSET UNITYSDK_OFFSET(0x18AE780)
#define MX_DATA_CONSTDATA_GET_FIELDDATA_OFFSET UNITYSDK_OFFSET(0x18AE810)
#define MX_DATA_CONSTDATA_GET_ARENADATA_OFFSET UNITYSDK_OFFSET(0x18AE8A0)
#define MX_DATA_CONSTDATA_GET_MINIGAMEROADPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x18AE930)
#define MX_DATA_CONSTDATA_GET_MINIGAMETBGDATA_OFFSET UNITYSDK_OFFSET(0x18AE9C0)
#define MX_DATA_CONSTDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x18AEA50)
#define MX_DATA_CONSTDATA_GET_STRATEGYDATA_OFFSET UNITYSDK_OFFSET(0x18AF5B0)
#define MX_DATA_CONSTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18AF640)
#define MX_DATA_CONSTDATA_GET_AUDIODATA_OFFSET UNITYSDK_OFFSET(0x18AF650)
#define MX_DATA_CONSTDATA_GET_COMMONDATA_OFFSET UNITYSDK_OFFSET(0x18AF520)
#define MX_DATA_CONSTDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18AF6E0)

namespace MX::Data
{
	inline static constexpr unsigned int ConstData_TypeDefinitionIndex = 16032;

	class ConstData : public Il2CppObject
	{
	public:
		::System::Int32 BASIS_POINT; // 0x0
		::FlatData::ConstCommonExcel* CommonConst; // 0x18
		::FlatData::ConstCombatExcel* CombatConst; // 0x28
		::FlatData::ConstStrategyExcel* StrategyConst; // 0x38
		::FlatData::ConstArenaExcel* ArenaConst; // 0x48
		::FlatData::ConstAudioExcel* AudioConst; // 0x58
		::FlatData::ConstNewbieContentExcel* NewbieContentConst; // 0x68
		::FlatData::ConstEventCommonExcel* EventConst; // 0x78
		::FlatData::ConstMiniGameShootingExcel* MiniGameShootingConst; // 0x88
		::FlatData::ConstMinigameTBGExcel* MinigameTBGConst; // 0x98
		::FlatData::ConstMinigameRoadPuzzleExcel* MinigameRoadPuzzleConst; // 0xA8
		::FlatData::ConstFieldExcel* FieldConst; // 0xB8
		::FlatData::ConstMinigameCCGExcel* CardGameConst; // 0xC8
		::FlatData::ConstKeyMappingExcel* KeyMappingConst; // 0xD8
		::FlatData::ConstContentsExcel* ContentsConst; // 0xE8

		::FlatData::ConstNewbieContentExcel* get_NewbieContentData()
		{
			return (return (::FlatData::ConstNewbieContentExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_NEWBIECONTENTDATA_OFFSET))(nullptr);
		}

		::FlatData::ConstEventCommonExcel* get_EventData()
		{
			return (return (::FlatData::ConstEventCommonExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_EVENTDATA_OFFSET))(nullptr);
		}

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::FlatData::ConstContentsExcel* get_ContentsData()
		{
			return (return (::FlatData::ConstContentsExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_CONTENTSDATA_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::FlatData::ConstCombatExcel* get_CombatData()
		{
			return (return (::FlatData::ConstCombatExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_COMBATDATA_OFFSET))(nullptr);
		}

		::FlatData::ConstMiniGameShootingExcel* get_MiniGameShootingData()
		{
			return (return (::FlatData::ConstMiniGameShootingExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_MINIGAMESHOOTINGDATA_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameCCGExcel* get_CardGameData()
		{
			return (return (::FlatData::ConstMinigameCCGExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_CARDGAMEDATA_OFFSET))(nullptr);
		}

		::FlatData::ConstFieldExcel* get_FieldData()
		{
			return (return (::FlatData::ConstFieldExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_FIELDDATA_OFFSET))(nullptr);
		}

		::FlatData::ConstArenaExcel* get_ArenaData()
		{
			return (return (::FlatData::ConstArenaExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_ARENADATA_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameRoadPuzzleExcel* get_MinigameRoadPuzzleData()
		{
			return (return (::FlatData::ConstMinigameRoadPuzzleExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_MINIGAMEROADPUZZLEDATA_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameTBGExcel* get_MinigameTBGData()
		{
			return (return (::FlatData::ConstMinigameTBGExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_MINIGAMETBGDATA_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::FlatData::ConstStrategyExcel* get_StrategyData()
		{
			return (return (::FlatData::ConstStrategyExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_STRATEGYDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ConstAudioExcel* get_AudioData()
		{
			return (return (::FlatData::ConstAudioExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_AUDIODATA_OFFSET))(nullptr);
		}

		::FlatData::ConstCommonExcel* get_CommonData()
		{
			return (return (::FlatData::ConstCommonExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_GET_COMMONDATA_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONSTDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

	};
}

