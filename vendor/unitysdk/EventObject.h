#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventRewardIncreaseDB; }
namespace FlatData { class EventTargetType; }

#define EVENTOBJECT_GET_PERSUBEVENTCHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1D1B890)
#define EVENTOBJECT_GET_PERSUBEVENT_OFFSET UNITYSDK_OFFSET(0x1D1B8A0)
#define EVENTOBJECT_SET_PERSUBEVENTCHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1D1B8B0)
#define EVENTOBJECT_SYNCEVENTREWARDINCREASE_OFFSET UNITYSDK_OFFSET(0x1D1B8C0)
#define EVENTOBJECT_GET_SHOWSUBEVENTITEMREWARD_OFFSET UNITYSDK_OFFSET(0x1D1BE80)
#define EVENTOBJECT_GETACTIVATEDEVENTREWARDINCREASETYPES_OFFSET UNITYSDK_OFFSET(0x1D1BE90)
#define EVENTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C0A0)
#define EVENTOBJECT_SET_SHOWSUBEVENTITEMREWARD_OFFSET UNITYSDK_OFFSET(0x1D1C120)
#define EVENTOBJECT_GETSUBEVENTCOSTITEMID_OFFSET UNITYSDK_OFFSET(0x1D1C130)
#define EVENTOBJECT_SUBEVENTREWARDCHECK_OFFSET UNITYSDK_OFFSET(0x1D1C1F0)
#define EVENTOBJECT_GETACTIVATEDEVENTREWARDINCREASE_OFFSET UNITYSDK_OFFSET(0x1D1C4C0)
#define EVENTOBJECT_ISREWARDINCREASEEVENTOPEN_OFFSET UNITYSDK_OFFSET(0x1D1C640)
#define EVENTOBJECT_SET_PERSUBEVENT_OFFSET UNITYSDK_OFFSET(0x1D1C690)

	inline static constexpr unsigned int EventObject_TypeDefinitionIndex = 1655;

	class EventObject : public Il2CppObject
	{
	public:
		Il2CppObject* eventRewardIncreaseDict; // 0x10
		::System::Boolean _PerSubEvent_k__BackingField; // 0x18
		::System::Boolean _ShowSubEventItemReward_k__BackingField; // 0x19
		::System::Int64 _PerSubEventChangeCount_k__BackingField; // 0x20

		::System::Int64 get_PerSubEventChangeCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_GET_PERSUBEVENTCHANGECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_PerSubEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_GET_PERSUBEVENT_OFFSET))(nullptr);
		}

		::System::Void set_PerSubEventChangeCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_SET_PERSUBEVENTCHANGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SyncEventRewardIncrease(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_SYNCEVENTREWARDINCREASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowSubEventItemReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_GET_SHOWSUBEVENTITEMREWARD_OFFSET))(nullptr);
		}

		Il2CppObject* GetActivatedEventRewardIncreaseTypes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_GETACTIVATEDEVENTREWARDINCREASETYPES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShowSubEventItemReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_SET_SHOWSUBEVENTITEMREWARD_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetSubEventCostItemId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_GETSUBEVENTCOSTITEMID_OFFSET))(arg, nullptr);
		}

		::System::Void SubEventRewardCheck(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_SUBEVENTREWARDCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EventRewardIncreaseDB* GetActivatedEventRewardIncrease(::FlatData::EventTargetType* arg)
		{
			return ((::MX::GameLogic::DBModel::EventRewardIncreaseDB*(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_GETACTIVATEDEVENTREWARDINCREASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRewardIncreaseEventOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_ISREWARDINCREASEEVENTOPEN_OFFSET))(nullptr);
		}

		::System::Void set_PerSubEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTOBJECT_SET_PERSUBEVENT_OFFSET))(arg, nullptr);
		}

	};

