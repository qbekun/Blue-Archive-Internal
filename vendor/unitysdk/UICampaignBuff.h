#pragma once
#include "unitysdk.h"

class BuffInfo;
class UITexture;
class UILabel;
class MXButton;
namespace UnityEngine { class Texture; }

#define UICAMPAIGNBUFF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22A8C10)
#define UICAMPAIGNBUFF__INITIALIZE_B__7_0_OFFSET UNITYSDK_OFFSET(0x22A8E30)
#define UICAMPAIGNBUFF_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A8E60)
#define UICAMPAIGNBUFF_AWAKE_OFFSET UNITYSDK_OFFSET(0x22A8E70)
#define UICAMPAIGNBUFF_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x22A8FC0)

	inline static constexpr unsigned int UICampaignBuff_TypeDefinitionIndex = 4750;

	class UICampaignBuff : public Il2CppObject
	{
	public:
		BuffInfo* BuffPopup; // 0x18
		UITexture* Icon; // 0x20
		UILabel* Turn; // 0x28
		::System::Int64 id; // 0x30
		::System::Int32 turn; // 0x38
		MXButton* button; // 0x40

		::System::Void Initialize(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNBUFF_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Initialize_b__7_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNBUFF__INITIALIZE_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNBUFF_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNBUFF_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNBUFF_ONCLICKBUTTON_OFFSET))(nullptr);
		}

	};

