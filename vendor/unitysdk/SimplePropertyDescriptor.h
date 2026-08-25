#pragma once
#include "unitysdk.h"

#define SIMPLEPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B64F30)
#define SIMPLEPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B64FC0)
#define SIMPLEPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B65020)
#define SIMPLEPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B65030)
#define SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9B650B0)
#define SIMPLEPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B650C0)
#define SIMPLEPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x9B65200)
#define SIMPLEPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9B65320)

	inline static constexpr unsigned int SimplePropertyDescriptor_TypeDefinitionIndex = 29510;

	class SimplePropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Type* componentType; // 0x88
		::System::Type* propertyType; // 0x90

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Type* get_ComponentType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean CanResetValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ResetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(arg, nullptr);
		}

	};

