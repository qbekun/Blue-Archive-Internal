#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }

#define CLANCHATEMOJI_UPDATE_OFFSET UNITYSDK_OFFSET(0x232D910)
#define CLANCHATEMOJI_UPDATEEMOJIDATETIME_OFFSET UNITYSDK_OFFSET(0x232D920)
#define CLANCHATEMOJI_SETEMOJIINFO_OFFSET UNITYSDK_OFFSET(0x232D9D0)
#define CLANCHATEMOJI_GETDATESCRIPT_OFFSET UNITYSDK_OFFSET(0x232DB10)
#define CLANCHATEMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0x232DB20)

	inline static constexpr unsigned int ClanChatEmoji_TypeDefinitionIndex = 4936;

	class ClanChatEmoji : public Il2CppObject
	{
	public:
		UITexture* emoji; // 0x18
		UILabel* emojiDate; // 0x20
		::System::DateTime* emojiDateTime; // 0x28

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJI_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateEmojiDateTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJI_UPDATEEMOJIDATETIME_OFFSET))(nullptr);
		}

		::System::Void SetEmojiInfo(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJI_SETEMOJIINFO_OFFSET))(arg, nullptr);
		}

		UILabel* GetDateScript()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJI_GETDATESCRIPT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJI_.CTOR_OFFSET))(nullptr);
		}

	};

