#pragma once
#include "unitysdk.h"

class UILabel;
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }

#define CLANLOCALNOTICE_SETLOCALNOTICEINFO_OFFSET UNITYSDK_OFFSET(0x2333BC0)
#define CLANLOCALNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2333C90)

	inline static constexpr unsigned int ClanLocalNotice_TypeDefinitionIndex = 4953;

	class ClanLocalNotice : public Il2CppObject
	{
	public:
		UILabel* noticeScript; // 0x18

		::System::Void SetLocalNoticeInfo(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CLANLOCALNOTICE_SETLOCALNOTICEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANLOCALNOTICE_.CTOR_OFFSET))(nullptr);
		}

	};

