#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_RESOURCELOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x922DAA0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_GET_DATAPOSITION_OFFSET UNITYSDK_OFFSET(0x9234DA0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9234DB0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9234DC0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET UNITYSDK_OFFSET(0x922DA90)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceLocator_TypeDefinitionIndex = 24823;

	class ResourceLocator : public Il2CppObject
	{
	public:
		::System::Object* _value; // 0x10
		::System::Int32 _dataPos; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_DataPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_GET_DATAPOSITION_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanCache(::System::Resources::ResourceTypeCode* arg)
		{
			return (return (::System::Boolean(*)(::System::Resources::ResourceTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET))(arg, nullptr);
		}

	};
}

