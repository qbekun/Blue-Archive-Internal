#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETLONG_OFFSET UNITYSDK_OFFSET(0x126CB70)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_REGISTERCALLBACKONVALUELONGCHANGED_OFFSET UNITYSDK_OFFSET(0x126CC80)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_ISFULLLONG_OFFSET UNITYSDK_OFFSET(0x126CD20)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETMINLONG_OFFSET UNITYSDK_OFFSET(0x126CD30)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETMINLONG_OFFSET UNITYSDK_OFFSET(0x126CE50)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_UNREGISTERCALLBACKONVALUELONGCHANGED_OFFSET UNITYSDK_OFFSET(0x126CE60)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETVALUERANGE_OFFSET UNITYSDK_OFFSET(0x126CF00)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETLONG_OFFSET UNITYSDK_OFFSET(0x126CF10)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETENTITYID_OFFSET UNITYSDK_OFFSET(0x126CF20)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETENTITYID_OFFSET UNITYSDK_OFFSET(0x126CF30)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETLOCK_OFFSET UNITYSDK_OFFSET(0x126CF40)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x126CF50)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETMAXLONG_OFFSET UNITYSDK_OFFSET(0x126CF70)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_ADDLONG_OFFSET UNITYSDK_OFFSET(0x126CF80)
#define MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETMAXLONG_OFFSET UNITYSDK_OFFSET(0x126CF90)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BlackboardEntry_TypeDefinitionIndex = 13998;

	class BlackboardEntry : public Il2CppObject
	{
	public:
		::System::Int64 valueLong; // 0x10
		::System::Int64 minValueLong; // 0x18
		::System::Int64 maxValueLong; // 0x20
		Il2CppObject* onValueLongChanged; // 0x28
		::MX::Logic::BattleEntities::EntityId* valueEntityId; // 0x30
		::System::Boolean isLocked; // 0x34

		::System::Void SetLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETLONG_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCallbackOnValueLongChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_REGISTERCALLBACKONVALUELONGCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFullLong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_ISFULLLONG_OFFSET))(nullptr);
		}

		::System::Void SetMinLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETMINLONG_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMinLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETMINLONG_OFFSET))(nullptr);
		}

		::System::Void UnregisterCallbackOnValueLongChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_UNREGISTERCALLBACKONVALUELONGCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueRange(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETVALUERANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETLONG_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* GetEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETENTITYID_OFFSET))(nullptr);
		}

		::System::Void SetEntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void SetLock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 GetMaxLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_GETMAXLONG_OFFSET))(nullptr);
		}

		::System::Void AddLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_ADDLONG_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDENTRY_SETMAXLONG_OFFSET))(arg, nullptr);
		}

	};
}

