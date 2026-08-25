#pragma once
#include "unitysdk.h"

namespace FlatData { class Difficulty; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDCREATEBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8BF30)
#define RAIDCREATEBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F8BF40)
#define RAIDCREATEBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F8BF50)
#define RAIDCREATEBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8BF60)
#define RAIDCREATEBATTLENETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F8BF70)
#define RAIDCREATEBATTLENETWORKTASK_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1F8BF80)
#define RAIDCREATEBATTLENETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F8BF90)
#define RAIDCREATEBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F8BFA0)
#define RAIDCREATEBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F8BFB0)
#define RAIDCREATEBATTLENETWORKTASK_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F8BFC0)
#define RAIDCREATEBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8BFD0)
#define RAIDCREATEBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8BFE0)
#define RAIDCREATEBATTLENETWORKTASK_SET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1F8C070)
#define RAIDCREATEBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8C080)
#define RAIDCREATEBATTLENETWORKTASK__PROCESSSESSION_B__24_0_OFFSET UNITYSDK_OFFSET(0x1F8C3C0)
#define RAIDCREATEBATTLENETWORKTASK_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F8C3D0)
#define RAIDCREATEBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C3E0)

	inline static constexpr unsigned int RaidCreateBattleNetworkTask_TypeDefinitionIndex = 2682;

	class RaidCreateBattleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x40
		::FlatData::Difficulty* _Difficulty_k__BackingField; // 0x48
		::System::Boolean _IsPublic_k__BackingField; // 0x4C
		::System::Int32 _EchelonNumber_k__BackingField; // 0x50
		::System::Boolean _IsPractice_k__BackingField; // 0x54
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x58

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Difficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_GET_ISPUBLIC_OFFSET))(nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return ((::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_IsPublic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_SET_ISPUBLIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__24_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK__PROCESSSESSION_B__24_0_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCREATEBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

