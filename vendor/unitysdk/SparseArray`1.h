#pragma once
#include "unitysdk.h"

#define SPARSEARRAY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPARSEARRAY`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPARSEARRAY`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPARSEARRAY`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SparseArray`1_TypeDefinitionIndex = 24107;

	class SparseArray`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_array; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPARSEARRAY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Current()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPARSEARRAY`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Int32 Add(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPARSEARRAY`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPARSEARRAY`1_REMOVE_OFFSET))(arg, nullptr);
		}

	};

