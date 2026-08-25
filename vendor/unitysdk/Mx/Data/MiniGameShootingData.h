#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameShootingCharacterExcel&; }
namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }
namespace MX::Data::Excel { class MiniGameShootingCharacterExcel; }
namespace MX::Data::Excel { class MiniGameShootingGeasExcel&; }
namespace MX::Data { class MiniGameShootingStageInfo&; }
namespace MX::Data::Excel { class MiniGameShootingStageExcel; }

#define MX_DATA_MINIGAMESHOOTINGDATA_GETANISTATEAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x1907250)
#define MX_DATA_MINIGAMESHOOTINGDATA_GETREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x19073D0)
#define MX_DATA_MINIGAMESHOOTINGDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1907420)
#define MX_DATA_MINIGAMESHOOTINGDATA_GETCHARACTERSEXCEL_OFFSET UNITYSDK_OFFSET(0x19084D0)
#define MX_DATA_MINIGAMESHOOTINGDATA_TRYGETCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1908530)
#define MX_DATA_MINIGAMESHOOTINGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19085E0)
#define MX_DATA_MINIGAMESHOOTINGDATA_GETGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1908700)
#define MX_DATA_MINIGAMESHOOTINGDATA_GETCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x19087B0)
#define MX_DATA_MINIGAMESHOOTINGDATA_GETGEASEXCELENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1908860)
#define MX_DATA_MINIGAMESHOOTINGDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19088D0)
#define MX_DATA_MINIGAMESHOOTINGDATA_TRYGETGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1909570)
#define MX_DATA_MINIGAMESHOOTINGDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1909620)
#define MX_DATA_MINIGAMESHOOTINGDATA_GET_STAGEEXCELS_OFFSET UNITYSDK_OFFSET(0x1908460)
#define MX_DATA_MINIGAMESHOOTINGDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x19096E0)
#define MX_DATA_MINIGAMESHOOTINGDATA_TRYGETSHOOTINGSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x190A120)
#define MX_DATA_MINIGAMESHOOTINGDATA_GETSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x190A180)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameShootingData_TypeDefinitionIndex = 16222;

	class MiniGameShootingData : public Il2CppObject
	{
	public:
		Il2CppObject* shootingStageInfoDic; // 0x28
		Il2CppObject* rewardDic; // 0x30
		Il2CppObject* audioAnimatorTable; // 0x38

		Il2CppObject* GetAniStateAudioTable(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GETANISTATEAUDIOTABLE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetRewardInfos(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GETREWARDINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_VALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharactersExcel(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GETCHARACTERSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCharacterExcel(::System::Int64 arg, ::MX::Data::Excel::MiniGameShootingCharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameShootingCharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_TRYGETCHARACTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameShootingGeasExcel* GetGeasExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingGeasExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GETGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingCharacterExcel* GetCharacterExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingCharacterExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GETCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGeasExcelEnumerable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GETGEASEXCELENUMERABLE_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetGeasExcel(::System::Int64 arg, ::MX::Data::Excel::MiniGameShootingGeasExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameShootingGeasExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_TRYGETGEASEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GET_STAGEEXCELS_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetShootingStageInfo(::System::Int64 arg, ::MX::Data::MiniGameShootingStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::MiniGameShootingStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_TRYGETSHOOTINGSTAGEINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingStageExcel* GetStageExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingStageExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGDATA_GETSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

