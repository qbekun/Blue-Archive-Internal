#pragma once
#include "unitysdk.h"

#define <OFTYPEITERATOR>D__97`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_TRESULT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_TRESULT_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <OfTypeIterator>d__97`1_TypeDefinitionIndex = 32946;

	class <OfTypeIterator>d__97`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::IEnumerable* source; // 0x0
		::System::Collections::IEnumerable* __3__source; // 0x0
		::System::Collections::IEnumerator* __7__wrap1; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1___M__FINALLY1_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_TResult_.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_TRESULT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_TResult_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_TRESULT_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OFTYPEITERATOR>D__97`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

