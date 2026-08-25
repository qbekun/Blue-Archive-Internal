#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class FieldDispatcher; }
namespace MXField::Dispatch { class DispatchHub; }
namespace MXField::Dispatch { class Subscriber; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_DISPATCH_FIELDDISPATCHER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEB1CE0)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC88E0)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0xEC8950)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_CLEAR_OFFSET UNITYSDK_OFFSET(0xEC8A40)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_PUBLISH_OFFSET UNITYSDK_OFFSET(0xEB1AC0)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEC8A90)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEB1B80)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEC8BB0)
#define MXFIELD_DISPATCH_FIELDDISPATCHER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEC8C00)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int FieldDispatcher_TypeDefinitionIndex = 10898;

	class FieldDispatcher : public Il2CppObject
	{
	public:
		::MXField::Dispatch::FieldDispatcher* _Instance_k__BackingField; // 0x0
		::MXField::Dispatch::DispatchHub* dispatchHub; // 0x18

		::System::Void Subscribe(::MXField::Dispatch::Subscriber* arg)
		{
			((::System::Void(*)(::MXField::Dispatch::Subscriber*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 Publish(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Int32(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_PUBLISH_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Unsubscribe(::MXField::Dispatch::Subscriber* arg)
		{
			((::System::Void(*)(::MXField::Dispatch::Subscriber*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_UNSUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Instance(::MXField::Dispatch::FieldDispatcher* arg)
		{
			((::System::Void(*)(::MXField::Dispatch::FieldDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_SET_INSTANCE_OFFSET))(arg, nullptr);
		}

		::MXField::Dispatch::FieldDispatcher* get_Instance()
		{
			return ((::MXField::Dispatch::FieldDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDDISPATCHER_GET_INSTANCE_OFFSET))(nullptr);
		}

	};
}

