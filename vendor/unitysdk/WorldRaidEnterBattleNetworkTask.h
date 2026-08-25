#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define WORLDRAIDENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FB0B30)
#define WORLDRAIDENTERBATTLENETWORKTASK_GET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0x1FB0BC0)
#define WORLDRAIDENTERBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0BD0)
#define WORLDRAIDENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FB0BE0)
#define WORLDRAIDENTERBATTLENETWORKTASK_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1FB0EC0)
#define WORLDRAIDENTERBATTLENETWORKTASK_GET_ISTICKET_OFFSET UNITYSDK_OFFSET(0x1FB0ED0)
#define WORLDRAIDENTERBATTLENETWORKTASK_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1FB0EE0)
#define WORLDRAIDENTERBATTLENETWORKTASK_GET_ECHELONID_OFFSET UNITYSDK_OFFSET(0x1FB0EF0)
#define WORLDRAIDENTERBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1FB0F00)
#define WORLDRAIDENTERBATTLENETWORKTASK_GET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1FB0F10)
#define WORLDRAIDENTERBATTLENETWORKTASK_SET_ISTICKET_OFFSET UNITYSDK_OFFSET(0x1FB0F20)
#define WORLDRAIDENTERBATTLENETWORKTASK_SET_ECHELONID_OFFSET UNITYSDK_OFFSET(0x1FB0F30)
#define WORLDRAIDENTERBATTLENETWORKTASK_SET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0x1FB0F40)
#define WORLDRAIDENTERBATTLENETWORKTASK_SET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1FB0F50)
#define WORLDRAIDENTERBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1FB0F60)
#define WORLDRAIDENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB0F70)
#define WORLDRAIDENTERBATTLENETWORKTASK__PROCESSSESSION_B__25_0_OFFSET UNITYSDK_OFFSET(0x1FB0F80)

	inline static constexpr unsigned int WorldRaidEnterBattleNetworkTask_TypeDefinitionIndex = 2895;

	class WorldRaidEnterBattleNetworkTask : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* LocalBossDB; // 0x40
		::System::Int64 _PhaseId_k__BackingField; // 0x48
		::System::Int32 _EchelonId_k__BackingField; // 0x50
		::System::Boolean _IsPractice_k__BackingField; // 0x54
		::System::Boolean _IsTicket_k__BackingField; // 0x55
		::System::Boolean _IsRetry_k__BackingField; // 0x56
		Il2CppObject* _AssistUseInfos_k__BackingField; // 0x58

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistUseInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_GET_ASSISTUSEINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_GET_ISTICKET_OFFSET))(nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_GET_ECHELONID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_GET_ISRETRY_OFFSET))(nullptr);
		}

		::System::Void set_IsTicket(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_SET_ISTICKET_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_SET_ECHELONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_SET_ASSISTUSEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_SET_ISRETRY_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__25_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLENETWORKTASK__PROCESSSESSION_B__25_0_OFFSET))(nullptr);
		}

	};

