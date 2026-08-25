#pragma once
#include "unitysdk.h"

class UITexture;
class TweenAlpha;
class TweenScale;
class GachaTagFlags;
namespace FlatData { class GachaDisplayTag; }
namespace MX::Data::Excel { class ShopRecruitExcel; }
class UITweener;

#define UILOBBYGACHATAG_SETNEXTTAGTEXTURE_OFFSET UNITYSDK_OFFSET(0x2672860)
#define UILOBBYGACHATAG_COLLECTGACHATAGFLAGS_OFFSET UNITYSDK_OFFSET(0x2672970)
#define UILOBBYGACHATAG_BUILDTEXTUREQUEUE_OFFSET UNITYSDK_OFFSET(0x2673250)
#define UILOBBYGACHATAG_ONSECONDTAGTWEENALPHAFINISHED_OFFSET UNITYSDK_OFFSET(0x2673770)
#define UILOBBYGACHATAG_ONFIRSTTAGTWEENALPHAFINISHED_OFFSET UNITYSDK_OFFSET(0x2673800)
#define UILOBBYGACHATAG_LOADTAGTEXTURES_OFFSET UNITYSDK_OFFSET(0x2673860)
#define UILOBBYGACHATAG_INITIALIZETAGDISPLAY_OFFSET UNITYSDK_OFFSET(0x26739A0)
#define UILOBBYGACHATAG_REFRESHTAGS_OFFSET UNITYSDK_OFFSET(0x2673B10)
#define UILOBBYGACHATAG_CLEARTAGS_OFFSET UNITYSDK_OFFSET(0x2673BC0)
#define UILOBBYGACHATAG_AWAKE_OFFSET UNITYSDK_OFFSET(0x2673CF0)
#define UILOBBYGACHATAG_GETOVERRIDDENDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x2672C80)
#define UILOBBYGACHATAG_PLAYTWEENER_OFFSET UNITYSDK_OFFSET(0x26737D0)
#define UILOBBYGACHATAG_CHECKFREEGACHA_OFFSET UNITYSDK_OFFSET(0x2672C90)
#define UILOBBYGACHATAG_CHECKTHREESTARGACHAAVAILABILITY_OFFSET UNITYSDK_OFFSET(0x2673F00)
#define UILOBBYGACHATAG_UPDATETAGFLAGS_OFFSET UNITYSDK_OFFSET(0x2673190)
#define UILOBBYGACHATAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x2674330)

	inline static constexpr unsigned int UILobbyGachaTag_TypeDefinitionIndex = 6713;

	class UILobbyGachaTag : public Il2CppObject
	{
	public:
		UITexture* firstTagTexture; // 0x18
		TweenAlpha* firstTagTweenAlpha; // 0x20
		TweenScale* firstTagTweenScale; // 0x28
		UITexture* secondTagTexture; // 0x30
		TweenAlpha* secondTagTweenAlpha; // 0x38
		TweenScale* secondTagTweenScale; // 0x40
		Il2CppObject* tagTextureQueue; // 0x48

		::System::Void SetNextTagTexture(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_SETNEXTTAGTEXTURE_OFFSET))(arg, nullptr);
		}

		GachaTagFlags* CollectGachaTagFlags()
		{
			return ((GachaTagFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_COLLECTGACHATAGFLAGS_OFFSET))(nullptr);
		}

		Il2CppObject* BuildTextureQueue(GachaTagFlags* arg)
		{
			return ((Il2CppObject*(*)(GachaTagFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_BUILDTEXTUREQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSecondTagTweenAlphaFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_ONSECONDTAGTWEENALPHAFINISHED_OFFSET))(nullptr);
		}

		::System::Void OnFirstTagTweenAlphaFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_ONFIRSTTAGTWEENALPHAFINISHED_OFFSET))(nullptr);
		}

		::System::Void LoadTagTextures(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_LOADTAGTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeTagDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_INITIALIZETAGDISPLAY_OFFSET))(nullptr);
		}

		::System::Void RefreshTags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_REFRESHTAGS_OFFSET))(nullptr);
		}

		::System::Void ClearTags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_CLEARTAGS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_AWAKE_OFFSET))(nullptr);
		}

		::FlatData::GachaDisplayTag* GetOverriddenDisplayTag(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::FlatData::GachaDisplayTag*(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_GETOVERRIDDENDISPLAYTAG_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTweener(UITweener* arg)
		{
			((::System::Void(*)(UITweener*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_PLAYTWEENER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckFreeGacha(::MX::Data::Excel::ShopRecruitExcel* arg, ::System::DateTime* arg2, GachaTagFlags&* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::System::DateTime*, GachaTagFlags&*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_CHECKFREEGACHA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckThreeStarGachaAvailability(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_CHECKTHREESTARGACHAAVAILABILITY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTagFlags(::FlatData::GachaDisplayTag* arg, ::MX::Data::Excel::ShopRecruitExcel* arg2, GachaTagFlags&* arg3)
		{
			((::System::Void(*)(::FlatData::GachaDisplayTag*, ::MX::Data::Excel::ShopRecruitExcel*, GachaTagFlags&*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_UPDATETAGFLAGS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYGACHATAG_.CTOR_OFFSET))(nullptr);
		}

	};

