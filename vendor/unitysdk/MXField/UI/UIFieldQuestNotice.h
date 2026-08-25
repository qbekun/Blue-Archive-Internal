#pragma once
#include "../../unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace MXField::Shared::Data { class FieldQuestInfo; }

#define MXFIELD_UI_UIFIELDQUESTNOTICE_COPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xEA3210)
#define MXFIELD_UI_UIFIELDQUESTNOTICE_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xEA32B0)
#define MXFIELD_UI_UIFIELDQUESTNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA34E0)
#define MXFIELD_UI_UIFIELDQUESTNOTICE_SETDATA_OFFSET UNITYSDK_OFFSET(0xEA3500)
#define MXFIELD_UI_UIFIELDQUESTNOTICE_COHOLD_OFFSET UNITYSDK_OFFSET(0xEA35C0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldQuestNotice_TypeDefinitionIndex = 10749;

	class UIFieldQuestNotice : public Il2CppObject
	{
	public:
		UILabel* questNameLabel; // 0xE8
		::UnityEngine::GameObject* completeObject; // 0xF0
		::UnityEngine::Animation* anim; // 0xF8
		::System::Single closeAnimationSpeed; // 0x100
		::System::Single holdTime; // 0x104

		::System::Collections::IEnumerator* CoPlayAnimation(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDQUESTNOTICE_COPLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDQUESTNOTICE_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDQUESTNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MXField::Shared::Data::FieldQuestInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldQuestInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDQUESTNOTICE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoHold()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDQUESTNOTICE_COHOLD_OFFSET))(nullptr);
		}

	};
}

