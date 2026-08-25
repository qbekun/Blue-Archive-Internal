#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1012450)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_LOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x1012460)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1012470)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0x1012480)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1012490)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x10124A0)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_LOCALIZETEXT_OFFSET UNITYSDK_OFFSET(0x10124B0)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x10124C0)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x10124D0)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x10124E0)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_TOASTID_OFFSET UNITYSDK_OFFSET(0x10124F0)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1012500)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1012510)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_SET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0x1012520)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1012530)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_TOASTID_OFFSET UNITYSDK_OFFSET(0x1012540)
#define MX_GAMELOGIC_DBMODEL_TOASTDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1012550)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ToastDB_TypeDefinitionIndex = 12746;

	class ToastDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::String* _Text_k__BackingField; // 0x18
		Il2CppObject* _LocalizeText_k__BackingField; // 0x20
		::System::String* _ToastId_k__BackingField; // 0x28
		::System::DateTime* _BeginDate_k__BackingField; // 0x30
		::System::DateTime* _EndDate_k__BackingField; // 0x38
		::System::Int32 _LifeTime_k__BackingField; // 0x40
		::System::Int32 _Delay_k__BackingField; // 0x44

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeText(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_LOCALIZETEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LifeTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_LIFETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_BeginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_BEGINDATE_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LocalizeText()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_LOCALIZETEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void set_LifeTime(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_LIFETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_ToastId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_TOASTID_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Delay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BeginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_SET_BEGINDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ToastId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_TOASTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_TOASTDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

