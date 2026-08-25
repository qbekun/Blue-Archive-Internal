#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F5A600)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F5A610)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F5A620)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A630)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5A640)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F5A6D0)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F5A6E0)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F5A6F0)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F5A700)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F5A710)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F5A720)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5A730)
#define ELIMINATERAIDCREATEBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5A740)

	inline static constexpr unsigned int EliminateRaidCreateBattleNetworkTask_TypeDefinitionIndex = 2355;

	class EliminateRaidCreateBattleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x40
		::System::Int32 _EchelonNumber_k__BackingField; // 0x48
		::System::Boolean _IsPractice_k__BackingField; // 0x4C
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x50

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDCREATEBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

