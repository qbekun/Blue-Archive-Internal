#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define FXCONSTANTEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B7100)
#define FXCONSTANTEFFECT_GET_CURRENTINSTANCES_OFFSET UNITYSDK_OFFSET(0x20B7270)
#define FXCONSTANTEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B7280)
#define FXCONSTANTEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B7300)
#define FXCONSTANTEFFECT_FINISHCONSTANTEFFECT_OFFSET UNITYSDK_OFFSET(0x20B7500)
#define FXCONSTANTEFFECT_ANIEVT_FINISHCONSTANTEFFECT_OFFSET UNITYSDK_OFFSET(0x20B75B0)
#define FXCONSTANTEFFECT_REMOVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x20B7660)

	inline static constexpr unsigned int FxConstantEffect_TypeDefinitionIndex = 3602;

	class FxConstantEffect : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* instantiateFxsOnEnable; // 0x18
		::Il2CppArray<::System::Object*>* controlFxsOnFinishCmd; // 0x20
		Il2CppObject* instanceList; // 0x28

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCONSTANTEFFECT_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentInstances()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCONSTANTEFFECT_GET_CURRENTINSTANCES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCONSTANTEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCONSTANTEFFECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void FinishConstantEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCONSTANTEFFECT_FINISHCONSTANTEFFECT_OFFSET))(nullptr);
		}

		::System::Void AniEvt_FinishConstantEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCONSTANTEFFECT_ANIEVT_FINISHCONSTANTEFFECT_OFFSET))(nullptr);
		}

		::System::Boolean RemoveInstance(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + FXCONSTANTEFFECT_REMOVEINSTANCE_OFFSET))(arg, nullptr);
		}

	};

