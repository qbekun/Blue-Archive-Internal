#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_TYPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D38F0)
#define SYSTEM_RUNTIME_REMOTING_TYPEINFO_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91D3DE0)
#define SYSTEM_RUNTIME_REMOTING_TYPEINFO_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x91D3DF0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 24455;

	class TypeInfo : public Il2CppObject
	{
	public:
		::System::String* serverType; // 0x10
		::Il2CppArray<::System::Object*>* serverHierarchy; // 0x18
		::Il2CppArray<::System::Object*>* interfacesImplemented; // 0x20

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::Boolean CanCastTo(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEINFO_CANCASTTO_OFFSET))(arg, arg, nullptr);
		}

	};
}

