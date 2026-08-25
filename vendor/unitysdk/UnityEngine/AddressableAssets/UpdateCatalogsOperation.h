#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }

#define UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_DESTROY_OFFSET UNITYSDK_OFFSET(0x9E0D820)
#define UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_START_OFFSET UNITYSDK_OFFSET(0x9E08570)
#define UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9E0D890)
#define UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9E0D990)
#define UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E0E090)
#define UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E08510)
#define UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_ONCLEANCACHECOMPLETED_OFFSET UNITYSDK_OFFSET(0x9E0DFB0)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int UpdateCatalogsOperation_TypeDefinitionIndex = 36207;

	class UpdateCatalogsOperation : public ::FlatData::KnockBackExcelTable
	{
	public:
		::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables; // 0x88
		Il2CppObject* m_LocatorInfos; // 0x90
		Il2CppObject* m_DepOp; // 0x98
		Il2CppObject* m_CleanCacheOp; // 0xB8
		::System::Boolean m_AutoCleanBundleCache; // 0xD8

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_DESTROY_OFFSET))(nullptr);
		}

		Il2CppObject* Start(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_START_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::AddressableAssets::AddressablesImpl* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnCleanCacheCompleted(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_UPDATECATALOGSOPERATION_ONCLEANCACHECOMPLETED_OFFSET))(arg, arg, nullptr);
		}

	};
}

