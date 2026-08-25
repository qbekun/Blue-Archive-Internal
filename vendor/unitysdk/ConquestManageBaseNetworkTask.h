#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTMANAGEBASENETWORKTASK_SET_MANAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1F33280)
#define CONQUESTMANAGEBASENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F33290)
#define CONQUESTMANAGEBASENETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F33320)
#define CONQUESTMANAGEBASENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F33330)
#define CONQUESTMANAGEBASENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F33BB0)
#define CONQUESTMANAGEBASENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F33BC0)
#define CONQUESTMANAGEBASENETWORKTASK_GET_MANAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1F33BD0)
#define CONQUESTMANAGEBASENETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F33BE0)
#define CONQUESTMANAGEBASENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F33BF0)
#define CONQUESTMANAGEBASENETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F33C00)
#define CONQUESTMANAGEBASENETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F33C10)
#define CONQUESTMANAGEBASENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F33C20)
#define CONQUESTMANAGEBASENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F33C30)

	inline static constexpr unsigned int ConquestManageBaseNetworkTask_TypeDefinitionIndex = 2253;

	class ConquestManageBaseNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::System::Int32 _ManageCount_k__BackingField; // 0x58

		::System::Void set_ManageCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_SET_MANAGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ManageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_GET_MANAGECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMANAGEBASENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

	};

