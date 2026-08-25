#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2BEF0)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_GET_REWARDSBYTAG_OFFSET UNITYSDK_OFFSET(0x1F2BF40)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_SET_REWARDSBYTAG_OFFSET UNITYSDK_OFFSET(0x1F2BF50)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F2BF60)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F2BF70)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET UNITYSDK_OFFSET(0x1F2BF80)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1F2BF90)

	inline static constexpr unsigned int ConquestConquerWithBattleResultNetworkMessage_TypeDefinitionIndex = 2215;

	class ConquestConquerWithBattleResultNetworkMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x20
		Il2CppObject* _RewardsByTag_k__BackingField; // 0x28
		Il2CppObject* _RewardConfirmDatas_k__BackingField; // 0x30

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_RewardsByTag()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_GET_REWARDSBYTAG_OFFSET))(nullptr);
		}

		::System::Void set_RewardsByTag(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_SET_REWARDSBYTAG_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardConfirmDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_SET_REWARDCONFIRMDATAS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardConfirmDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_GET_REWARDCONFIRMDATAS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKMESSAGE_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

	};

