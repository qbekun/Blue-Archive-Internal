#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_GET_JSONWITHTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_SET_JSONWITHTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Services
{
	inline static constexpr unsigned int TypedJsonWrapper`1_TypeDefinitionIndex = 12782;

	class TypedJsonWrapper`1 : public Il2CppObject
	{
	public:
		::System::String* _JsonWithType_k__BackingField; // 0x0
		Il2CppObject* _instance; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_JsonWithType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_GET_JSONWITHTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Instance()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void set_JsonWithType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_SET_JSONWITHTYPE_OFFSET))(str, nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_TYPEDJSONWRAPPER`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

