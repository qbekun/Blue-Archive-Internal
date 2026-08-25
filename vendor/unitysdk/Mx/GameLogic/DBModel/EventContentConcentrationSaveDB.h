#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentConcentrationCardDB; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_SET_CARDDBS_OFFSET UNITYSDK_OFFSET(0xFFD0B0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_CREATECARDDBARRAY_OFFSET UNITYSDK_OFFSET(0xFFD0C0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB__CREATECARDDBARRAY_G__GETORCREATE|12_0_OFFSET UNITYSDK_OFFSET(0xFFD3B0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFD540)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_GET_FLIPCOUNT_OFFSET UNITYSDK_OFFSET(0xFFD550)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_GET_CARDDBS_OFFSET UNITYSDK_OFFSET(0xFFD560)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_SET_FLIPCOUNT_OFFSET UNITYSDK_OFFSET(0xFFD570)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFD580)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFD590)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentConcentrationSaveDB_TypeDefinitionIndex = 12607;

	class EventContentConcentrationSaveDB : public Il2CppObject
	{
	public:
		::System::Int32 _FlipCount_k__BackingField; // 0x10
		::System::Int32 _Round_k__BackingField; // 0x14
		Il2CppObject* _CardDBs_k__BackingField; // 0x18

		::System::Void set_CardDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_SET_CARDDBS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCardDBArray(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_CREATECARDDBARRAY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationCardDB* _CreateCardDBArray_g__GetOrCreate|12_0(::System::Int32 arg, ::System::Int32 arg2, <>c__DisplayClass12_0&* arg3)
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationCardDB*(*)(::System::Int32, ::System::Int32, <>c__DisplayClass12_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB__CREATECARDDBARRAY_G__GETORCREATE|12_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_FlipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_GET_FLIPCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_CardDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_GET_CARDDBS_OFFSET))(nullptr);
		}

		::System::Void set_FlipCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_SET_FLIPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCONCENTRATIONSAVEDB_SET_ROUND_OFFSET))(arg, nullptr);
		}

	};
}

