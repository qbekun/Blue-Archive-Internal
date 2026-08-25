#pragma once
#include "unitysdk.h"

#define WHERESELECTARRAYITERATOR`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WHERESELECTARRAYITERATOR`2_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define WHERESELECTARRAYITERATOR`2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define WHERESELECTARRAYITERATOR`2_SELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define WHERESELECTARRAYITERATOR`2_WHERE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int WhereSelectArrayIterator`2_TypeDefinitionIndex = 32927;

	class WhereSelectArrayIterator`2 : public ::MX::MinigameCCG::Procedures::CloneCard
	{
	public:
		::Il2CppArray<::System::Object*>* source; // 0x0
		Il2CppObject* predicate; // 0x0
		Il2CppObject* selector; // 0x0
		::System::Int32 index; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WHERESELECTARRAYITERATOR`2_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Clone()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WHERESELECTARRAYITERATOR`2_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WHERESELECTARRAYITERATOR`2_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* Select(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WHERESELECTARRAYITERATOR`2_SELECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Where(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WHERESELECTARRAYITERATOR`2_WHERE_OFFSET))(arg, nullptr);
		}

	};

