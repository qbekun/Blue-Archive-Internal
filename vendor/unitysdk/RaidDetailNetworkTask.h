#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RAIDDETAILNETWORKTASK_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F8C6C0)
#define RAIDDETAILNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8C6D0)
#define RAIDDETAILNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8C8C0)
#define RAIDDETAILNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C950)
#define RAIDDETAILNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8C960)
#define RAIDDETAILNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F8C970)
#define RAIDDETAILNETWORKTASK_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F8C980)
#define RAIDDETAILNETWORKTASK_GET_RANKCOUNT_OFFSET UNITYSDK_OFFSET(0x1F8C990)
#define RAIDDETAILNETWORKTASK_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F8C9A0)
#define RAIDDETAILNETWORKTASK_SET_RANKCOUNT_OFFSET UNITYSDK_OFFSET(0x1F8C9B0)
#define RAIDDETAILNETWORKTASK_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F8C9C0)

	inline static constexpr unsigned int RaidDetailNetworkTask_TypeDefinitionIndex = 2685;

	class RaidDetailNetworkTask : public Il2CppObject
	{
	public:
		::System::Int32 _RankCount_k__BackingField; // 0x40
		::System::Int64 _RaidServerId_k__BackingField; // 0x48
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x50

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Int32 get_RankCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_GET_RANKCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RankCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_SET_RANKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILNETWORKTASK_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

