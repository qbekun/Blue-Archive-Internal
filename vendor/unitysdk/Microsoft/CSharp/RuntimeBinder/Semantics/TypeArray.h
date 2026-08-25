#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x90DD1C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x90C9010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x90DD1F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x90C9320)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_COPYITEMS_OFFSET UNITYSDK_OFFSET(0x90DD200)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x90DD230)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x90D3F20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_CONCAT_OFFSET UNITYSDK_OFFSET(0x90CA1C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90DD3C0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int TypeArray_TypeDefinitionIndex = 34603;

	class TypeArray : public Il2CppObject
	{
	public:
		Il2CppObject* s_tableTypeArrays; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* Empty; // 0x8
		::Il2CppArray<::System::Object*>* _Items_k__BackingField; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_GET_COUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Items()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_GET_ITEMS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_Item(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void CopyItems(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_COPYITEMS_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* Allocate(::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_ALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* Allocate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_ALLOCATE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* Concat(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_CONCAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEARRAY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

