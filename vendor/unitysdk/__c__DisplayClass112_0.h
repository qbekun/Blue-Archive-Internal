#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace MXUnderCover { class UCGameResource; }
namespace MXUnderCover { class UCStageSetting; }
namespace MX::Data { class UCStageTableInfo; }
namespace UnityEngine { class MonoBehaviour; }

#define <>C__DISPLAYCLASS112_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB48B0)
#define <>C__DISPLAYCLASS112_0__INITASYNC_G__CO_INIT|0_OFFSET UNITYSDK_OFFSET(0xDB48C0)

	inline static constexpr unsigned int <>c__DisplayClass112_0_TypeDefinitionIndex = 9978;

	class <>c__DisplayClass112_0 : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStage* __4__this; // 0x10
		::UnityEngine::SceneManagement::Scene* enteranceScene; // 0x18
		::MXUnderCover::UCGameResource* gameResource; // 0x20
		::MXUnderCover::UCStageSetting* stageSetting; // 0x28
		::MX::Data::UCStageTableInfo* tableInfo; // 0x30
		::UnityEngine::MonoBehaviour* coroutineHandler; // 0x38
		::UnityEngine::MonoBehaviour* actionCoroutineHandler; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS112_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _InitAsync_g__co_Init|0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS112_0__INITASYNC_G__CO_INIT|0_OFFSET))(nullptr);
		}

	};

