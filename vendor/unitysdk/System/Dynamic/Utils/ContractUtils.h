#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GET_UNREACHABLE_OFFSET UNITYSDK_OFFSET(0x96BEC50)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRES_OFFSET UNITYSDK_OFFSET(0x96BE270)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET UNITYSDK_OFFSET(0x96B9330)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET UNITYSDK_OFFSET(0x96BECC0)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULLITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GETPARAMNAME_OFFSET UNITYSDK_OFFSET(0x96BED30)
#define SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESARRAYRANGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ContractUtils_TypeDefinitionIndex = 33573;

	class ContractUtils : public Il2CppObject
	{
	public:
		::System::Exception* get_Unreachable()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GET_UNREACHABLE_OFFSET))(nullptr);
		}

		::System::Void Requires(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRES_OFFSET))(arg, str, nullptr);
		}

		::System::Void RequiresNotNull(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET))(arg, str, nullptr);
		}

		::System::Void RequiresNotNull(::System::Object* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void RequiresNotNullItems(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESNOTNULLITEMS_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetParamName(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_GETPARAMNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void RequiresArrayRange(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CONTRACTUTILS_REQUIRESARRAYRANGE_OFFSET))(arg, arg, arg, str, str, nullptr);
		}

	};
}

