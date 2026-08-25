#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define <GET_TYPEHIERARCHY>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D82D0)
#define <GET_TYPEHIERARCHY>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x90D9340)
#define <GET_TYPEHIERARCHY>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90D9350)
#define <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.AGGREGATETYPE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90D96D0)
#define <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x90D96E0)
#define <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90D9730)
#define <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.AGGREGATETYPE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90D9740)
#define <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90D97E0)

	inline static constexpr unsigned int <get_TypeHierarchy>d__17_TypeDefinitionIndex = 34589;

	class <get_TypeHierarchy>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* __4__this; // 0x28
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x30
		::System::Int32 __7__wrap2; // 0x38
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _agg_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* System.Collections.Generic.IEnumerator_Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType_.get_Current()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.AGGREGATETYPE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.AGGREGATETYPE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_TYPEHIERARCHY>D__17_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

