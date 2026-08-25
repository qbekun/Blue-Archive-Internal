#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class EventContentTreasureInfo&; }
namespace MX::Data { class EventContentTreasureRewardInfo&; }
namespace MX::Data { class EventContentTreasureCellRewardInfo&; }
namespace MX::Data { class EventContentTreasureRoundInfo&; }

#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREINFOFORCLIENT_OFFSET UNITYSDK_OFFSET(0x18D69E0)
#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREREWARDINFOFORCLIENT_OFFSET UNITYSDK_OFFSET(0x18D6B00)
#define MX_DATA_EVENTCONTENTTREASUREDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18D6C20)
#define MX_DATA_EVENTCONTENTTREASUREDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18D6C30)
#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASURECELLREWARDINFO_OFFSET UNITYSDK_OFFSET(0x18D6CD0)
#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASURECELLREWARDINFOFORCLIENT_OFFSET UNITYSDK_OFFSET(0x18D6CE0)
#define MX_DATA_EVENTCONTENTTREASUREDATA_GETCONTENTTREASUREREWARDINFOLIST_OFFSET UNITYSDK_OFFSET(0x18D6E00)
#define MX_DATA_EVENTCONTENTTREASUREDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x18D6F70)
#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREREWARDINFO_OFFSET UNITYSDK_OFFSET(0x18D7DD0)
#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREROUNDINFOS_OFFSET UNITYSDK_OFFSET(0x18D7DE0)
#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREROUNDINFO_OFFSET UNITYSDK_OFFSET(0x18D7E40)
#define MX_DATA_EVENTCONTENTTREASUREDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D7F90)
#define MX_DATA_EVENTCONTENTTREASUREDATA_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x18D8010)
#define MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREINFO_OFFSET UNITYSDK_OFFSET(0x18D8020)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentTreasureData_TypeDefinitionIndex = 16117;

	class EventContentTreasureData : public Il2CppObject
	{
	public:
		Il2CppObject* treasureRoundInfoDic; // 0x28

		::System::Boolean TryGetTreasureInfoForClient(::System::Int64 arg, ::MX::Data::EventContentTreasureInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentTreasureInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREINFOFORCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTreasureRewardInfoForClient(::System::Int64 arg, ::MX::Data::EventContentTreasureRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentTreasureRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREREWARDINFOFORCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTreasureCellRewardInfo(::System::Int64 arg, ::MX::Data::EventContentTreasureCellRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentTreasureCellRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASURECELLREWARDINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTreasureCellRewardInfoForClient(::System::Int64 arg, ::MX::Data::EventContentTreasureCellRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentTreasureCellRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASURECELLREWARDINFOFORCLIENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetContentTreasureRewardInfoList(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_GETCONTENTTREASUREREWARDINFOLIST_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTreasureRewardInfo(::System::Int64 arg, ::MX::Data::EventContentTreasureRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentTreasureRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREREWARDINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTreasureRoundInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREROUNDINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTreasureRoundInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::EventContentTreasureRoundInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::EventContentTreasureRoundInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREROUNDINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTreasureInfo(::System::Int64 arg, ::MX::Data::EventContentTreasureInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::EventContentTreasureInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREDATA_TRYGETTREASUREINFO_OFFSET))(arg, arg, nullptr);
		}

	};
}

