#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_GETRULES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_MOVERULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_ADDRULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_ADDORINSERT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuleCache`1_TypeDefinitionIndex = 33528;

	class RuleCache`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _rules; // 0x0
		::System::Object* _cacheLock; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRules()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_GETRULES_OFFSET))(nullptr);
		}

		::System::Void MoveRule(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_MOVERULE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRule(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_ADDRULE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AddOrInsert(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RULECACHE`1_ADDORINSERT_OFFSET))(arg, arg, nullptr);
		}

	};
}

