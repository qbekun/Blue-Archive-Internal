#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class DispatchDelegate; }
namespace UnityEngine { class Object; }
namespace MXField::Dispatch { class DispatchType; }
namespace MXField::Dispatch { class Subscriber; }

#define MXFIELD_DISPATCH_SUBSCRIBER_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0xEC8F50)
#define MXFIELD_DISPATCH_SUBSCRIBER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xEC8F60)
#define MXFIELD_DISPATCH_SUBSCRIBER_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xEC8F70)
#define MXFIELD_DISPATCH_SUBSCRIBER_GET_UNITYOBJECTOWNER_OFFSET UNITYSDK_OFFSET(0xEC8F80)
#define MXFIELD_DISPATCH_SUBSCRIBER_GET_ISUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0xEC8F90)
#define MXFIELD_DISPATCH_SUBSCRIBER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xEC8FA0)
#define MXFIELD_DISPATCH_SUBSCRIBER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC9000)
#define MXFIELD_DISPATCH_SUBSCRIBER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC90D0)
#define MXFIELD_DISPATCH_SUBSCRIBER_EQUALS_OFFSET UNITYSDK_OFFSET(0xEC90F0)
#define MXFIELD_DISPATCH_SUBSCRIBER_EQUALS_OFFSET UNITYSDK_OFFSET(0xEC9160)
#define MXFIELD_DISPATCH_SUBSCRIBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEC9310)
#define MXFIELD_DISPATCH_SUBSCRIBER_EQUALS_OFFSET UNITYSDK_OFFSET(0xEC92A0)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int Subscriber_TypeDefinitionIndex = 10901;

	class Subscriber : public Il2CppObject
	{
	public:
		::System::Type* _MessageType_k__BackingField; // 0x10
		::System::Object* _Owner_k__BackingField; // 0x18
		::MXField::Dispatch::DispatchDelegate* _Action_k__BackingField; // 0x20
		::UnityEngine::Object* _UnityObjectOwner_k__BackingField; // 0x28
		::System::Boolean _IsUnityObject_k__BackingField; // 0x30

		::System::Type* get_MessageType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Owner()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_GET_OWNER_OFFSET))(nullptr);
		}

		::MXField::Dispatch::DispatchDelegate* get_Action()
		{
			return ((::MXField::Dispatch::DispatchDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_GET_ACTION_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_UnityObjectOwner()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_GET_UNITYOBJECTOWNER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnityObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_GET_ISUNITYOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Type* arg2, ::MXField::Dispatch::DispatchDelegate* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Type*, ::MXField::Dispatch::DispatchDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Execute(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Dispatch::Subscriber* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::Subscriber*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_SUBSCRIBER_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

