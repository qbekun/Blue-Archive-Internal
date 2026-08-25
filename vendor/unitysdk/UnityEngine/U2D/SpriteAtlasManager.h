#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::U2D { class SpriteAtlas; }

#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REQUESTATLAS_OFFSET UNITYSDK_OFFSET(0xA244820)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_ADD_ATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0xA2448D0)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REMOVE_ATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0xA244990)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_POSTREGISTEREDATLAS_OFFSET UNITYSDK_OFFSET(0xA244A50)
#define UNITYENGINE_U2D_SPRITEATLASMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0xA244AB0)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlasManager_TypeDefinitionIndex = 31231;

	class SpriteAtlasManager : public Il2CppObject
	{
	public:
		Il2CppObject* atlasRequested; // 0x0
		Il2CppObject* atlasRegistered; // 0x8

		::System::Boolean RequestAtlas(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REQUESTATLAS_OFFSET))(str, nullptr);
		}

		::System::Void add_atlasRegistered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_ADD_ATLASREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_atlasRegistered(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REMOVE_ATLASREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* arg)
		{
			((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_POSTREGISTEREDATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void Register(::UnityEngine::U2D::SpriteAtlas* arg)
		{
			((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLASMANAGER_REGISTER_OFFSET))(arg, nullptr);
		}

	};
}

