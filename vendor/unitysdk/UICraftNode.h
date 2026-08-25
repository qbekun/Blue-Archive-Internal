#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class ShaderGaugeController;
namespace UnityEngine { class Animation; }

#define UICRAFTNODE_SETACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x238E530)
#define UICRAFTNODE_STOPDIRECTING_OFFSET UNITYSDK_OFFSET(0x2392470)
#define UICRAFTNODE_CO_LERPINCREMENTGAGE_OFFSET UNITYSDK_OFFSET(0x2392640)
#define UICRAFTNODE_OPENNODE_OFFSET UNITYSDK_OFFSET(0x2392700)
#define UICRAFTNODE_CLOSENODE_OFFSET UNITYSDK_OFFSET(0x2392710)
#define UICRAFTNODE_PLAYGAGEDIRECTING_OFFSET UNITYSDK_OFFSET(0x238EBB0)
#define UICRAFTNODE_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x2387AD0)
#define UICRAFTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x238E8F0)

	inline static constexpr unsigned int UICraftNode_TypeDefinitionIndex = 5157;

	class UICraftNode : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* GageHandle; // 0x18
		ShaderGaugeController* GaugeController; // 0x20
		::UnityEngine::Animation* Anim; // 0x28
		::UnityEngine::GameObject* fXNode; // 0x30
		::System::Single errorRangeValue; // 0x0
		::System::Single gageHandleInitValue; // 0x38
		::System::Single gageHandleMaxLotationValue; // 0x3C
		::System::Single distanceRatio; // 0x0
		::System::String* curAnim; // 0x40
		Il2CppObject* nodeCoroutines; // 0x48

		::System::Void SetActiveEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_SETACTIVEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void StopDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_STOPDIRECTING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LerpIncrementGage(::System::Single arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_CO_LERPINCREMENTGAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OpenNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_OPENNODE_OFFSET))(nullptr);
		}

		::System::Void CloseNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_CLOSENODE_OFFSET))(nullptr);
		}

		::System::Void PlayGageDirecting(::System::Single arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_PLAYGAGEDIRECTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayAnim(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_PLAYANIM_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNODE_.CTOR_OFFSET))(nullptr);
		}

	};

