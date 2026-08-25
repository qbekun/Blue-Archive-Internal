#pragma once
#include "unitysdk.h"

class FxSceneBindings;
namespace Mx::Timeline { class EngageTimelineHandler; }
namespace Mx::Timeline { class VictoryTimelineHandler; }

#define FXINSTANTIATETOSCENE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B8690)
#define FXINSTANTIATETOSCENE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B8C40)
#define FXINSTANTIATETOSCENE_QUEUETOTIMELINEHANDLER_OFFSET UNITYSDK_OFFSET(0x20B8930)
#define FXINSTANTIATETOSCENE_QUEUETOTIMELINEHANDLER_OFFSET UNITYSDK_OFFSET(0x20B89C0)
#define FXINSTANTIATETOSCENE_QUEUETOTIMELINEHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define FXINSTANTIATETOSCENE_RUNINSTANTIATETOCUSTOMSCENEBINDINGS_OFFSET UNITYSDK_OFFSET(0x20B8E30)
#define FXINSTANTIATETOSCENE_DOCUSTOMSCENEBINDINGS_OFFSET UNITYSDK_OFFSET(0x20B8A10)
#define FXINSTANTIATETOSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B8F00)

	inline static constexpr unsigned int FxInstantiateToScene_TypeDefinitionIndex = 3607;

	class FxInstantiateToScene : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* instantiateFxsToEngage; // 0x18
		::Il2CppArray<::System::Object*>* instantiateFxsToVictory; // 0x20
		::System::Boolean runOnEnable; // 0x28
		::Il2CppArray<::System::Object*>* instantiateToCustomSceneBindings; // 0x30
		FxSceneBindings* sceneBindings; // 0x38
		Il2CppObject* instanceList; // 0x40

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void QueueToTimelineHandler(::Mx::Timeline::EngageTimelineHandler* arg)
		{
			((::System::Void(*)(::Mx::Timeline::EngageTimelineHandler*, ::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_QUEUETOTIMELINEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void QueueToTimelineHandler(::Mx::Timeline::VictoryTimelineHandler* arg)
		{
			((::System::Void(*)(::Mx::Timeline::VictoryTimelineHandler*, ::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_QUEUETOTIMELINEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void QueueToTimelineHandler(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_QUEUETOTIMELINEHANDLER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RunInstantiateToCustomSceneBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_RUNINSTANTIATETOCUSTOMSCENEBINDINGS_OFFSET))(nullptr);
		}

		::System::Void DoCustomSceneBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_DOCUSTOMSCENEBINDINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXINSTANTIATETOSCENE_.CTOR_OFFSET))(nullptr);
		}

	};

