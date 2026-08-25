#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentChangePieceInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define EQUIPMENTEQUIPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5F8B0)
#define EQUIPMENTEQUIPNETWORKTASK_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x1F5F940)
#define EQUIPMENTEQUIPNETWORKTASK_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F5F950)
#define EQUIPMENTEQUIPNETWORKTASK_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x1F5F960)
#define EQUIPMENTEQUIPNETWORKTASK_SET_CHANGEPIECEINFO_OFFSET UNITYSDK_OFFSET(0x1F5F970)
#define EQUIPMENTEQUIPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5F980)
#define EQUIPMENTEQUIPNETWORKTASK_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1F5FCE0)
#define EQUIPMENTEQUIPNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F5FCF0)
#define EQUIPMENTEQUIPNETWORKTASK_SET_EQUIPSERVERID_OFFSET UNITYSDK_OFFSET(0x1F5FD00)
#define EQUIPMENTEQUIPNETWORKTASK_GET_EQUIPSERVERID_OFFSET UNITYSDK_OFFSET(0x1F5FD10)
#define EQUIPMENTEQUIPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5FD20)
#define EQUIPMENTEQUIPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5FD30)
#define EQUIPMENTEQUIPNETWORKTASK_GET_CHANGEPIECEINFO_OFFSET UNITYSDK_OFFSET(0x1F5FD40)

	inline static constexpr unsigned int EquipmentEquipNetworkTask_TypeDefinitionIndex = 2388;

	class EquipmentEquipNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x40
		::System::Int32 _Slot_k__BackingField; // 0x48
		::System::Int64 _EquipServerId_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EquipmentChangePieceInfo* _ChangePieceInfo_k__BackingField; // 0x58

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Slot(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_SET_SLOT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 get_Slot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_GET_SLOT_OFFSET))(nullptr);
		}

		::System::Void set_ChangePieceInfo(::MX::GameLogic::DBModel::EquipmentChangePieceInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentChangePieceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_SET_CHANGEPIECEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_EquipServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_SET_EQUIPSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EquipServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_GET_EQUIPSERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentChangePieceInfo* get_ChangePieceInfo()
		{
			return ((::MX::GameLogic::DBModel::EquipmentChangePieceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTEQUIPNETWORKTASK_GET_CHANGEPIECEINFO_OFFSET))(nullptr);
		}

	};

