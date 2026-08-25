#pragma once
#include "unitysdk.h"

class UILabel;
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }

#define CLANCHATNOTICE_UPDATENOTICETIME_OFFSET UNITYSDK_OFFSET(0x232FF60)
#define CLANCHATNOTICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x2330010)
#define CLANCHATNOTICE_SETNOTICEINFO_OFFSET UNITYSDK_OFFSET(0x2330020)
#define CLANCHATNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2330300)
#define CLANCHATNOTICE_GETDATESCRIPT_OFFSET UNITYSDK_OFFSET(0x2330310)

	inline static constexpr unsigned int ClanChatNotice_TypeDefinitionIndex = 4942;

	class ClanChatNotice : public Il2CppObject
	{
	public:
		UILabel* noticeScript; // 0x18
		UILabel* noticeDate; // 0x20
		::Il2CppArray<::System::Object*>* tags; // 0x28
		::System::DateTime* noticeDateTime; // 0x30

		::System::Void UpdateNoticeTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATNOTICE_UPDATENOTICETIME_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATNOTICE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetNoticeInfo(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCHATNOTICE_SETNOTICEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATNOTICE_.CTOR_OFFSET))(nullptr);
		}

		UILabel* GetDateScript()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATNOTICE_GETDATESCRIPT_OFFSET))(nullptr);
		}

	};

