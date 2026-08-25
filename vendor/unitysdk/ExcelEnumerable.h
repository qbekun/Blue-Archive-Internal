#pragma once
#include "unitysdk.h"

#define EXCELENUMERABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXCELENUMERABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ExcelEnumerable_TypeDefinitionIndex = 16542;

	class ExcelEnumerable : public Il2CppObject
	{
	public:
		Il2CppObject* repository; // 0x0
		Il2CppObject* predicate; // 0x0
		::System::Boolean orderByRowId; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCELENUMERABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

