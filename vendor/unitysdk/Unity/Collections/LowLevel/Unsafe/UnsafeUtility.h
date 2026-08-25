#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Collections { class Allocator; }

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MALLOC_OFFSET UNITYSDK_OFFSET(0xA1E1610)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_FREE_OFFSET UNITYSDK_OFFSET(0xA1E1520)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPY_OFFSET UNITYSDK_OFFSET(0xA1E1660)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPYSTRIDE_OFFSET UNITYSDK_OFFSET(0xA1E16B0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMMOVE_OFFSET UNITYSDK_OFFSET(0xA1E1700)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMSET_OFFSET UNITYSDK_OFFSET(0xA1E1750)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCLEAR_OFFSET UNITYSDK_OFFSET(0xA1E17A0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCMP_OFFSET UNITYSDK_OFFSET(0xA1E17E0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET UNITYSDK_OFFSET(0xA1E1830)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET UNITYSDK_OFFSET(0xA1E1870)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0xA1E18B0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORTYPENONBLITTABLEIMPL_OFFSET UNITYSDK_OFFSET(0xA1E1910)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISARRAYBLITTABLE_OFFSET UNITYSDK_OFFSET(0xA1E1AF0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISGENERICLISTBLITTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORARRAYNONBLITTABLE_OFFSET UNITYSDK_OFFSET(0xA1E1B70)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORGENERICLISTNONBLITTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ALIGNOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_COPYPTRTOSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_INTERNALCOPYPTRTOSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_COPYSTRUCTURETOPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_INTERNALCOPYSTRUCTURETOPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_READARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_READARRAYELEMENTWITHSTRIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_WRITEARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_WRITEARRAYELEMENTWITHSTRIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ADDRESSOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ASREF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ENUMTOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_INTERNALENUMTOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ENUMEQUALS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeUtility_TypeDefinitionIndex = 30925;

	class UnsafeUtility : public Il2CppObject
	{
	public:
		::System::Boolean IsBlittable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET))(nullptr);
		}

		::System::Object** Malloc(::System::Int64 arg, ::System::Int32 arg, ::Unity::Collections::Allocator* arg)
		{
			return (return (::System::Object**(*)(::System::Int64, ::System::Int32, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MALLOC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Free(::System::Object** arg, ::Unity::Collections::Allocator* arg)
		{
			((::System::Void(*)(::System::Object**, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_FREE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MemCpy(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MemCpyStride(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPYSTRIDE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MemMove(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MemSet(::System::Object** arg, ::System::Byte arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Byte, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MemClear(::System::Object** arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCLEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 MemCmp(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Object**, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 SizeOf(::System::Type* arg)
		{
			return (return (::System::Int32(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBlittable(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBlittableValueType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLEVALUETYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetReasonForTypeNonBlittableImpl(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORTYPENONBLITTABLEIMPL_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsArrayBlittable(::System::Array* arg)
		{
			return (return (::System::Boolean(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISARRAYBLITTABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGenericListBlittable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISGENERICLISTBLITTABLE_OFFSET))(nullptr);
		}

		::System::String* GetReasonForArrayNonBlittable(::System::Array* arg)
		{
			return (return (::System::String*(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORARRAYNONBLITTABLE_OFFSET))(arg, nullptr);
		}

		::System::String* GetReasonForGenericListNonBlittable()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORGENERICLISTNONBLITTABLE_OFFSET))(nullptr);
		}

		::System::Int32 AlignOf()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ALIGNOF_OFFSET))(nullptr);
		}

		::System::Void CopyPtrToStructure(::System::Object** arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Object**, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_COPYPTRTOSTRUCTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalCopyPtrToStructure(::System::Object** arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Object**, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_INTERNALCOPYPTRTOSTRUCTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyStructureToPtr(Il2CppObject&* arg, ::System::Object** arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_COPYSTRUCTURETOPTR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalCopyStructureToPtr(Il2CppObject&* arg, ::System::Object** arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_INTERNALCOPYSTRUCTURETOPTR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadArrayElement(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_READARRAYELEMENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadArrayElementWithStride(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_READARRAYELEMENTWITHSTRIDE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteArrayElement(::System::Object** arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_WRITEARRAYELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteArrayElementWithStride(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_WRITEARRAYELEMENTWITHSTRIDE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object** AddressOf(Il2CppObject&* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ADDRESSOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 SizeOf()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET))(nullptr);
		}

		Il2CppObject&* AsRef(::System::Object** arg)
		{
			return (return (Il2CppObject&*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ASREF_OFFSET))(arg, nullptr);
		}

		::System::Int32 EnumToInt(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ENUMTOINT_OFFSET))(arg, nullptr);
		}

		::System::Void InternalEnumToInt(Il2CppObject&* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_INTERNALENUMTOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EnumEquals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ENUMEQUALS_OFFSET))(arg, arg, nullptr);
		}

	};
}

