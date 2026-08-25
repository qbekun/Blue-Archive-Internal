#pragma once
#include "unitysdk.h"

class UILabel;
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }

#define CLANCHATTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2330320)
#define CLANCHATTEXT_UPDATECHATTIME_OFFSET UNITYSDK_OFFSET(0x2330330)
#define CLANCHATTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x23303E0)
#define CLANCHATTEXT_GETDATESCRIPT_OFFSET UNITYSDK_OFFSET(0x23303F0)
#define CLANCHATTEXT_SETCHATINFO_OFFSET UNITYSDK_OFFSET(0x2330400)

	inline static constexpr unsigned int ClanChatText_TypeDefinitionIndex = 4943;

	class ClanChatText : public Il2CppObject
	{
	public:
		UILabel* chatScript; // 0x18
		UILabel* chatDate; // 0x20
		::System::DateTime* chatDateTime; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateChatTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATTEXT_UPDATECHATTIME_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATTEXT_UPDATE_OFFSET))(nullptr);
		}

		UILabel* GetDateScript()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATTEXT_GETDATESCRIPT_OFFSET))(nullptr);
		}

		::System::Void SetChatInfo(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCHATTEXT_SETCHATINFO_OFFSET))(arg, nullptr);
		}

	};

