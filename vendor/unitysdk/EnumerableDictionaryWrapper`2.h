#pragma once
#include "unitysdk.h"

#define ENUMERABLEDICTIONARYWRAPPER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ENUMERABLEDICTIONARYWRAPPER`2_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ENUMERABLEDICTIONARYWRAPPER`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int EnumerableDictionaryWrapper`2_TypeDefinitionIndex = 31909;

	class EnumerableDictionaryWrapper`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _e; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMERABLEDICTIONARYWRAPPER`2_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERABLEDICTIONARYWRAPPER`2_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMERABLEDICTIONARYWRAPPER`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

