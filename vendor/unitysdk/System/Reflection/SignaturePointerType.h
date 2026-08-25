#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x923F4D0)
#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x923F530)
#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x923F540)
#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x923F550)
#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x923F560)
#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GET_ISVARIABLEBOUNDARRAY_OFFSET UNITYSDK_OFFSET(0x923F570)
#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x923F580)
#define SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GET_SUFFIX_OFFSET UNITYSDK_OFFSET(0x923F5E0)

namespace System::Reflection
{
	inline static constexpr unsigned int SignaturePointerType_TypeDefinitionIndex = 24884;

	class SignaturePointerType : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Reflection::SignatureType* arg)
		{
			((::System::Void(*)(::System::Reflection::SignatureType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsArrayImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_ISARRAYIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsByRefImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_ISBYREFIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_ISPOINTERIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSZArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GET_ISSZARRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVariableBoundArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GET_ISVARIABLEBOUNDARRAY_OFFSET))(nullptr);
		}

		::System::Int32 GetArrayRank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GETARRAYRANK_OFFSET))(nullptr);
		}

		::System::String* get_Suffix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREPOINTERTYPE_GET_SUFFIX_OFFSET))(nullptr);
		}

	};
}

