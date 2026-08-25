#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntityType; }

#define MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x118E810)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_PARSE_OFFSET UNITYSDK_OFFSET(0x118E860)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x118E8C0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_CLONE_OFFSET UNITYSDK_OFFSET(0x118EA00)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x118EA10)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x118EA60)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x118EAB0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_.CTOR_OFFSET UNITYSDK_OFFSET(0x118EAC0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_.CTOR_OFFSET UNITYSDK_OFFSET(0x118EAD0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x118EAE0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x118EC00)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x118ECC0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x118ED80)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x118E590)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x118EEB0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x118EF70)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x118D6D0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x118F030)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_EQUALS_OFFSET UNITYSDK_OFFSET(0x118E7C0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_EQUALS_OFFSET UNITYSDK_OFFSET(0x118F0E0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x118E6B0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x118F1A0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x118F260)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EntityId_TypeDefinitionIndex = 13269;

	class EntityId : public Il2CppObject
	{
	public:
		::System::UInt32 typeMask; // 0x0
		::System::Int32 instanceIdMask; // 0x0
		::MX::Logic::BattleEntities::EntityId* _Invalid_k__BackingField; // 0x0
		::System::Int32 uniqueId; // 0x10

		::MX::Logic::BattleEntities::EntityId* get_Invalid()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_INVALID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* Parse(::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_PARSE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::MX::Logic::BattleEntities::EntityId&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* Clone(::System::Int32 arg)
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_CLONE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntityType* get_EntityType()
		{
			return ((::MX::Logic::BattleEntities::BattleEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_ENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_InstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_INSTANCEID_OFFSET))(nullptr);
		}

		::System::Int32 get_UniqueId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntityType* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntityType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean op_LessThan(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYID_.CCTOR_OFFSET))(nullptr);
		}

	};
}

