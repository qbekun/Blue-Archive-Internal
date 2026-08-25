#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Animator; }

#define MXIKBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x20A7660)
#define MXIKBASE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x20A7CB0)
#define MXIKBASE_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x20A7CC0)
#define MXIKBASE_GET_VISUAL_OFFSET UNITYSDK_OFFSET(0x20A7CD0)
#define MXIKBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A7480)
#define MXIKBASE_COCHANGEWEIGHT_OFFSET UNITYSDK_OFFSET(0x20A7CE0)
#define MXIKBASE_CHECKCHANGEWEIGHT_OFFSET UNITYSDK_OFFSET(0x20A4FE0)
#define MXIKBASE_SET_VISUAL_OFFSET UNITYSDK_OFFSET(0x20A7D80)

	inline static constexpr unsigned int MxIKBase_TypeDefinitionIndex = 3542;

	class MxIKBase : public Il2CppObject
	{
	public:
		::System::Single TransitionSpeed; // 0x18
		CharacterVisual* _Visual_k__BackingField; // 0x20
		::System::Single _Weight_k__BackingField; // 0x28
		::System::Boolean isIKApplied; // 0x2C
		::UnityEngine::Coroutine* transitionCoroutine; // 0x30
		::UnityEngine::Animator* animator; // 0x38

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		CharacterVisual* get_Visual()
		{
			return ((CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_GET_VISUAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoChangeWeight(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_COCHANGEWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void CheckChangeWeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_CHECKCHANGEWEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Visual(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MXIKBASE_SET_VISUAL_OFFSET))(arg, nullptr);
		}

	};

