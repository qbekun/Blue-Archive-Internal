#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidDamageCollection; }
namespace MX::Logic::Data { class RaidMemberDescription; }

#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11E3C80)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x11E3C90)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_ACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x11E3CA0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_ACCOUNTNAME_OFFSET UNITYSDK_OFFSET(0x11E3CB0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x11E3CC0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x11E3CD0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_DAMAGEGIVEN_OFFSET UNITYSDK_OFFSET(0x11E1C90)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GETDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E23C0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_GROGGYGIVEN_OFFSET UNITYSDK_OFFSET(0x11E3CE0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GETGROGGY_OFFSET UNITYSDK_OFFSET(0x11E2780)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_DAMAGECOLLECTION_OFFSET UNITYSDK_OFFSET(0x11E3CF0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_DAMAGECOLLECTION_OFFSET UNITYSDK_OFFSET(0x11E3D00)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SHOULDSERIALIZEDAMAGECOLLECTION_OFFSET UNITYSDK_OFFSET(0x11E3D10)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E3D50)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E3E60)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E3DA0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E3EC0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x11E3EF0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x11E3FF0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_ADDDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E2A00)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SETDAMAGE_OFFSET UNITYSDK_OFFSET(0x11E2EC0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_ADDGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11E2C60)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SETGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x11E4000)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E41C0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E4230)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11E42F0)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11E3810)
#define MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11E32D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RaidMemberDescription_TypeDefinitionIndex = 13444;

	class RaidMemberDescription : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::String* _AccountName_k__BackingField; // 0x18
		::System::Int64 _CharacterId_k__BackingField; // 0x20
		::MX::Logic::Data::RaidDamageCollection* _DamageCollection_k__BackingField; // 0x28

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::String* get_AccountName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_ACCOUNTNAME_OFFSET))(nullptr);
		}

		::System::Void set_AccountName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_ACCOUNTNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DamageGiven()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_DAMAGEGIVEN_OFFSET))(nullptr);
		}

		::System::Int64 GetDamage(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GETDAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroggyGiven()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_GROGGYGIVEN_OFFSET))(nullptr);
		}

		::System::Int64 GetGroggy(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GETGROGGY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RaidDamageCollection* get_DamageCollection()
		{
			return ((::MX::Logic::Data::RaidDamageCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GET_DAMAGECOLLECTION_OFFSET))(nullptr);
		}

		::System::Void set_DamageCollection(::MX::Logic::Data::RaidDamageCollection* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidDamageCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SET_DAMAGECOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeDamageCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SHOULDSERIALIZEDAMAGECOLLECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_.CTOR_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::MX::Logic::Data::RaidMemberDescription* Clone(::MX::Logic::Data::RaidMemberDescription* arg)
		{
			return ((::MX::Logic::Data::RaidMemberDescription*(*)(::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_CLONE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RaidMemberDescription* Clone()
		{
			return ((::MX::Logic::Data::RaidMemberDescription*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_CLONE_OFFSET))(nullptr);
		}

		::System::Void AddDamage(::System::Int32 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_ADDDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDamage(::System::Int32 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SETDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroggyPoint(::System::Int32 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_ADDGROGGYPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetGroggyPoint(::System::Int32 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_SETGROGGYPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::RaidMemberDescription* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::RaidMemberDescription* arg, ::MX::Logic::Data::RaidMemberDescription* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidMemberDescription*, ::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::RaidMemberDescription* arg, ::MX::Logic::Data::RaidMemberDescription* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::RaidMemberDescription*, ::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RAIDMEMBERDESCRIPTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

