#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTUPGRADEBASENETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F33FD0)
#define CONQUESTUPGRADEBASENETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F33FE0)
#define CONQUESTUPGRADEBASENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F33FF0)
#define CONQUESTUPGRADEBASENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F34000)
#define CONQUESTUPGRADEBASENETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F346A0)
#define CONQUESTUPGRADEBASENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F346B0)
#define CONQUESTUPGRADEBASENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F346C0)
#define CONQUESTUPGRADEBASENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F346D0)
#define CONQUESTUPGRADEBASENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F346E0)
#define CONQUESTUPGRADEBASENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F346F0)
#define CONQUESTUPGRADEBASENETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F34780)

	inline static constexpr unsigned int ConquestUpgradeBaseNetworkTask_TypeDefinitionIndex = 2257;

	class ConquestUpgradeBaseNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUPGRADEBASENETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

	};

