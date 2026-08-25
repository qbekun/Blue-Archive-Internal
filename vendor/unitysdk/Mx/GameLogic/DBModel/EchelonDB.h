#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
class EchelonStatusFlag;
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::Campaign { class HexaUnit; }

#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFF66A0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFF66B0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFF66C0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFF66D0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0xFF66E0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0xFF66F0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFF6700)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xFF6710)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_LEADERSERVERID_OFFSET UNITYSDK_OFFSET(0xFF6720)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_LEADERSERVERID_OFFSET UNITYSDK_OFFSET(0xFF6730)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_MAINSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xFF6740)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_SUPPORTSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xFF6760)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_MAINSLOTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFF6780)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_MAINSLOTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFF6790)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_TRYRESETMAIN_OFFSET UNITYSDK_OFFSET(0xFF67A0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_SUPPORTSLOTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFF69E0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_SUPPORTSLOTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFF69F0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_TRYRESETSUPPORT_OFFSET UNITYSDK_OFFSET(0xFF6A00)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0xFF6C40)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0xFF6C50)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_USINGFLAG_OFFSET UNITYSDK_OFFSET(0xFF6C60)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_USINGFLAG_OFFSET UNITYSDK_OFFSET(0xFF6C70)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ISUSING_OFFSET UNITYSDK_OFFSET(0xFF6C80)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ALLCHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFE8DA0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ALLCHARACTERWITHOUTTSSSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFF6C90)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ALLCHARACTERWITHEMPTYSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFF6EC0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_BATTLECHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFF6F20)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0xFF7050)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0xFF7060)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFF7070)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFF7080)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF7090)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF7180)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEE390)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF7380)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF7CB0)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_CONTAINSCHARACTER_OFFSET UNITYSDK_OFFSET(0xFF7F10)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GETSTRATEGYLEADERCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFF7F70)
#define MX_GAMELOGIC_DBMODEL_ECHELONDB_GETCHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0xFF7F80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EchelonDB_TypeDefinitionIndex = 12583;

	class EchelonDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x10
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x18
		::System::Int64 _EchelonNumber_k__BackingField; // 0x20
		::FlatData::EchelonExtensionType* _ExtensionType_k__BackingField; // 0x28
		::System::Int64 _LeaderServerId_k__BackingField; // 0x30
		Il2CppObject* _MainSlotServerIds_k__BackingField; // 0x38
		Il2CppObject* _SupportSlotServerIds_k__BackingField; // 0x40
		::System::Int64 _TSSInteractionServerId_k__BackingField; // 0x48
		EchelonStatusFlag* _UsingFlag_k__BackingField; // 0x50
		Il2CppObject* _SkillCardMulliganCharacterIds_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _CombatStyleIndex_k__BackingField; // 0x60

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_EXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LeaderServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_LEADERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_LeaderServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_LEADERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MainSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_MAINSLOTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_SupportSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_SUPPORTSLOTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_MainSlotServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_MAINSLOTSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void set_MainSlotServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_MAINSLOTSERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResetMain(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_TRYRESETMAIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SupportSlotServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_SUPPORTSLOTSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void set_SupportSlotServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_SUPPORTSLOTSERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryResetSupport(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_TRYRESETSUPPORT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_TSSINTERACTIONSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_TSSINTERACTIONSERVERID_OFFSET))(arg, nullptr);
		}

		EchelonStatusFlag* get_UsingFlag()
		{
			return ((EchelonStatusFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_USINGFLAG_OFFSET))(nullptr);
		}

		::System::Void set_UsingFlag(EchelonStatusFlag* arg)
		{
			((::System::Void(*)(EchelonStatusFlag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_USINGFLAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ISUSING_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllCharacterServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ALLCHARACTERSERVERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllCharacterWithoutTSSServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ALLCHARACTERWITHOUTTSSSERVERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllCharacterWithEmptyServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_ALLCHARACTERWITHEMPTYSERVERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_BattleCharacterServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_BATTLECHARACTERSERVERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_SkillCardMulliganCharacterIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardMulliganCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_SKILLCARDMULLIGANCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CombatStyleIndex()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::FlatData::EchelonExtensionType* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::FlatData::EchelonType* arg2, ::System::Int64 arg3, ::FlatData::EchelonExtensionType* arg4, ::MX::GameLogic::DBModel::EchelonPresetDB* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::EchelonType*, ::System::Int64, ::FlatData::EchelonExtensionType*, ::MX::GameLogic::DBModel::EchelonPresetDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg2, ::FlatData::EchelonType* arg3, ::FlatData::EchelonExtensionType* arg4, ::System::Int64 arg5, ::System::Int64 arg6, Il2CppObject* arg7, Il2CppObject* arg8, Il2CppObject* arg9, ::Il2CppArray<::System::Object*>* arg10)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int64, ::System::Int64, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Boolean ContainsCharacter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_CONTAINSCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetStrategyLeaderCharacterServerId(::MX::Campaign::HexaUnit* arg)
		{
			return ((::System::Int64(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GETSTRATEGYLEADERCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCharacterIndex(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ECHELONDB_GETCHARACTERINDEX_OFFSET))(arg, nullptr);
		}

	};
}

