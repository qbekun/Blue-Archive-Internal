#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace MX::Data { class MiniGameDefenseStageInfo&; }
namespace FlatData { class StageDifficulty; }
namespace MX::Data { class MinigameDefenseFixedStatExcelInfo&; }
namespace MX::Data::Excel { class MiniGameDefenseInfoExcel&; }

#define MX_DATA_MINIGAMEDEFENSEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18FE0D0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETNEXTDISPLAYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x18FE170)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTALLCLIENT_OFFSET UNITYSDK_OFFSET(0x18FE7E0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSECHARACTERBANLIST_OFFSET UNITYSDK_OFFSET(0x18FEA00)
#define MX_DATA_MINIGAMEDEFENSEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18FEC30)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTBYDIFFICULTYCLIENT_OFFSET UNITYSDK_OFFSET(0x18FE510)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x18FECC0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETPREVDISPLAYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x18FF0D0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTALL_OFFSET UNITYSDK_OFFSET(0x18FF3B0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTBYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x18FF3C0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSEINFOCLIENT_OFFSET UNITYSDK_OFFSET(0x18FF3D0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGEINFOCLIENT_OFFSET UNITYSDK_OFFSET(0x18FF4B0)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSEINFO_OFFSET UNITYSDK_OFFSET(0x1900140)
#define MX_DATA_MINIGAMEDEFENSEDATA_ISDEFENSESCENARIO_OFFSET UNITYSDK_OFFSET(0x1900150)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSECHARACTERBANLISTCLIENT_OFFSET UNITYSDK_OFFSET(0x18FEA10)
#define MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGEINFO_OFFSET UNITYSDK_OFFSET(0x19001A0)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDefenseData_TypeDefinitionIndex = 16201;

	class MiniGameDefenseData : public Il2CppObject
	{
	public:
		Il2CppObject* defenseScenarioGroupIds; // 0x28

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetNextDisplayStageInfo(::MX::Data::MiniGameDefenseStageInfo* arg, Il2CppObject* arg, ::MX::Data::MiniGameDefenseStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::MiniGameDefenseStageInfo*, Il2CppObject*, ::MX::Data::MiniGameDefenseStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETNEXTDISPLAYSTAGEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseStageListAllClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTALLCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseCharacterBanList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSECHARACTERBANLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDefenseStageListByDifficultyClient(::System::Int64 arg, ::FlatData::StageDifficulty* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTBYDIFFICULTYCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetMinigameDefenseFixedStatExcel(::System::Int64 arg, ::MX::Data::MinigameDefenseFixedStatExcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::MinigameDefenseFixedStatExcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETMINIGAMEDEFENSEFIXEDSTATEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPrevDisplayStageInfo(::MX::Data::MiniGameDefenseStageInfo* arg, ::MX::Data::MiniGameDefenseStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::MiniGameDefenseStageInfo*, ::MX::Data::MiniGameDefenseStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETPREVDISPLAYSTAGEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseStageListAll(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseStageListByDifficulty(::System::Int64 arg, ::FlatData::StageDifficulty* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGELISTBYDIFFICULTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseInfoClient(::System::Int64 arg, ::MX::Data::Excel::MiniGameDefenseInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameDefenseInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSEINFOCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseStageInfoClient(::System::Int64 arg, ::MX::Data::MiniGameDefenseStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::MiniGameDefenseStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGEINFOCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseInfo(::System::Int64 arg, ::MX::Data::Excel::MiniGameDefenseInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameDefenseInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefenseScenario(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_ISDEFENSESCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetDefenseCharacterBanListClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSECHARACTERBANLISTCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDefenseStageInfo(::System::Int64 arg, ::MX::Data::MiniGameDefenseStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::MiniGameDefenseStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSEDATA_TRYGETDEFENSESTAGEINFO_OFFSET))(arg, arg, nullptr);
		}

	};
}

