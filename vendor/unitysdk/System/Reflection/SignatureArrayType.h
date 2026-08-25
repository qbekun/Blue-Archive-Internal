#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x923E760)
#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x923E830)
#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x923E840)
#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x923E850)
#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x923E860)
#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GET_ISVARIABLEBOUNDARRAY_OFFSET UNITYSDK_OFFSET(0x923E870)
#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x923E880)
#define SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GET_SUFFIX_OFFSET UNITYSDK_OFFSET(0x923E890)

namespace System::Reflection
{
	inline static constexpr unsigned int SignatureArrayType_TypeDefinitionIndex = 24880;

	class SignatureArrayType : public Il2CppObject
	{
	public:
		::System::Int32 _rank; // 0x20
		::System::Boolean _isMultiDim; // 0x24

		::System::Void .ctor(::System::Reflection::SignatureType* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Reflection::SignatureType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsArrayImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_ISARRAYIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsByRefImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_ISBYREFIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_ISPOINTERIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSZArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GET_ISSZARRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVariableBoundArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GET_ISVARIABLEBOUNDARRAY_OFFSET))(nullptr);
		}

		::System::Int32 GetArrayRank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GETARRAYRANK_OFFSET))(nullptr);
		}

		::System::String* get_Suffix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATUREARRAYTYPE_GET_SUFFIX_OFFSET))(nullptr);
		}

	};
}

