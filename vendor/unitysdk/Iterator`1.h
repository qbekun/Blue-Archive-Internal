#pragma once
#include "unitysdk.h"

#define ITERATOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_SELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_WHERE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ITERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Iterator`1_TypeDefinitionIndex = 32922;

	class Iterator`1 : public Il2CppObject
	{
	public:
		::System::Int32 threadId; // 0x0
		::System::Int32 state; // 0x0
		Il2CppObject* current; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* Clone()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_CLONE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_DISPOSE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* Select(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_SELECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Where(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_WHERE_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

	};

