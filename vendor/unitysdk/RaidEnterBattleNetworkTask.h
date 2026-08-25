#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDENTERBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8D5E0)
#define RAIDENTERBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F8D5F0)
#define RAIDENTERBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8D600)
#define RAIDENTERBATTLENETWORKTASK_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F8D610)
#define RAIDENTERBATTLENETWORKTASK_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F8D620)
#define RAIDENTERBATTLENETWORKTASK_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F8D630)
#define RAIDENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8D640)
#define RAIDENTERBATTLENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F8D650)
#define RAIDENTERBATTLENETWORKTASK_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1F8D660)
#define RAIDENTERBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F8D670)
#define RAIDENTERBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F8D680)
#define RAIDENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8D690)
#define RAIDENTERBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D890)
#define RAIDENTERBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F8D8A0)
#define RAIDENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8D8B0)

	inline static constexpr unsigned int RaidEnterBattleNetworkTask_TypeDefinitionIndex = 2691;

	class RaidEnterBattleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x40
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x48
		::System::Int32 _EchelonNumber_k__BackingField; // 0x50
		::System::Boolean _IsPractice_k__BackingField; // 0x54
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x58

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

