#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
class LobbySpineLoadInfo;
class SpineCharacter;
namespace UnityEngine { class Transform; }

#define UILOBBYCONTAINER_INIT_OFFSET UNITYSDK_OFFSET(0x266DF50)
#define UILOBBYCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0x266E2A0)
#define UILOBBYCONTAINER_SET_CONTAINERPATH_OFFSET UNITYSDK_OFFSET(0x266E310)
#define UILOBBYCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x266E320)
#define UILOBBYCONTAINER_SETLAYERRECURSIVE_OFFSET UNITYSDK_OFFSET(0x266E330)
#define UILOBBYCONTAINER_GET_CONTAINERPATH_OFFSET UNITYSDK_OFFSET(0x266E4E0)
#define UILOBBYCONTAINER_RESETSPINELAYER_OFFSET UNITYSDK_OFFSET(0x266E4F0)

	inline static constexpr unsigned int UILobbyContainer_TypeDefinitionIndex = 6696;

	class UILobbyContainer : public Il2CppObject
	{
	public:
		UITexture* BGTexture; // 0x58
		::UnityEngine::GameObject* SpineParent; // 0x60
		::System::String* _ContainerPath_k__BackingField; // 0x68

		::System::Void Init(LobbySpineLoadInfo* arg, SpineCharacter* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(LobbySpineLoadInfo*, SpineCharacter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTAINER_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTAINER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_ContainerPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTAINER_SET_CONTAINERPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetLayerRecursive(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTAINER_SETLAYERRECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::String* get_ContainerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTAINER_GET_CONTAINERPATH_OFFSET))(nullptr);
		}

		::System::Void ResetSpineLayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTAINER_RESETSPINELAYER_OFFSET))(nullptr);
		}

	};

