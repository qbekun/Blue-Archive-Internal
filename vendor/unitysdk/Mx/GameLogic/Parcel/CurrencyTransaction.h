#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class CurrencyValue; }
namespace FlatData { class ParcelType; }
namespace MX::GameLogic::Parcel { class CurrencyTransaction; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_CURRENCYVALUE_OFFSET UNITYSDK_OFFSET(0xFD1590)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFD15A0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFD15B0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_CURRENCYVALUES_OFFSET UNITYSDK_OFFSET(0xFD01D0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0xFD1660)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xFD1940)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GOLD_OFFSET UNITYSDK_OFFSET(0xFD1B00)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GEM_OFFSET UNITYSDK_OFFSET(0xFD1B90)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GEMBONUS_OFFSET UNITYSDK_OFFSET(0xFD1D30)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GEMPAID_OFFSET UNITYSDK_OFFSET(0xFD1DC0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xFD1E50)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ARENATICKET_OFFSET UNITYSDK_OFFSET(0xFD1EE0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_RAIDTICKET_OFFSET UNITYSDK_OFFSET(0xFD1F70)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONCHASERATICKET_OFFSET UNITYSDK_OFFSET(0xFD2000)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONCHASERBTICKET_OFFSET UNITYSDK_OFFSET(0xFD2090)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONCHASERCTICKET_OFFSET UNITYSDK_OFFSET(0xFD2120)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONFINDGIFTTICKET_OFFSET UNITYSDK_OFFSET(0xFD21B0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONBLOODTICKET_OFFSET UNITYSDK_OFFSET(0xFD2240)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ACADEMYTICKET_OFFSET UNITYSDK_OFFSET(0xFD22D0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONATICKET_OFFSET UNITYSDK_OFFSET(0xFD2360)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONBTICKET_OFFSET UNITYSDK_OFFSET(0xFD23F0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONCTICKET_OFFSET UNITYSDK_OFFSET(0xFD2480)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_TIMEATTACKDUNGEONTICKET_OFFSET UNITYSDK_OFFSET(0xFD2510)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_MASTERCOIN_OFFSET UNITYSDK_OFFSET(0xFD25A0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WORLDRAIDTICKETA_OFFSET UNITYSDK_OFFSET(0xFD2630)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WORLDRAIDTICKETB_OFFSET UNITYSDK_OFFSET(0xFD26C0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WORLDRAIDTICKETC_OFFSET UNITYSDK_OFFSET(0xFD2750)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_CHASERTOTALTICKET_OFFSET UNITYSDK_OFFSET(0xFD27E0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONTOTALTICKET_OFFSET UNITYSDK_OFFSET(0xFD2870)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETA_OFFSET UNITYSDK_OFFSET(0xFD2900)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETB_OFFSET UNITYSDK_OFFSET(0xFD2990)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETC_OFFSET UNITYSDK_OFFSET(0xFD2A20)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETD_OFFSET UNITYSDK_OFFSET(0xFD2AB0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD2B40)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD2C30)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD2D70)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD2DF0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD1910)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_SETVALUE_OFFSET UNITYSDK_OFFSET(0xFD2D00)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GETVALUE_OFFSET UNITYSDK_OFFSET(0xFD2E80)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xFD2EA0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFD3010)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xFD0120)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xFD3040)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xFD2F80)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xFD3120)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xFD32A0)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFD3420)
#define MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION__GET_PARCELINFOS_B__6_0_OFFSET UNITYSDK_OFFSET(0xFD35D0)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int CurrencyTransaction_TypeDefinitionIndex = 12428;

	class CurrencyTransaction : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::CurrencyValue* _currencyValue_k__BackingField; // 0x10

		::MX::GameLogic::Parcel::CurrencyValue* get_currencyValue()
		{
			return ((::MX::GameLogic::Parcel::CurrencyValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_CURRENCYVALUE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrencyValues()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_CURRENCYVALUES_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::CurrencyTransaction* get_Inverse()
		{
			return ((::MX::GameLogic::Parcel::CurrencyTransaction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_INVERSE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Int64 get_Gold()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GOLD_OFFSET))(nullptr);
		}

		::System::Int64 get_Gem()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GEM_OFFSET))(nullptr);
		}

		::System::Int64 get_GemBonus()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GEMBONUS_OFFSET))(nullptr);
		}

		::System::Int64 get_GemPaid()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_GEMPAID_OFFSET))(nullptr);
		}

		::System::Int64 get_ActionPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ACTIONPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ArenaTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ARENATICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_RAIDTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonChaserATicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONCHASERATICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonChaserBTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONCHASERBTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonChaserCTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONCHASERCTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonFindGiftTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONFINDGIFTTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonBloodTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WEEKDUNGEONBLOODTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_AcademyTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ACADEMYTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonATicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONATICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonBTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONBTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonCTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONCTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeAttackDungeonTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_TIMEATTACKDUNGEONTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_MasterCoin()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_MASTERCOIN_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidTicketA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WORLDRAIDTICKETA_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidTicketB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WORLDRAIDTICKETB_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidTicketC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_WORLDRAIDTICKETC_OFFSET))(nullptr);
		}

		::System::Int64 get_ChaserTotalTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_CHASERTOTALTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonTotalTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_SCHOOLDUNGEONTOTALTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETA_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETB_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETC_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketD()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GET_ELIMINATETICKETD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::CurrencyTransaction* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::CurrencyValue* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_SETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetValue(::FlatData::CurrencyTypes* arg)
		{
			return ((::System::Int64(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::Parcel::CurrencyTransaction* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::Parcel::CurrencyTransaction* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::Parcel::CurrencyTransaction* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::CurrencyTransaction* op_Addition(::MX::GameLogic::Parcel::CurrencyTransaction* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2)
		{
			return ((::MX::GameLogic::Parcel::CurrencyTransaction*(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::CurrencyTransaction* op_Subtraction(::MX::GameLogic::Parcel::CurrencyTransaction* arg, ::MX::GameLogic::Parcel::CurrencyTransaction* arg2)
		{
			return ((::MX::GameLogic::Parcel::CurrencyTransaction*(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION_TOSTRING_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* _get_ParcelInfos_b__6_0(Il2CppObject* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYTRANSACTION__GET_PARCELINFOS_B__6_0_OFFSET))(arg, nullptr);
		}

	};
}

