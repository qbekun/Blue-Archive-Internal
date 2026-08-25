#pragma once
#include "unitysdk.h"

#define <RANGEITERATOR>D__115_.CTOR_OFFSET UNITYSDK_OFFSET(0x962EE70)
#define <RANGEITERATOR>D__115_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9631580)
#define <RANGEITERATOR>D__115_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9631590)
#define <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT32_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96315E0)
#define <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x96315F0)
#define <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9631640)
#define <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT32_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9631690)
#define <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9631720)

	inline static constexpr unsigned int <RangeIterator>d__115_TypeDefinitionIndex = 32948;

	class <RangeIterator>d__115 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Int32 __2__current; // 0x14
		::System::Int32 __l__initialThreadId; // 0x18
		::System::Int32 start; // 0x1C
		::System::Int32 __3__start; // 0x20
		::System::Int32 count; // 0x24
		::System::Int32 __3__count; // 0x28
		::System::Int32 _i_5__2; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.Generic.IEnumerator_System.Int32_.get_Current()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT32_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Int32_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT32_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANGEITERATOR>D__115_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

