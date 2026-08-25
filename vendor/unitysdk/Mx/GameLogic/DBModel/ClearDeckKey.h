#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class ClearDeckKey; }

#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEC1E0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEC1F0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0xFEC200)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0xFEC210)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEC220)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_WORLDRAID_OFFSET UNITYSDK_OFFSET(0xFEC240)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_INTERACTIVEWORLDRAID_OFFSET UNITYSDK_OFFSET(0xFEC2E0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_TIMEATTACKDUNGEON_OFFSET UNITYSDK_OFFSET(0xFEC380)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_EVENTCONTENTCHALLENGEMAINGROUND_OFFSET UNITYSDK_OFFSET(0xFEC410)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_WEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xFEC4A0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_CHASER_OFFSET UNITYSDK_OFFSET(0xFEC520)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_SCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xFEC5A0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_FIELDCONTENTSTAGE_OFFSET UNITYSDK_OFFSET(0xFEC620)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_MULTIFLOORRAID_OFFSET UNITYSDK_OFFSET(0xFEC6B0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_PERMANENTRAID_OFFSET UNITYSDK_OFFSET(0xFEC740)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xFEC7C0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xFEC8A0)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xFEC910)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xFEC830)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFEC9D0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClearDeckKey_TypeDefinitionIndex = 12526;

	class ClearDeckKey : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Arguments_k__BackingField; // 0x18

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Arguments()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		::System::Void set_Arguments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_SET_ARGUMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* WorldRaid(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_WORLDRAID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* InteractiveWorldRaid(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_INTERACTIVEWORLDRAID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* TimeAttackDungeon(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_TIMEATTACKDUNGEON_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* EventContentChallengeMainGround(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_EVENTCONTENTCHALLENGEMAINGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* WeekDungeon(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_WEEKDUNGEON_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* Chaser(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_CHASER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* SchoolDungeon(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_SCHOOLDUNGEON_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* FieldContentStage(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_FIELDCONTENTSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* MultiFloorRaid(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_MULTIFLOORRAID_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* PermanentRaid(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_PERMANENTRAID_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::DBModel::ClearDeckKey* arg, ::MX::GameLogic::DBModel::ClearDeckKey* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::DBModel::ClearDeckKey* arg, ::MX::GameLogic::DBModel::ClearDeckKey* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::ClearDeckKey* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKKEY_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

