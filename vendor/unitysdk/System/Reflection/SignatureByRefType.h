#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x923E940)
#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x923E9A0)
#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x923E9B0)
#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x923E9C0)
#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x923E9D0)
#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GET_ISVARIABLEBOUNDARRAY_OFFSET UNITYSDK_OFFSET(0x923E9E0)
#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x923E9F0)
#define SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GET_SUFFIX_OFFSET UNITYSDK_OFFSET(0x923EA50)

namespace System::Reflection
{
	inline static constexpr unsigned int SignatureByRefType_TypeDefinitionIndex = 24881;

	class SignatureByRefType : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Reflection::SignatureType* arg)
		{
			((::System::Void(*)(::System::Reflection::SignatureType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsArrayImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_ISARRAYIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsByRefImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_ISBYREFIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_ISPOINTERIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSZArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GET_ISSZARRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVariableBoundArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GET_ISVARIABLEBOUNDARRAY_OFFSET))(nullptr);
		}

		::System::Int32 GetArrayRank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GETARRAYRANK_OFFSET))(nullptr);
		}

		::System::String* get_Suffix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREBYREFTYPE_GET_SUFFIX_OFFSET))(nullptr);
		}

	};
}

