#pragma once
#include "unitysdk.h"

class UIWidget;
class UITexture;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIGrid;
namespace UnityEngine { class Animation; }
class UISprite;
class FeedItemData;

#define UISNS_POST_COCALCULATEHEIGHTROUTINE_OFFSET UNITYSDK_OFFSET(0xAE4830)
#define UISNS_POST__SETUP_G__GETCHATINPUTDATE|27_0_OFFSET UNITYSDK_OFFSET(0xAE5BA0)
#define UISNS_POST_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xAE6130)
#define UISNS_POST_SETREPOSTFAVOREFFECTTOEND_OFFSET UNITYSDK_OFFSET(0xAE6140)
#define UISNS_POST_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE62A0)
#define UISNS_POST__COPLAYREPOSTFAVOREFFECT_G__PLAYICONANIMATION|28_0_OFFSET UNITYSDK_OFFSET(0xAE62C0)
#define UISNS_POST_ONCONTENTCHANGED_OFFSET UNITYSDK_OFFSET(0xAE6380)
#define UISNS_POST_SETUP_OFFSET UNITYSDK_OFFSET(0xADA6B0)
#define UISNS_POST_COPLAYREPOSTFAVOREFFECT_OFFSET UNITYSDK_OFFSET(0xAE6400)

	inline static constexpr unsigned int UISNS_Post_TypeDefinitionIndex = 8094;

	class UISNS_Post : public Il2CppObject
	{
	public:
		UIWidget* postWidget; // 0x18
		UITexture* profilePicture; // 0x20
		::UnityEngine::GameObject* repostNoticeRoot; // 0x28
		UILabel* repostNoticeLabel; // 0x30
		UILabel* snsAccountName; // 0x38
		UILabel* snsAccountId; // 0x40
		::UnityEngine::GameObject* snsAccountAnonymous; // 0x48
		::UnityEngine::GameObject* markIcon; // 0x50
		UILabel* postedTimeText; // 0x58
		UILabel* snsPostText; // 0x60
		UIGrid* snsPostImageGrid; // 0x68
		Il2CppObject* snsPostImages; // 0x70
		::UnityEngine::GameObject* replyIndicator; // 0x78
		::System::Single totalIncrementTime; // 0x80
		UILabel* repostCountText; // 0x88
		UILabel* favorCountText; // 0x90
		::UnityEngine::Animation* repostIconAnimation; // 0x98
		::UnityEngine::Animation* favorIconAnimation; // 0xA0
		UISprite* bgSprite; // 0xA8
		::UnityEngine::Animation* replyPostAppearAnimation; // 0xB0
		::System::Single postRefreshWaitTime; // 0xB8
		::System::Int32 _index; // 0xBC
		FeedItemData* _data; // 0xC0
		Il2CppObject* _onHeightChanged; // 0xC8
		Il2CppObject* _onHeightPrepared; // 0xD0

		::System::Collections::IEnumerator* CoCalculateHeightRoutine(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST_COCALCULATEHEIGHTROUTINE_OFFSET))(arg, nullptr);
		}

		::System::String* _Setup_g__GetChatInputDate|27_0(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST__SETUP_G__GETCHATINPUTDATE|27_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void SetRepostFavorEffectToEnd(FeedItemData* arg)
		{
			((::System::Void(*)(FeedItemData*, ::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST_SETREPOSTFAVOREFFECTTOEND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoPlayRepostFavorEffect_g__PlayIconAnimation|28_0(::UnityEngine::Animation* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST__COPLAYREPOSTFAVOREFFECT_G__PLAYICONANIMATION|28_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnContentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST_ONCONTENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void Setup(FeedItemData* arg, ::System::Int32 arg2, ::System::Single arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(FeedItemData*, ::System::Int32, ::System::Single, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST_SETUP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayRepostFavorEffect(FeedItemData* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(FeedItemData*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISNS_POST_COPLAYREPOSTFAVOREFFECT_OFFSET))(arg, arg2, nullptr);
		}

	};

