#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_CREATEMATCHMAKER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_SETNOTMATCHED_OFFSET UNITYSDK_OFFSET(0x96B37A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETMATCH_OFFSET UNITYSDK_OFFSET(0x96B37C0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_CLEARMATCH_OFFSET UNITYSDK_OFFSET(0x96B37E0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_ADDRULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_UPDATERULES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETRULES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETRULECACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_MOVERULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETCACHEDRULES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_BIND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSiteOps_TypeDefinitionIndex = 33524;

	class CallSiteOps : public Il2CppObject
	{
	public:
		Il2CppObject* CreateMatchmaker(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_CREATEMATCHMAKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetNotMatched(::System::Runtime::CompilerServices::CallSite* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::CompilerServices::CallSite*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_SETNOTMATCHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMatch(::System::Runtime::CompilerServices::CallSite* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::CompilerServices::CallSite*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void ClearMatch(::System::Runtime::CompilerServices::CallSite* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::CallSite*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_CLEARMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void AddRule(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_ADDRULE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateRules(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_UPDATERULES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRules(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETRULES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRuleCache(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETRULECACHE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveRule(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_MOVERULE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCachedRules(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_GETCACHEDRULES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Bind(::System::Runtime::CompilerServices::CallSiteBinder* arg, Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEOPS_BIND_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

