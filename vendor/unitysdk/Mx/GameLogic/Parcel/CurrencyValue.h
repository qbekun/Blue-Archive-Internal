#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class CurrencyValue; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0xFD37B0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_SET_VALUES_OFFSET UNITYSDK_OFFSET(0xFD37C0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_TICKETS_OFFSET UNITYSDK_OFFSET(0xFD37D0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0xFD3AD0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GOLD_OFFSET UNITYSDK_OFFSET(0xFCE070)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GEM_OFFSET UNITYSDK_OFFSET(0xFD1BB0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GEMBONUS_OFFSET UNITYSDK_OFFSET(0xFCE240)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GEMPAID_OFFSET UNITYSDK_OFFSET(0xFCE2C0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xFCE3D0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ARENATICKET_OFFSET UNITYSDK_OFFSET(0xFCE4E0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_RAIDTICKET_OFFSET UNITYSDK_OFFSET(0xFCE5F0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONCHASERATICKET_OFFSET UNITYSDK_OFFSET(0xFCE700)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONCHASERBTICKET_OFFSET UNITYSDK_OFFSET(0xFCE810)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONCHASERCTICKET_OFFSET UNITYSDK_OFFSET(0xFCE920)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONFINDGIFTTICKET_OFFSET UNITYSDK_OFFSET(0xFCEA30)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONBLOODTICKET_OFFSET UNITYSDK_OFFSET(0xFCEB40)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ACADEMYTICKET_OFFSET UNITYSDK_OFFSET(0xFCEC50)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONATICKET_OFFSET UNITYSDK_OFFSET(0xFCED60)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONBTICKET_OFFSET UNITYSDK_OFFSET(0xFCEE70)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONCTICKET_OFFSET UNITYSDK_OFFSET(0xFCEF80)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_TIMEATTACKDUNGEONTICKET_OFFSET UNITYSDK_OFFSET(0xFCF090)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_MASTERCOIN_OFFSET UNITYSDK_OFFSET(0xFCF1A0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WORLDRAIDTICKETA_OFFSET UNITYSDK_OFFSET(0xFCF2B0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WORLDRAIDTICKETB_OFFSET UNITYSDK_OFFSET(0xFCF3C0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WORLDRAIDTICKETC_OFFSET UNITYSDK_OFFSET(0xFCF4D0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_CHASERTOTALTICKET_OFFSET UNITYSDK_OFFSET(0xFCF5E0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONTOTALTICKET_OFFSET UNITYSDK_OFFSET(0xFCF6F0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETA_OFFSET UNITYSDK_OFFSET(0xFCF800)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETB_OFFSET UNITYSDK_OFFSET(0xFCF910)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETC_OFFSET UNITYSDK_OFFSET(0xFCFA20)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETD_OFFSET UNITYSDK_OFFSET(0xFCFB30)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_CAFESUMMONTICKET1_OFFSET UNITYSDK_OFFSET(0xFD3DD0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_CAFESUMMONTICKET2_OFFSET UNITYSDK_OFFSET(0xFD3E50)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD2BB0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCFC50)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_CREATEINVERSE_OFFSET UNITYSDK_OFFSET(0xFD16E0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xFD1960)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GETVALUE_OFFSET UNITYSDK_OFFSET(0xFD01F0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_SETVALUE_OFFSET UNITYSDK_OFFSET(0xFD0EF0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_ISSCHOOLDUNGEONTICKETREWARD_OFFSET UNITYSDK_OFFSET(0xFD3ED0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xFD3F80)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFD46A0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xFD30F0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xFD5670)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xFD4000)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFD5700)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xFD3230)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xFD33B0)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_ADD_OFFSET UNITYSDK_OFFSET(0xFD5890)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_SUBTRACT_OFFSET UNITYSDK_OFFSET(0xFD5B00)
#define MX_GAMELOGIC_PARCEL_CURRENCYVALUE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xFD5D70)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int CurrencyValue_TypeDefinitionIndex = 12430;

	class CurrencyValue : public Il2CppObject
	{
	public:
		Il2CppObject* _Values_k__BackingField; // 0x10
		Il2CppObject* DBCurrencyTypes; // 0x0
		Il2CppObject* DBPropertyCurrencyTypes; // 0x8
		Il2CppObject* DBTicketCurrencyTypes; // 0x10
		Il2CppObject* ValidCurrencyTypes; // 0x18
		Il2CppObject* WorldRaidTickets; // 0x20
		Il2CppObject* BILogCurrencyTypes; // 0x28

		Il2CppObject* get_Values()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void set_Values(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_SET_VALUES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tickets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_TICKETS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Property()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_PROPERTY_OFFSET))(nullptr);
		}

		::System::Int64 get_Gold()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GOLD_OFFSET))(nullptr);
		}

		::System::Int64 get_Gem()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GEM_OFFSET))(nullptr);
		}

		::System::Int64 get_GemBonus()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GEMBONUS_OFFSET))(nullptr);
		}

		::System::Int64 get_GemPaid()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_GEMPAID_OFFSET))(nullptr);
		}

		::System::Int64 get_ActionPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ACTIONPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ArenaTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ARENATICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_RAIDTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonChaserATicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONCHASERATICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonChaserBTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONCHASERBTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonChaserCTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONCHASERCTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonFindGiftTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONFINDGIFTTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_WeekDungeonBloodTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WEEKDUNGEONBLOODTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_AcademyTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ACADEMYTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonATicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONATICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonBTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONBTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonCTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONCTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeAttackDungeonTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_TIMEATTACKDUNGEONTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_MasterCoin()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_MASTERCOIN_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidTicketA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WORLDRAIDTICKETA_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidTicketB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WORLDRAIDTICKETB_OFFSET))(nullptr);
		}

		::System::Int64 get_WorldRaidTicketC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_WORLDRAIDTICKETC_OFFSET))(nullptr);
		}

		::System::Int64 get_ChaserTotalTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_CHASERTOTALTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_SchoolDungeonTotalTicket()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_SCHOOLDUNGEONTOTALTICKET_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETA_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETB_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETC_OFFSET))(nullptr);
		}

		::System::Int64 get_EliminateTicketD()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ELIMINATETICKETD_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeSummonTicket1()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_CAFESUMMONTICKET1_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeSummonTicket2()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_CAFESUMMONTICKET2_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::CurrencyValue* CreateInverse()
		{
			return ((::MX::GameLogic::Parcel::CurrencyValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_CREATEINVERSE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Int64 GetValue(::FlatData::CurrencyTypes* arg)
		{
			return ((::System::Int64(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_SETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSchoolDungeonTicketReward(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_ISSCHOOLDUNGEONTICKETREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::Parcel::CurrencyValue* arg, ::MX::GameLogic::Parcel::CurrencyValue* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::Parcel::CurrencyValue* arg, ::MX::GameLogic::Parcel::CurrencyValue* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::Parcel::CurrencyValue* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::CurrencyValue* op_Addition(::MX::GameLogic::Parcel::CurrencyValue* arg, ::MX::GameLogic::Parcel::CurrencyValue* arg2)
		{
			return ((::MX::GameLogic::Parcel::CurrencyValue*(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::CurrencyValue* op_Subtraction(::MX::GameLogic::Parcel::CurrencyValue* arg, ::MX::GameLogic::Parcel::CurrencyValue* arg2)
		{
			return ((::MX::GameLogic::Parcel::CurrencyValue*(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::GameLogic::Parcel::CurrencyValue* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Subtract(::MX::GameLogic::Parcel::CurrencyValue* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencyValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_SUBTRACT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CURRENCYVALUE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

