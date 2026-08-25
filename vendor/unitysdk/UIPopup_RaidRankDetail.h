#pragma once
#include "unitysdk.h"

class UILabel;
class UICharacterCard;
class UITexture;
class RaidRankListScrollViewController;
namespace UnityEngine { class GameObject; }
class UIPopup_RaidRankDetail_RankJumpDelegator;
class UIPopup_RaidRankDetail_FilterJumpDelegator;
class UIEmblemParcel;
namespace UnityEngine { class Coroutine; }
namespace FlatData { class ContentType; }
class RaidRankListProcessDelegatorBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_RAIDRANKDETAIL_SETLISTEMPTY_OFFSET UNITYSDK_OFFSET(0x279BC40)
#define UIPOPUP_RAIDRANKDETAIL_CANJUMP_OFFSET UNITYSDK_OFFSET(0x279AF40)
#define UIPOPUP_RAIDRANKDETAIL_HANDLEEMPTYCHECK_OFFSET UNITYSDK_OFFSET(0x279C6D0)
#define UIPOPUP_RAIDRANKDETAIL_REQUESTRANKJUMP_OFFSET UNITYSDK_OFFSET(0x279C870)
#define UIPOPUP_RAIDRANKDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x279C8F0)
#define UIPOPUP_RAIDRANKDETAIL_COWAITUSEJUMP_OFFSET UNITYSDK_OFFSET(0x279C900)
#define UIPOPUP_RAIDRANKDETAIL_GET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x279C990)
#define UIPOPUP_RAIDRANKDETAIL_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x279B020)
#define UIPOPUP_RAIDRANKDETAIL_USEJUMP_OFFSET UNITYSDK_OFFSET(0x279CA00)
#define UIPOPUP_RAIDRANKDETAIL_REQUESTBRACKETJUMP_OFFSET UNITYSDK_OFFSET(0x279CAE0)
#define UIPOPUP_RAIDRANKDETAIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x279B3F0)
#define UIPOPUP_RAIDRANKDETAIL_SET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x279D160)
#define UIPOPUP_RAIDRANKDETAIL_REQUESTSCOREJUMP_OFFSET UNITYSDK_OFFSET(0x279D170)
#define UIPOPUP_RAIDRANKDETAIL_HANDLERAIDOPPONENTLIST_OFFSET UNITYSDK_OFFSET(0x279D1F0)
#define UIPOPUP_RAIDRANKDETAIL_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x279BB60)

	inline static constexpr unsigned int UIPopup_RaidRankDetail_TypeDefinitionIndex = 7462;

	class UIPopup_RaidRankDetail : public Il2CppObject
	{
	public:
		UILabel* Level; // 0x18
		UILabel* NickName; // 0x20
		UICharacterCard* Character; // 0x28
		UITexture* TierIcon; // 0x30
		UILabel* Rank; // 0x38
		UILabel* RankPoint; // 0x40
		RaidRankListScrollViewController* ScrollView; // 0x48
		::UnityEngine::GameObject* EmptyMark; // 0x50
		UILabel* EmptyLabel; // 0x58
		UIPopup_RaidRankDetail_RankJumpDelegator* RankJumper; // 0x60
		UIPopup_RaidRankDetail_FilterJumpDelegator* FilterJumper; // 0x68
		UIEmblemParcel* emblemParcel; // 0x70
		::System::Boolean canJump; // 0x78
		::UnityEngine::Coroutine* jumpCoroutine; // 0x80
		::FlatData::ContentType* _CurrentRaidType_k__BackingField; // 0x88
		RaidRankListProcessDelegatorBase* processDelegator; // 0x90

		::System::Void SetListEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_SETLISTEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean CanJump()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_CANJUMP_OFFSET))(nullptr);
		}

		::System::Boolean HandleEmptyCheck(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_HANDLEEMPTYCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void RequestRankJump(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_REQUESTRANKJUMP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitUseJump()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_COWAITUSEJUMP_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_CurrentRaidType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_GET_CURRENTRAIDTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void UseJump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_USEJUMP_OFFSET))(nullptr);
		}

		::System::Void RequestBracketJump(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_REQUESTBRACKETJUMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRaidType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_SET_CURRENTRAIDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestScoreJump(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_REQUESTSCOREJUMP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleRaidOpponentList(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_HANDLERAIDOPPONENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_CO_LOADING_OFFSET))(nullptr);
		}

	};

