#pragma once
#include "unitysdk.h"

class UIWidget;
class UITexture;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class CampaignChapterInfo; }
class UIBase;
class UICenterOnChild;
namespace FlatData { class StageDifficulty; }
namespace UnityEngine { class Material; }

#define UICHAPTERITEM_REFRESHREDDOT_OFFSET UNITYSDK_OFFSET(0xB18400)
#define UICHAPTERITEM_GET_CAMPAIGNCHAPTERINFO_OFFSET UNITYSDK_OFFSET(0xB18460)
#define UICHAPTERITEM_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xB18470)
#define UICHAPTERITEM_ONCLICKCHAPTER_OFFSET UNITYSDK_OFFSET(0xB18550)
#define UICHAPTERITEM_GRAYSCALE_OFFSET UNITYSDK_OFFSET(0xB18770)
#define UICHAPTERITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xB187C0)
#define UICHAPTERITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xB18A20)
#define UICHAPTERITEM_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xB18A30)
#define UICHAPTERITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB18AC0)
#define UICHAPTERITEM_ONTEXTUREGRAYSCALED_OFFSET UNITYSDK_OFFSET(0xB18BF0)
#define UICHAPTERITEM_SET_CAMPAIGNCHAPTERINFO_OFFSET UNITYSDK_OFFSET(0xB18C40)

	inline static constexpr unsigned int UIChapterItem_TypeDefinitionIndex = 8225;

	class UIChapterItem : public Il2CppObject
	{
	public:
		UIWidget* reddot; // 0x18
		UITexture* DisableChapterImage; // 0x20
		UITexture* AbleChapterImage; // 0x28
		::UnityEngine::GameObject* LockObject; // 0x30
		::MX::Data::CampaignChapterInfo* _CampaignChapterInfo_k__BackingField; // 0x38
		UIBase* parent; // 0x40
		::System::Int32 chapterIndex; // 0x48
		UICenterOnChild* centerOnChild; // 0x50
		::System::Single grayAmount; // 0x58

		::System::Void RefreshReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_REFRESHREDDOT_OFFSET))(nullptr);
		}

		::MX::Data::CampaignChapterInfo* get_CampaignChapterInfo()
		{
			return ((::MX::Data::CampaignChapterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_GET_CAMPAIGNCHAPTERINFO_OFFSET))(nullptr);
		}

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickChapter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_ONCLICKCHAPTER_OFFSET))(nullptr);
		}

		::System::Void Grayscale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_GRAYSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTexture(::FlatData::StageDifficulty* arg, ::MX::Data::CampaignChapterInfo* arg2)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::MX::Data::CampaignChapterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_SETTEXTURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(UIBase* arg, ::MX::Data::CampaignChapterInfo* arg2, ::System::Int32 arg3, UICenterOnChild* arg4, ::FlatData::StageDifficulty* arg5)
		{
			((::System::Void(*)(UIBase*, ::MX::Data::CampaignChapterInfo*, ::System::Int32, UICenterOnChild*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void OnTextureGrayscaled(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_ONTEXTUREGRAYSCALED_OFFSET))(arg, nullptr);
		}

		::System::Void set_CampaignChapterInfo(::MX::Data::CampaignChapterInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERITEM_SET_CAMPAIGNCHAPTERINFO_OFFSET))(arg, nullptr);
		}

	};

