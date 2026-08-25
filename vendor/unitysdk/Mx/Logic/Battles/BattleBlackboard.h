#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Battles { class BlackboardEntry; }
namespace MX::Logic::Battles { class BlackboardKey; }

#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_TRYMAKEKEY_OFFSET UNITYSDK_OFFSET(0x126D0B0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTRY_OFFSET UNITYSDK_OFFSET(0x126D3F0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTRY_OFFSET UNITYSDK_OFFSET(0x126D4D0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETORADDENTRY_OFFSET UNITYSDK_OFFSET(0x126D550)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETORADDENTRY_OFFSET UNITYSDK_OFFSET(0x126D5C0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_CLEARENTRY_OFFSET UNITYSDK_OFFSET(0x126D6C0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_CLEARENTRY_OFFSET UNITYSDK_OFFSET(0x126D780)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_HASKEY_OFFSET UNITYSDK_OFFSET(0x126D7F0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_HASKEY_OFFSET UNITYSDK_OFFSET(0x126D8B0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLONG_OFFSET UNITYSDK_OFFSET(0x126D920)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLONG_OFFSET UNITYSDK_OFFSET(0x126D9A0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_ADDLONG_OFFSET UNITYSDK_OFFSET(0x126D9E0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_ADDLONG_OFFSET UNITYSDK_OFFSET(0x126DA70)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETLONG_OFFSET UNITYSDK_OFFSET(0x126DAC0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETLONG_OFFSET UNITYSDK_OFFSET(0x126DBB0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMINLONG_OFFSET UNITYSDK_OFFSET(0x126DC50)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMINLONG_OFFSET UNITYSDK_OFFSET(0x126DD40)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMAXLONG_OFFSET UNITYSDK_OFFSET(0x126DDF0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMAXLONG_OFFSET UNITYSDK_OFFSET(0x126DEE0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_ISFULLLONG_OFFSET UNITYSDK_OFFSET(0x126DF90)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETVALUERANGE_OFFSET UNITYSDK_OFFSET(0x126E040)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETVALUERANGE_OFFSET UNITYSDK_OFFSET(0x126E0D0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_REGISTERCALLBACKONVALUELONGCHANGED_OFFSET UNITYSDK_OFFSET(0x126E110)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_REGISTERCALLBACKONVALUELONGCHANGED_OFFSET UNITYSDK_OFFSET(0x126E190)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_UNREGISTERCALLBACKONVALUELONGCHANGED_OFFSET UNITYSDK_OFFSET(0x126E1D0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_UNREGISTERCALLBACKONVALUELONGCHANGED_OFFSET UNITYSDK_OFFSET(0x126E2C0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETENTITYID_OFFSET UNITYSDK_OFFSET(0x126E370)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETENTITYID_OFFSET UNITYSDK_OFFSET(0x126E3F0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTITYID_OFFSET UNITYSDK_OFFSET(0x126E430)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTITYID_OFFSET UNITYSDK_OFFSET(0x126E5B0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLOCK_OFFSET UNITYSDK_OFFSET(0x126E6E0)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLOCK_OFFSET UNITYSDK_OFFSET(0x126E760)
#define MX_LOGIC_BATTLES_BATTLEBLACKBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x12586B0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleBlackboard_TypeDefinitionIndex = 13999;

	class BattleBlackboard : public Il2CppObject
	{
	public:
		Il2CppObject* blackboardEntries; // 0x10

		::System::Boolean TryMakeKey(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, ::MX::Logic::Battles::BlackboardKey&* arg4)
		{
			return ((::System::Boolean(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::MX::Logic::Battles::BlackboardKey&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_TRYMAKEKEY_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Battles::BlackboardEntry* GetEntry(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			return ((::MX::Logic::Battles::BlackboardEntry*(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTRY_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Battles::BlackboardEntry* GetEntry(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::MX::Logic::Battles::BlackboardEntry*(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTRY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::BlackboardEntry* GetOrAddEntry(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			return ((::MX::Logic::Battles::BlackboardEntry*(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETORADDENTRY_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Battles::BlackboardEntry* GetOrAddEntry(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::MX::Logic::Battles::BlackboardEntry*(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETORADDENTRY_OFFSET))(arg, nullptr);
		}

		::System::Void ClearEntry(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_CLEARENTRY_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void ClearEntry(::MX::Logic::Battles::BlackboardKey* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_CLEARENTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasKey(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			return ((::System::Boolean(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_HASKEY_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasKey(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_HASKEY_OFFSET))(arg, nullptr);
		}

		::System::Void SetLong(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLONG_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetLong(::MX::Logic::Battles::BlackboardKey* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLONG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLong(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_ADDLONG_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddLong(::MX::Logic::Battles::BlackboardKey* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_ADDLONG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLong(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			return ((::System::Int64(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETLONG_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetLong(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETLONG_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMinLong(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			return ((::System::Int64(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMINLONG_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetMinLong(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMINLONG_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMaxLong(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			return ((::System::Int64(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMAXLONG_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetMaxLong(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETMAXLONG_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFullLong(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_ISFULLLONG_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueRange(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETVALUERANGE_OFFSET))(str, arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetValueRange(::MX::Logic::Battles::BlackboardKey* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETVALUERANGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RegisterCallbackOnValueLongChanged(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_REGISTERCALLBACKONVALUELONGCHANGED_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RegisterCallbackOnValueLongChanged(::MX::Logic::Battles::BlackboardKey* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_REGISTERCALLBACKONVALUELONGCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UnregisterCallbackOnValueLongChanged(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_UNREGISTERCALLBACKONVALUELONGCHANGED_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void UnregisterCallbackOnValueLongChanged(::MX::Logic::Battles::BlackboardKey* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_UNREGISTERCALLBACKONVALUELONGCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEntityId(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, ::MX::Logic::BattleEntities::EntityId* arg4)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETENTITYID_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetEntityId(::MX::Logic::Battles::BlackboardKey* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETENTITYID_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* GetEntityId(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTITYID_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* GetEntityId(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_GETENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void SetLock(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLOCK_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetLock(::MX::Logic::Battles::BlackboardKey* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BlackboardKey*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_SETLOCK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEBLACKBOARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

