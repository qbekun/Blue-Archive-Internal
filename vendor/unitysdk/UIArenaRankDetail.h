#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class UICharacterCard;
class UIEmblemParcel;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIARENARANKDETAIL_REQUESTADDITIONALLIST_OFFSET UNITYSDK_OFFSET(0x21F6930)
#define UIARENARANKDETAIL_COREQUESTRANKLIST_OFFSET UNITYSDK_OFFSET(0x21F6A20)
#define UIARENARANKDETAIL_HANDLEARENARANKLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21F6AB0)
#define UIARENARANKDETAIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x21F6D00)
#define UIARENARANKDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x21F72D0)
#define UIARENARANKDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F7370)

	inline static constexpr unsigned int UIArenaRankDetail_TypeDefinitionIndex = 4269;

	class UIArenaRankDetail : public AttributeValueCache
	{
	public:
		UITexture* rankImage; // 0x90
		UILabel* nameLabel; // 0x98
		UILabel* levelLabel; // 0xA0
		UILabel* rankLabel; // 0xA8
		UILabel* allTimeRecordLabel; // 0xB0
		UILabel* seasonRecordLabel; // 0xB8
		UICharacterCard* characterCard; // 0xC0
		UIEmblemParcel* emblemParcel; // 0xC8

		::System::Void RequestAdditionalList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENARANKDETAIL_REQUESTADDITIONALLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRequestRankList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENARANKDETAIL_COREQUESTRANKLIST_OFFSET))(nullptr);
		}

		::System::Boolean HandleArenaRankListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENARANKDETAIL_HANDLEARENARANKLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENARANKDETAIL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENARANKDETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENARANKDETAIL_.CTOR_OFFSET))(nullptr);
		}

	};

