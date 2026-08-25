#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace UnityEngine::AddressableAssets { class AssetReference; }

#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_RETURNOBJECT_OFFSET UNITYSDK_OFFSET(0x1E84050)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_REGISTERTOPOOL_OFFSET UNITYSDK_OFFSET(0x1E80380)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_REGISTERTOPOOL_OFFSET UNITYSDK_OFFSET(0x1E8DED0)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E991E0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGObjectPoolManager_TypeDefinitionIndex = 21212;

	class CCGObjectPoolManager : public Il2CppObject
	{
	public:
		Il2CppObject* dic_Pool; // 0x18

		::System::Void ReturnObject(::System::String* str, ::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_RETURNOBJECT_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetObject(::System::String* str, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_GETOBJECT_OFFSET))(str, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RegisterToPool(::System::String* str)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_REGISTERTOPOOL_OFFSET))(str, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RegisterToPool(::UnityEngine::AddressableAssets::AssetReference* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::AddressableAssets::AssetReference*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_REGISTERTOPOOL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOLMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

