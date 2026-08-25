#pragma once
#include "unitysdk.h"

#define ARRAY_ISCUSTOM_OFFSET UNITYSDK_OFFSET(0x9E38980)
#define ARRAY_CUSTOMRESIZE_OFFSET UNITYSDK_OFFSET(0x9E38990)
#define ARRAY_RESIZE_OFFSET UNITYSDK_OFFSET(0x9E388C0)
#define ARRAY_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Array_TypeDefinitionIndex = 37037;

	class Array : public Il2CppObject
	{
	public:
		::System::Boolean IsCustom(AllocatorHandle* arg)
		{
			return (return (::System::Boolean(*)(AllocatorHandle*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAY_ISCUSTOM_OFFSET))(arg, nullptr);
		}

		::System::Object** CustomResize(::System::Object** arg, ::System::Int64 arg, ::System::Int64 arg, AllocatorHandle* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::System::Int64, ::System::Int64, AllocatorHandle*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ARRAY_CUSTOMRESIZE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object** Resize(::System::Object** arg, ::System::Int64 arg, ::System::Int64 arg, AllocatorHandle* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::System::Int64, ::System::Int64, AllocatorHandle*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ARRAY_RESIZE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object** Resize(::System::Object** arg, ::System::Int64 arg, ::System::Int64 arg, AllocatorHandle* arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::System::Int64, ::System::Int64, AllocatorHandle*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAY_RESIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

