#pragma once
#include "unitysdk.h"

#define <CONCATITERATOR>D__59`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_TSOURCE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_TSOURCE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <ConcatIterator>d__59`1_TypeDefinitionIndex = 32937;

	class <ConcatIterator>d__59`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		Il2CppObject* first; // 0x0
		Il2CppObject* __3__first; // 0x0
		Il2CppObject* second; // 0x0
		Il2CppObject* __3__second; // 0x0
		Il2CppObject* __7__wrap1; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1___M__FINALLY2_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_TSource_.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_TSOURCE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_TSource_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_TSOURCE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONCATITERATOR>D__59`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

