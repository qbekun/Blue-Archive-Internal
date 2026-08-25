#pragma once
#include "../unitysdk.h"

#define SYSTEM_MARSHALBYREFOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B0960)
#define SYSTEM_MARSHALBYREFOBJECT_GET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x93B8770)
#define SYSTEM_MARSHALBYREFOBJECT_SET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x93B87C0)
#define SYSTEM_MARSHALBYREFOBJECT_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x93B8810)
#define SYSTEM_MARSHALBYREFOBJECT_INITIALIZELIFETIMESERVICE_OFFSET UNITYSDK_OFFSET(0x93B8860)

namespace System
{
	inline static constexpr unsigned int MarshalByRefObject_TypeDefinitionIndex = 23977;

	class MarshalByRefObject : public Il2CppObject
	{
	public:
		::System::Object* _identity; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::ServerIdentity* get_ObjectIdentity()
		{
			return (return (::System::Runtime::Remoting::ServerIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_GET_OBJECTIDENTITY_OFFSET))(nullptr);
		}

		::System::Void set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_SET_OBJECTIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::ObjRef*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_CREATEOBJREF_OFFSET))(arg, nullptr);
		}

		::System::Object* InitializeLifetimeService()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT_INITIALIZELIFETIMESERVICE_OFFSET))(nullptr);
		}

	};
}

