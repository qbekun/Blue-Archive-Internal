#pragma once
#include "../unitysdk.h"

class UIGrid;
namespace MXUnderCover { class UCStage; }
class IMessage;
namespace UnityEngine { class GameObject; }

#define MXUNDERCOVER_UIUCPLAYERINFO_REFRESHHP_OFFSET UNITYSDK_OFFSET(0xDCCC10)
#define MXUNDERCOVER_UIUCPLAYERINFO_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDCCE30)
#define MXUNDERCOVER_UIUCPLAYERINFO_ONHPCHANGED_OFFSET UNITYSDK_OFFSET(0xDCCE40)
#define MXUNDERCOVER_UIUCPLAYERINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDCCE50)
#define MXUNDERCOVER_UIUCPLAYERINFO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDCD0F0)
#define MXUNDERCOVER_UIUCPLAYERINFO_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDCD200)
#define MXUNDERCOVER_UIUCPLAYERINFO_CO_HPICONANI_OFFSET UNITYSDK_OFFSET(0xDCCDB0)
#define MXUNDERCOVER_UIUCPLAYERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCD230)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCPlayerInfo_TypeDefinitionIndex = 10050;

	class UIUCPlayerInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* hpObjects; // 0x18
		::Il2CppArray<::System::Object*>* hpEffectObjects; // 0x20
		UIGrid* hpGrid; // 0x28
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x30

		::System::Void RefreshHp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_REFRESHHP_OFFSET))(nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnHpChanged(IMessage* arg)
		{
			((::System::Void(*)(IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_ONHPCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_ONDESTROY_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_HpIconAni(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_CO_HPICONANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

