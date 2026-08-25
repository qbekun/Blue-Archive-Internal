#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class GetInstanceType;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CONTROLFXINSTANCEINFOBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B2E40)
#define CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMSCENEROOT_OFFSET UNITYSDK_OFFSET(0x20B3050)
#define CONTROLFXINSTANCEINFOBASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x20B3430)
#define CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x20B35A0)
#define CONTROLFXINSTANCEINFOBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B3760)
#define CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMENUMERABLE_OFFSET UNITYSDK_OFFSET(0x20B30C0)
#define CONTROLFXINSTANCEINFOBASE_EXECUTEFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONTROLFXINSTANCEINFOBASE_REMOVEFROMCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x20B3800)
#define CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMDIRECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x20B3680)
#define CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROM_OFFSET UNITYSDK_OFFSET(0x20B2FE0)

	inline static constexpr unsigned int ControlFxInstanceInfoBase_TypeDefinitionIndex = 3590;

	class ControlFxInstanceInfoBase : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* OriginalPrefabFile; // 0x18
		GetInstanceType* FindInstanceMode; // 0x20
		::System::String* nameKeyword; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetInstanceFromSceneRoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMSCENEROOT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetInstance(::UnityEngine::MonoBehaviour* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetInstanceFromCreatedList(::UnityEngine::MonoBehaviour* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMCREATEDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetInstanceFromEnumerable(Il2CppObject* arg)
		{
			return ((::UnityEngine::GameObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMENUMERABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteFrom(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_EXECUTEFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveFromCreatedList(::UnityEngine::MonoBehaviour* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::MonoBehaviour*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_REMOVEFROMCREATEDLIST_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::GameObject* GetInstanceFromDirectChildren(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROMDIRECTCHILDREN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetInstanceFrom(::UnityEngine::MonoBehaviour* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLFXINSTANCEINFOBASE_GETINSTANCEFROM_OFFSET))(arg, nullptr);
		}

	};

