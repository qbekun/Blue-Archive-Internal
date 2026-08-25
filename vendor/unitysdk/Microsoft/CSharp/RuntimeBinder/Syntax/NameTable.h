#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x909AFB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x909B0A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x909B1E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x909B010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_COMPUTEHASHCODE_OFFSET UNITYSDK_OFFSET(0x909F180)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_COMPUTEHASHCODE_OFFSET UNITYSDK_OFFSET(0x909F320)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x909F390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x909F1F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x909F470)

namespace Microsoft::CSharp::RuntimeBinder::Syntax
{
	inline static constexpr unsigned int NameTable_TypeDefinitionIndex = 34457;

	class NameTable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _entries; // 0x10
		::System::Int32 _count; // 0x18
		::System::Int32 _mask; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_.CTOR_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* Add(::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADD_OFFSET))(str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* Add(::System::String* str, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 ComputeHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_COMPUTEHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Int32 ComputeHashCode(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_COMPUTEHASHCODE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_EQUALS_OFFSET))(str, str, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* AddEntry(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_ADDENTRY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Grow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYNTAX_NAMETABLE_GROW_OFFSET))(nullptr);
		}

	};
}

