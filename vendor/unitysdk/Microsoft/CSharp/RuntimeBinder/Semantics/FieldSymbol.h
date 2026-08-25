#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EventSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_SETTYPE_OFFSET UNITYSDK_OFFSET(0x90CA820)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_GETTYPE_OFFSET UNITYSDK_OFFSET(0x90CA830)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_GETCLASS_OFFSET UNITYSDK_OFFSET(0x90CA840)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_GETEVENT_OFFSET UNITYSDK_OFFSET(0x90CA8B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CAA20)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int FieldSymbol_TypeDefinitionIndex = 34531;

	class FieldSymbol : public Il2CppObject
	{
	public:
		::System::Boolean isStatic; // 0x40
		::System::Boolean isReadOnly; // 0x41
		::System::Boolean isEvent; // 0x42
		::System::Reflection::FieldInfo* AssociatedFieldInfo; // 0x48

		::System::Void SetType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_SETTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_GETTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* getClass()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_GETCLASS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol* getEvent()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_GETEVENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_FIELDSYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

