#pragma once
#include "unitysdk.h"

#define <REPEATITERATOR>D__117`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REPEATITERATOR>D__117`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REPEATITERATOR>D__117`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_TRESULT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_TRESULT_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <RepeatIterator>d__117`1_TypeDefinitionIndex = 32949;

	class <RepeatIterator>d__117`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		Il2CppObject* element; // 0x0
		Il2CppObject* __3__element; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 __3__count; // 0x0
		::System::Int32 _i_5__2; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_TResult_.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_TRESULT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_TResult_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_TRESULT_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPEATITERATOR>D__117`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

