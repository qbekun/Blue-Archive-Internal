#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTNORMALCONQUERNETWORKTASK_GET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0x1F30F80)
#define CONQUESTNORMALCONQUERNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F30F90)
#define CONQUESTNORMALCONQUERNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F30FA0)
#define CONQUESTNORMALCONQUERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F30FB0)
#define CONQUESTNORMALCONQUERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F31040)
#define CONQUESTNORMALCONQUERNETWORKTASK_SET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0x1F31050)
#define CONQUESTNORMALCONQUERNETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F31060)
#define CONQUESTNORMALCONQUERNETWORKTASK_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F31070)
#define CONQUESTNORMALCONQUERNETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F31080)
#define CONQUESTNORMALCONQUERNETWORKTASK_SET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F31090)
#define CONQUESTNORMALCONQUERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F310A0)
#define CONQUESTNORMALCONQUERNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F310B0)
#define CONQUESTNORMALCONQUERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F310C0)

	inline static constexpr unsigned int ConquestNormalConquerNetworkTask_TypeDefinitionIndex = 2244;

	class ConquestNormalConquerNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _StageDifficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::System::Int64 _TileRewardId_k__BackingField; // 0x58

		::System::Int64 get_TileRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_GET_TILEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TileRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_SET_TILEREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StageDifficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_SET_STAGEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

