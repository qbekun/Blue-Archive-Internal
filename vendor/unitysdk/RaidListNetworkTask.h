#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidRoomSortOption; }
namespace FlatData { class Difficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8EE10)
#define RAIDLISTNETWORKTASK_GET_RAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F8F000)
#define RAIDLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8F010)
#define RAIDLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8F0A0)
#define RAIDLISTNETWORKTASK_GET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1F8F0B0)
#define RAIDLISTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F8F0C0)
#define RAIDLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F0D0)
#define RAIDLISTNETWORKTASK_SET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1F8F0E0)
#define RAIDLISTNETWORKTASK_SET_RAIDROOMSORTOPTION_OFFSET UNITYSDK_OFFSET(0x1F8F0F0)
#define RAIDLISTNETWORKTASK_SET_RAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F8F100)
#define RAIDLISTNETWORKTASK_GET_RAIDROOMSORTOPTION_OFFSET UNITYSDK_OFFSET(0x1F8F110)

	inline static constexpr unsigned int RaidListNetworkTask_TypeDefinitionIndex = 2703;

	class RaidListNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidRoomSortOption* _RaidRoomSortOption_k__BackingField; // 0x40
		::FlatData::Difficulty* _RaidDifficulty_k__BackingField; // 0x44
		::System::String* _RaidBossGroup_k__BackingField; // 0x48

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::FlatData::Difficulty* get_RaidDifficulty()
		{
			return ((::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_GET_RAIDDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::String* get_RaidBossGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_GET_RAIDBOSSGROUP_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_SET_RAIDBOSSGROUP_OFFSET))(str, nullptr);
		}

		::System::Void set_RaidRoomSortOption(::MX::NetworkProtocol::RaidRoomSortOption* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidRoomSortOption*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_SET_RAIDROOMSORTOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidDifficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_SET_RAIDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::RaidRoomSortOption* get_RaidRoomSortOption()
		{
			return ((::MX::NetworkProtocol::RaidRoomSortOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDLISTNETWORKTASK_GET_RAIDROOMSORTOPTION_OFFSET))(nullptr);
		}

	};

