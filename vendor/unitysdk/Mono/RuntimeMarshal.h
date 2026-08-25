#pragma once
#include "../unitysdk.h"

namespace Mono { class SafeStringMarshal; }
namespace Mono { class MonoAssemblyName&; }

#define MONO_RUNTIMEMARSHAL_PTRTOUTF8STRING_OFFSET UNITYSDK_OFFSET(0x91214C0)
#define MONO_RUNTIMEMARSHAL_MARSHALSTRING_OFFSET UNITYSDK_OFFSET(0x9121590)
#define MONO_RUNTIMEMARSHAL_DECODEBLOBSIZE_OFFSET UNITYSDK_OFFSET(0x9121650)
#define MONO_RUNTIMEMARSHAL_DECODEBLOBARRAY_OFFSET UNITYSDK_OFFSET(0x91216C0)
#define MONO_RUNTIMEMARSHAL_ASCIHEXDIGITVALUE_OFFSET UNITYSDK_OFFSET(0x91217A0)
#define MONO_RUNTIMEMARSHAL_FREEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x91217D0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeMarshal_TypeDefinitionIndex = 23576;

	class RuntimeMarshal : public Il2CppObject
	{
	public:
		::System::String* PtrToUtf8String(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_PTRTOUTF8STRING_OFFSET))(arg, nullptr);
		}

		::Mono::SafeStringMarshal* MarshalString(::System::String* str)
		{
			return (return (::Mono::SafeStringMarshal*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_MARSHALSTRING_OFFSET))(str, nullptr);
		}

		::System::Int32 DecodeBlobSize(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_DECODEBLOBSIZE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeBlobArray(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_DECODEBLOBARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsciHexDigitValue(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_ASCIHEXDIGITVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void FreeAssemblyName(::Mono::MonoAssemblyName&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Mono::MonoAssemblyName&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEMARSHAL_FREEASSEMBLYNAME_OFFSET))(arg, arg, nullptr);
		}

	};
}

