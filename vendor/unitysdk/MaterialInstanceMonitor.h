#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }

#define MATERIALINSTANCEMONITOR_GET_ONDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x20D3320)
#define MATERIALINSTANCEMONITOR_CACHECURRENTMATERIALSASASSETS_OFFSET UNITYSDK_OFFSET(0x20D3330)
#define MATERIALINSTANCEMONITOR_SET_ONDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x20D33E0)
#define MATERIALINSTANCEMONITOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20D33F0)
#define MATERIALINSTANCEMONITOR_RESETMATERIALSTOASSETS_OFFSET UNITYSDK_OFFSET(0x20D3760)
#define MATERIALINSTANCEMONITOR_ISMATERIALINSTANCED_OFFSET UNITYSDK_OFFSET(0x20D3970)
#define MATERIALINSTANCEMONITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D3AB0)
#define MATERIALINSTANCEMONITOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x20D3B30)
#define MATERIALINSTANCEMONITOR_DESTROYALLINSTANCEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x20D3430)
#define MATERIALINSTANCEMONITOR_SAFEGETATINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int MaterialInstanceMonitor_TypeDefinitionIndex = 3718;

	class MaterialInstanceMonitor : public Il2CppObject
	{
	public:
		Il2CppObject* matAssetsDic; // 0x18
		::System::Action* _OnDestroyCallback_k__BackingField; // 0x20

		::System::Action* get_OnDestroyCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_GET_ONDESTROYCALLBACK_OFFSET))(nullptr);
		}

		::System::Void CacheCurrentMaterialsAsAssets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_CACHECURRENTMATERIALSASASSETS_OFFSET))(nullptr);
		}

		::System::Void set_OnDestroyCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_SET_ONDESTROYCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ResetMaterialsToAssets(::UnityEngine::Renderer* arg)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_RESETMATERIALSTOASSETS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMaterialInstanced(::UnityEngine::Renderer* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_ISMATERIALINSTANCED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void DestroyAllInstancedMaterials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_DESTROYALLINSTANCEDMATERIALS_OFFSET))(nullptr);
		}

		Il2CppObject* SafeGetAtIndex(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALINSTANCEMONITOR_SAFEGETATINDEX_OFFSET))(arg, arg2, nullptr);
		}

	};

