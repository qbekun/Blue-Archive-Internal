#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }

#define UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_START_OFFSET UNITYSDK_OFFSET(0x9E07A00)
#define UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_DESTROY_OFFSET UNITYSDK_OFFSET(0x9E0B620)
#define UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9E0B690)
#define UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E079A0)
#define UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9E0B790)
#define UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E0BF40)
#define UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_PROCESSDEPENDENTOPRESULTS_OFFSET UNITYSDK_OFFSET(0x9E0B830)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int CheckCatalogsOperation_TypeDefinitionIndex = 36203;

	class CheckCatalogsOperation : public ::FlatData::KnockBackExcel
	{
	public:
		::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables; // 0x88
		Il2CppObject* m_LocalHashes; // 0x90
		Il2CppObject* m_LocatorInfos; // 0x98
		Il2CppObject* m_DepOp; // 0xA0

		Il2CppObject* Start(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_START_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_DESTROY_OFFSET))(nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::AddressableAssets::AddressablesImpl* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		Il2CppObject* ProcessDependentOpResults(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::String&* arg, bool&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::String&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_CHECKCATALOGSOPERATION_PROCESSDEPENDENTOPRESULTS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

