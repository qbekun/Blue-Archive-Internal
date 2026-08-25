#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0x1F31DD0)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F31DE0)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F31DF0)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F31E00)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0x1F31E10)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F31E20)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F31E30)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F31E40)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F327F0)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F32800)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F32810)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F328A0)
#define CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F328B0)

	inline static constexpr unsigned int ConquestMainStoryNormalConquerNetworkTask_TypeDefinitionIndex = 2247;

	class ConquestMainStoryNormalConquerNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _StageDifficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::System::Int64 _TileRewardId_k__BackingField; // 0x58

		::System::Void set_TileRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_TILEREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_StageDifficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_STAGEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_TILEREWARDID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYNORMALCONQUERNETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

	};

