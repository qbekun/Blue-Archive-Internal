#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class Subscriber; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_DISPATCH_DISPATCHHUB_CLEAR_OFFSET UNITYSDK_OFFSET(0xEC8080)
#define MXFIELD_DISPATCH_DISPATCHHUB_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEC80D0)
#define MXFIELD_DISPATCH_DISPATCHHUB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC8280)
#define MXFIELD_DISPATCH_DISPATCHHUB_PUBLISH_OFFSET UNITYSDK_OFFSET(0xEC8300)
#define MXFIELD_DISPATCH_DISPATCHHUB_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEC8450)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int DispatchHub_TypeDefinitionIndex = 10890;

	class DispatchHub : public Il2CppObject
	{
	public:
		Il2CppObject* subscribers; // 0x10

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHHUB_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Unsubscribe(::MXField::Dispatch::Subscriber* arg)
		{
			((::System::Void(*)(::MXField::Dispatch::Subscriber*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHHUB_UNSUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHHUB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Publish(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Int32(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHHUB_PUBLISH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Subscribe(::MXField::Dispatch::Subscriber* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::Subscriber*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHHUB_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

	};
}

