#pragma once
#include "unitysdk.h"

class FxSceneBindings;
namespace Mx::Timeline { class VictoryTimelineHandler; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace Mx::Timeline { class EngageTimelineHandler; }

#define FXSCENEBINDINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BE2B0)
#define FXSCENEBINDINGS_GETBINDERFROMACTIVESCENE_OFFSET UNITYSDK_OFFSET(0x20BE2C0)
#define FXSCENEBINDINGS_GETVICTORYTIMELINEHANDLER_OFFSET UNITYSDK_OFFSET(0x20B8980)
#define FXSCENEBINDINGS_GETCUSTOMDEFINEDOBJECT_OFFSET UNITYSDK_OFFSET(0x20B8EA0)
#define FXSCENEBINDINGS_GETPREDEFINEDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define FXSCENEBINDINGS_GETBINDER_OFFSET UNITYSDK_OFFSET(0x20B8820)
#define FXSCENEBINDINGS_GETENGAGETIMELINEHANDLER_OFFSET UNITYSDK_OFFSET(0x20B88F0)

	inline static constexpr unsigned int FxSceneBindings_TypeDefinitionIndex = 3626;

	class FxSceneBindings : public Il2CppObject
	{
	public:
		Il2CppObject* predefinedObjects; // 0x18
		::System::Int32 EngageHandlerIndex; // 0x0
		::System::Int32 VictoryHandlerIndex; // 0x0
		Il2CppObject* customObjects; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSCENEBINDINGS_.CTOR_OFFSET))(nullptr);
		}

		FxSceneBindings* GetBinderFromActiveScene()
		{
			return ((FxSceneBindings*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSCENEBINDINGS_GETBINDERFROMACTIVESCENE_OFFSET))(nullptr);
		}

		::Mx::Timeline::VictoryTimelineHandler* GetVictoryTimelineHandler()
		{
			return ((::Mx::Timeline::VictoryTimelineHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSCENEBINDINGS_GETVICTORYTIMELINEHANDLER_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetCustomDefinedObject(::System::Int32 arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FXSCENEBINDINGS_GETCUSTOMDEFINEDOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPredefinedObject(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FXSCENEBINDINGS_GETPREDEFINEDOBJECT_OFFSET))(arg, nullptr);
		}

		FxSceneBindings* GetBinder(::UnityEngine::SceneManagement::Scene* arg)
		{
			return ((FxSceneBindings*(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + FXSCENEBINDINGS_GETBINDER_OFFSET))(arg, nullptr);
		}

		::Mx::Timeline::EngageTimelineHandler* GetEngageTimelineHandler()
		{
			return ((::Mx::Timeline::EngageTimelineHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXSCENEBINDINGS_GETENGAGETIMELINEHANDLER_OFFSET))(nullptr);
		}

	};

