#pragma once
#include "unitysdk.h"

class UISprite;
namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
class UISmallParcelCard;
namespace MX::Conquest { class ConquestTile; }

#define CONQUESTTILEINFODETAILELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2349FB0)
#define CONQUESTTILEINFODETAILELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x234AFD0)

	inline static constexpr unsigned int ConquestTileInfoDetailElement_TypeDefinitionIndex = 5011;

	class ConquestTileInfoDetailElement : public Il2CppObject
	{
	public:
		UISprite* cover; // 0x18
		::UnityEngine::GameObject* on; // 0x20
		::UnityEngine::GameObject* off; // 0x28
		UILabel* bonusValueOn; // 0x30
		UILabel* bonusValueOff; // 0x38
		UISprite* rewardDimCover; // 0x40
		UITexture* baseStructureTextureOn; // 0x48
		UITexture* baseStructureTextureOff; // 0x50
		UILabel* levelLabelOn; // 0x58
		UILabel* levelLabelOff; // 0x60
		UISmallParcelCard* upgradeRewardParcelCard; // 0x68
		::System::Int32 myLevel; // 0x70

		::System::Void SetData(::MX::Conquest::ConquestTile* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEINFODETAILELEMENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEINFODETAILELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

