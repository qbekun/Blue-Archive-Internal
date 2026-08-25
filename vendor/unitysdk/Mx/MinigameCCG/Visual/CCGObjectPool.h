#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::Visual { class TransformInfo; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace UnityEngine { class Transform; }

#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_REGISTERTOPOOL_OFFSET UNITYSDK_OFFSET(0x1E99800)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_REGISTERTOPOOL_OFFSET UNITYSDK_OFFSET(0x1E99FA0)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1E9C150)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_RETURNOBJECT_OFFSET UNITYSDK_OFFSET(0x1E99110)
#define MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C350)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGObjectPool_TypeDefinitionIndex = 21221;

	class CCGObjectPool : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x18
		::System::String* addressKey; // 0x20
		::System::Int32 loadCount; // 0x28
		::UnityEngine::GameObject* poolObject; // 0x30
		::MX::MinigameCCG::Visual::TransformInfo* transformInfo; // 0x38

		::Cysharp::Threading::Tasks::UniTask* RegisterToPool(::System::String* str)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_REGISTERTOPOOL_OFFSET))(str, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RegisterToPool(::UnityEngine::AddressableAssets::AssetReference* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::AddressableAssets::AssetReference*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_REGISTERTOPOOL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetObject(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_GETOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReturnObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_RETURNOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGOBJECTPOOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

