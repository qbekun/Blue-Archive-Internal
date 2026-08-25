#pragma once
#include "unitysdk.h"

#define SORTEDLISTVALUEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SORTEDLISTVALUEENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SORTEDLISTVALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SORTEDLISTVALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SORTEDLISTVALUEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SORTEDLISTVALUEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SortedListValueEnumerator_TypeDefinitionIndex = 29609;

	class SortedListValueEnumerator : public Il2CppObject
	{
	public:
		Il2CppObject* _sortedList; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		Il2CppObject* _currentValue; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTVALUEENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTVALUEENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTVALUEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTVALUEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTVALUEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTEDLISTVALUEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

	};

